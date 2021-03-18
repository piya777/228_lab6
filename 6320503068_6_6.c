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
        for( i=0 ; i<strlen(order) ; i++ ){
            if(order[i]=='U'||order[i]=='D'){
                if(x>0&&order[i] == 'U'){
                    if(paper[x][y]=='.'){
                        paper[x][y]='|';
                    }
                    else if(paper[x][y]=='-'){
                        paper[x][y]='+';
                    }
                    x--;
                    if(paper[x][y]=='.'){
                        paper[x][y]='|';
                    }
                    else if(paper[x][y]=='-'){
                        paper[x][y]='+';
                    }
                }
                if(x<psize-1&&order[i] == 'D'){
                    if(paper[x][y]=='.'){
                        paper[x][y]='|';
                    }
                    else if(paper[x][y]=='-'){
                        paper[x][y]='+';
                    }
                    x++;
                    if(paper[x][y]=='.'){
                        paper[x][y]='|';
                    }
                    else if(paper[x][y]=='-'){
                        paper[x][y]='+';
                    }
                }
            }
            else  if(order[i]=='R' || order[i]=='L'){
                if(y<psize-1&&order[i] == 'R'){
                    if(paper[x][y]=='.'){
                        paper[x][y]='-';
                    }
                    else   if(paper[x][y]=='|'){
                        paper[x][y]='+';
                    }
                    y++;
                    if(paper[x][y]=='.'){
                        paper[x][y]='-';
                    }
                    else if(paper[x][y]=='|'){
                        paper[x][y]='+';
                    }
                }
                if(y>0&&order[i] == 'L'){
                    if( paper[x][y]=='.'){
                        paper[x][y]='-';
                    }
                    else  if( paper[x][y]=='|'){
                        paper[x][y]='+';
                    }
                    y--;
                    if( paper[x][y]=='.'){
                        paper[x][y]='-';
                    }
                    else if( paper[x][y]=='|'){
                        paper[x][y]='+';
                    }
                }
            }
        }
        for( i=0 ; i<psize ; i++){
            for( j=0 ; j<psize ; j++){
                printf("%c",paper[i][j]);
            }
            printf("\n");
        }
    }
