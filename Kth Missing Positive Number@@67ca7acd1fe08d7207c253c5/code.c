int findKthMissing(int arr[],int n,int k){
    int nums[arr[n-1]]={0};
    for(int i=0;i<n;i++){
        if(arr[i]>=0) nums[arr[i]-1]=arr[i];
    }
    for(int i=0;i<arr[n-1];i++){
        if(nums[i]==0) count++;
        if(count==k) return i+1;
    }
    return arr[n-1]+1;

}