int kthSmallest(int arr[],int n,int k){
    if(k>n) return -1;
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[minidx]>arr[j]){
                minidx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minidx];
        arr[minidx]=temp;
    }
    return arr[k-1];
}