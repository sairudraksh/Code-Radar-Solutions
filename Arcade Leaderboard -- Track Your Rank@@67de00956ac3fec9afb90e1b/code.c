void trachPlayer(int ranked[],int n,int player[],int result[]){
    int x=1;
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ranked[j]==n-1 && ranked[j]<player[i]){
                printf("%d\n",x+1);
                arr[k]=x;
                k++;
                x=1;
                break;
            }
            else if(ranked[j]<player[i]){
                result[k]=x;
                k++;
                x=1;
                break;
            }
            else if(ranked[j]>player[i]){
                x++;
            }
        }
    }
}