insertionsort(int a[], int n) {
 for(int i=1; i<n; i++) {
  int key=a[i];
  int j=i-1;
  for(j=i-1; j>=0 && a[j]>key; j--) {
    a[j+1]=a[j];
  }
  a[j+1]=key;
 }
}
