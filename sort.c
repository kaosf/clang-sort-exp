void bubble_sort(int a[], const int n)
{
  int t, i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }
}

// pointer version
void bubble_sort_p(int a[], const int n)
{
  int t;
  int *p = a, *q;
  for (; p < a + n - 1; p++) {
    for (q = p + 1; q < a + n; q++) {
      if (*p > *q) {
        t = *p;
        *p = *q;
        *q = t;
      }
    }
  }
}

// pointer and swap without temp version
void bubble_sort_ps(int a[], const int n)
{
  int *p = a, *q;
  for (; p < a + n - 1; p++) {
    for (q = p + 1; q < a + n; q++) {
      if (*p > *q) {
        *p = *q ^ *p;
        *q = *p ^ *q;
        *p = *q ^ *p;
      }
    }
  }
}
