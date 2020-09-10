#include <stdio.h>
int main ()
{
    int N,M;
    char map[100][100];
    scanf("%d %d",&N,&M);
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf(" %c",&map[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(map[i][j]=='X'){

            }
        }printf("\n");
    }

    return 0;
}
