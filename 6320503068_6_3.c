#include<stdio.h>

    void main(){
        int n,q,i,o,t,max=0;
        scanf("%d %d",&n ,&q);
        int x[n+1];
        for( i=0 ; i<=n ; i++ ){
            x[i]=0;
        }
        char fuct;
        for( i=0 ; i<=q ; i++ ){
            fflush(stdin);
            scanf("%c %d %d",&fuct,&o,&t);
            if(fuct=='U'){
               x[o]=t;
            }
            else if(fuct=='P'){
                for( i=o ; i<=t ; i++ ){
                    if(max<x[i]){
                        max=x[i];
                    }
                }
                printf("%d\n",max);
            }
        }
    }
