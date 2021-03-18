#include<stdio.h>

    void main(){
        int n,i,p[1000],max=0,min=0,x,y,m;
        scanf("%d",&n);
        for( i=0 ; i<n ; i++ ){
            scanf("%d %d",&x,&y);
            p[x-1]++;
        }
        for( i=0 ; i<n ; i++ ){
            if(max<p[i]){
                max=i;
            }
        }
        min=max;
        for( i=0 ; i<n ; i++ ){
            if(min>p[i]){
                min=i;
            }
        }
        printf("%d %d",max,min);

    }
