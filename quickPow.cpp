首先我们可以直接按照上述递归方法实现：

long long quickPow(long long a, long long b) {
  if (b == 0) return 1;
  long long res = quickPow(a, b / 2);
  if (b % 2)
    return res * res * a;
  else
    return res * res;
}
第二种实现方法是非递归式的。它在循环的过程中将二进制位为 1 时对应的幂累乘到答案中。尽管两者的理论复杂度是相同的，但第二种在实践过程中的速度是比第一种更快的，因为递归会花费一定的开销。

long long quickPow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
    if (b & 1) res = res * a;
    a = a * a;
    b >>= 1;
  }
  return res;
}