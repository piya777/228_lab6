#include<stdio.h>

    void main(){
        int n,q,i,o,t,max,j;
        scanf("%d %d",&n ,&q);
        int x[n+1];
        for( i=1 ; i<=n ; i++ ){
            x[i]=0;
        }
        char fuct;
        for( i=0 ; i<q ; i++ ){
            scanf("%s",&fuct);
            if(fuct=='U'){
                scanf("%d %d",&o,&t);
                x[o]=t;
            }
            if(fuct=='P'){
                scanf("%d %d",&o,&t);
                max=0;
                for( j=o ; j<=t ; j++ ){
                    if(x[j]>max){
                        max=x[j];
                    }
                }
                printf("%d\n",max);
            }
        }
    }
