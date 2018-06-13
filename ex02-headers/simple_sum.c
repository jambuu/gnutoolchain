int simple_sum(int *values, int n) {
  int result = 0;
  for (int i = 0 ; i < n ; ++i) {
    result += values[i];
  }
  return result;
}
