Void heapify(int a[], int node, int length) {
 Int leftChild = 2*node+1, rightChild = 2*node+2;
 Int indMax=node;
 if(leftChild<n && a[leftChild]>a[indMax]) {
  indMax = leftChild;
 }
 if(rightChild<length && a[rightChild]>a[indMax]) {
  indMax = rightChild;
 }
 if(node!=indMax) {
  swap(a[indMax], a[node]);
  heapify(a, indMax, length);
 }
}
 
Void heapSort(int a[], int n) {
 for(int i=(n-1)/2; i>=0; i--) {
  heapify(a, i, n);
 }  
 for(int i=n-1; i>0; i--) {
  swap(a[0], a[i]);
  heapify(a, 0, i);
 }
}
