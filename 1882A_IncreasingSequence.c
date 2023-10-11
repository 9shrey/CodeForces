#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        if(a[0]==1){
            b[0]=2;
        }
        else{
            b[0]=1;
        }
        for(int i=1;i<n;i++){
            if(a[i]==b[i-1]+1){
                b[i]=a[i]+1;
            }
            else{
                b[i]=b[i-1]+1;
            }
        }
        printf("%d\n",b[n-1]);
    }
}