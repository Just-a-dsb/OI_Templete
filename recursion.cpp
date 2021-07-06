递归：
int func(传入数值) {
  if (终止条件) return 最小子问题解;
  return func(缩小规模);
}