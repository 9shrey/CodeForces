#include<stdio.h>
int main(){
    int t,p;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n<6 || n==6 || n==9){
            printf("\nNO\n");
        }
        else if(n==8){
            printf("YES\n");
            printf("5 2 1");
        }
        else{
                
                printf("YES\n");
                if(n%3==0 || n%3==1){
                    p=1;
                }
                else{
                    p=2;
                }
                printf("%d ",p);
                n-=p;
                int m=4;
                printf("%d ",m);
                n=n-(4);
                printf("%d ",n);  
            }
        }
    }
