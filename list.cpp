//链表
#include <cstdio>

using namespace std;

const int N = 1e5 + 5;

struct list {
	int next[N], prev[N], val[N], id[N], tot;
	// next_i 表示索引为 i 的后一个数的索引 
	// prev_i 表示索引为 i 的前一个数的索引 
	// val_i 表示索引为 i 的编号（值）
	// id_x 表示编号为 x 的人的索引
	// tot 表示当前链表有多少个元素 
	bool vis[N];
	
	list() {
		tot = 1;
		next[0] = prev[0] = val[0] = id[0] = 0; // 建一个假的点 0 
	}
	
	void push_right(int x, int y) {
		x = id[x];
		++tot;
		val[tot] = y;
		id[y] = tot;
		prev[next[x]] = tot;
		next[tot] = next[x];
		next[x] = tot;
		prev[tot] = x;
	}
	
	void push_left(int x, int y) {
		x = id[x];
		push_right(val[prev[x]], y);
	}
	
	void pop(int x) {
		x = id[x];
		if (vis[x]) {
			return;
		}
		vis[x] = 1;
		next[prev[x]] = next[x];
		prev[next[x]] = prev[x];
	}
	
	int right(int x) {
		x = id[x];
		return val[next[x]];
	}
	
	int left(int x) {
		x = id[x];
		return val[prev[x]];
	}
} l;

int main() {
	int n;
	scanf("%d", &n);
	l.push_right(0, 1);
	for (int i = 2; i <= n; ++i) {
		int x, p;
		scanf("%d%d", &x, &p);
		if (p) {
			l.push_right(x, i);
		}
		else {
			l.push_left(x, i);
		}
	}
	int m;
	scanf("%d", &m);
	for (int i = 1; i <= m; ++i) {
		int x;
		scanf("%d", &x);
		l.pop(x);
	}
	int y = l.right(0);
	while (y) {
		printf("%d ", y);
		y = l.right(y);
	}
}