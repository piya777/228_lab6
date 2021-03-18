#include<stdio.h>
#include<string.h>

    void main(){
        int n,i,j,k=0;
        scanf("%d",&n);
        char word[n][1000],token[1000];
        for( i=0 ; i<n ; i++ ){
            scanf("%s",word[i]);
        }
        for( i=0 ; i<n ; i++ ){
            for( j=0 ; j<n-i-1 ; j++ ){
                    if(word[j][k]>word[j+1][k]){
                        strcpy(token,word[j+1]);
                        strcpy(word[j+1],word[j]);
                        strcpy(word[j],token);
                    }
                }
            }
           // printf("%s %s %s %s %s\n",word[0],word[1],word[2],word[3],word[4]);
        }

    }
