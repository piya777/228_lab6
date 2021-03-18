#include<stdio.h>
#include<string.h>

    void main(){
        int n,i,j,k;
        scanf("%d",&n);
        char word[n][1000],token[1000];
        for( i=0 ; i<n ; i++ ){
            scanf("%s",word[i]);
        }
        for( i=0 ; i<n ; i++ ){
            for( j=i+1 ; j<n ; j++ ){
                if(strcmp(word[i],word[j])>0){
                    strcpy(token,word[j]);
                    strcpy(word[j],word[i]);
                    strcpy(word[i],token);
                }
            }
           // printf("%s %s %s %s %s\n",word[0],word[1],word[2],word[3]
        }
        for( i=0 ; i<n ; i++ ){
            printf("%s\n",word[i]);
        }
    }

