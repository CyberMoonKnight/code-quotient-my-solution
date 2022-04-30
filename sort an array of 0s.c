void swap(int *x, int *y) 
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
void sorting012Array(int a[], int n) {
  int i = 0, j = 0, k = n - 1;
  while (j <= k) {
    if (a[j] == 0) {
      swap( &a[j], &a[i]);
      i++;
      j++;
    } else if (a[j] == 1)
      j++;
    else if (a[j] == 2) {
      swap( &a[j], &a[k]);
      k--;
    }
  }
}
