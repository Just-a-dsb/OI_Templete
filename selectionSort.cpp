选择排序：
void selectionSort(int* a, int n) {
  for (int i = 1; i < n; ++i) {
    int k = i;
    for (int j = i + 1; j <= n; ++j) {
      if (a[j] < a[k]) {
        k = j;
      }
    }
    int t = a[i];
    a[i] = a[k];
    a[k] = t;
  }
}