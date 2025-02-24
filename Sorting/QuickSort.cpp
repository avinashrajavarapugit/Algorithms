int partition(int a, int low, int high) {
 int i=low-1;
 for(int j=low; j<high; j++) {
  if(a[j]<a[high]) {
   i++;
   swap(a[i], a[j]);
  }
 }
 swap(a[i+1], a[high]);
 return i+1;
}

void quicksort(int a[], int low, int high) {
 if(low<high) {
  int pi=partition(a, low, high);
  quicksort(a, low, pi-1);
  quicksort(a, pi+1, high);
 }
}
