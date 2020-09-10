#include <stdio.h>
int main ()
{
    int n,m,x,y,su=1,sum=0,i,j,floor=0;
    int node1,nodeL[100]={0},nodeR[100]={0};
    int big,small;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    if(x<y){
        big=y;
        small=x;
    }
    else if(x>=y){
        big=x;
        small=y;
    }
    node1=small;
    for(i=1; i<=n; i++){
        nodeL[i]=small;
    }
    for()


    return 0;
}
