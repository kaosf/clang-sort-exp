#include "sort.h"
#include <stdio.h>

void print_array(int a[], const int n)
{
  int i;
  for (i = 0; i < n; i++) {
    printf("%d, ", a[i]);
  }
  printf("\n");
}

void copy_array(int a[], int b[], const int n)
{
  int i;
  for (i = 0; i < n; i++) {
    b[i] = a[i];
  }
}

int main(int argc, char* argv[])
{
  int a[] = {7, 3, 4, 1, 8, 2, 6, 9, 5, 0};
  const int n = sizeof(a) / sizeof(int);
  int b[n], c[n], d[n];

  print_array(a, n);

  copy_array(a, b, n);
  bubble_sort(b, n);
  print_array(b, n);

  copy_array(a, c, n);
  bubble_sort_p(c, n);
  print_array(c, n);

  copy_array(a, d, n);
  bubble_sort_ps(d, n);
  print_array(d, n);

  return 0;
}
