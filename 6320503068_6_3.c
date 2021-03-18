#include<stdio.h>

    void main(){
        int n,q,i,o,t,max=0;
        scanf("%d %d",&n ,&q);
        int x[n];
        for( i=0 ; i<n ; i++ ){
            x[i]=0;
        }
        char fuct;
        for( i=0 ; i<q ; i++ ){
            fflush(stdin);
            scanf("%c",&fuct);
            if(fuct=='U'){
                scanf("%d %d",&o,&t);
                x[o-1]=t;
            }
            else if(fuct=='P'){
                scanf("%d %d",&o,&t);
                for( i=o-1 ; i<t ; i++ ){
                    if(max<x[i]){
                        max=x[i];
                    }
                }
                printf("%d\n",max);
            }
        }
    }
