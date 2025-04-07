int findKthMissing(int arr[],int n,int k){
    int z=k
    int nums[arr[n-1]];
    for(int i=0;i<arr[n-1];i++){
        nums[i]=0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0) nums[arr[i]-1]=arr[i];
    }
    int count=0;
    for(int i=0;i<arr[n-1];i++){
        if(nums[i]==0){
            count++;
            z--;
        }
        if(count==k) return i+1;
    }
    return arr[n-1]+k;
}