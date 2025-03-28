trachPlayer(int ranked[n],int n,int player[m],int result[m]){
    int x=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ranked[j]==n-1 && ranked[j]<player[i]){
                printf("%d\n",x+1);
                x=1;
                break;
            }
            else if(ranked[j]<player[i]){
                printf("%d\n",x);
                x=1;
                break;
            }
            else if(ranked[j]>player[i]){
                x++;
            }
        }
    }
}