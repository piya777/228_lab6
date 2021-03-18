#include<stdio.h>
#include<string.h>

    void main(){
        int n,x=0,i;
        scanf("%d",&n);
        char real[n],tho[n];
        scanf("%s",real);
        scanf("%s",tho);
        for( i=0 ; i<n ; i++ ){
            if(real[i]==tho[i]){
                x++;
            }
        }
        printf("%d %d",x,n-x);
    }
