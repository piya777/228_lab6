#include<stdio.h>
#include<string.h>

    int main(){
        int psize,i,j,x=0,y=0;
        char order[250];
        scanf("%d",&psize);
        scanf("%s",order);
        char paper[psize][psize];
        for( i=0; i<psize ; i++ ){
            for( j=0; j<psize; j++ ){
                paper[i][j] = '.';
            }
        }
        for( i=0 ; i<psize ; i++){
            for( j=0 ; j<psize ; j++){
                printf("%c",paper[i][j]);
            }
            printf("\n");
        }
    }
