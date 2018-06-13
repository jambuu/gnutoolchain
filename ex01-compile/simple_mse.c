
double simple_mse(int *values, int n) {
    if (n == 0)
      return 0;
    double average = 0;
    double mse = 0;
    for (int i = 0; i < n; ++i) {
      average += values[i];
    }
    average /= n;
    for (int i = 0 ; i < n; ++i) {
      double diff = (average - values[i]);
      mse += diff * diff;
    }
    mse /= n;
    return mse;
}
