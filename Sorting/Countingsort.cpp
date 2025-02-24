Void csort(int a[], int n) {
 Int range=*max_element(a, a+n), count[range+1]={0}, ans[n];
 for(int i=0; i<n; i++) 
 count[a[i]]++;
 for(int i=1; i<=range; i++)
  count[i]+=count[i-1];
 for(int i=n-1; i>=0; i--)
  ans[--count[a[i]]]=a[i];
}
