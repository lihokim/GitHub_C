#include <stdio.h>
int main ()
{
    int n,a[555],b[555],max=-1,fx[555][555]={0},k,cnt=0,c=0,d=0,sign=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]>max)max=a[i];
        if(b[i]>max)max=b[i];
    }
    for(int i=0; i<n; i++){
        for(int x=0; x<=max; x++){
            for(int y=0; y<=max; y++){
                if(a[i]==x&&b[i]==y)fx[x][y]=1;
            }
        }
    }
    for(int x=1; x<=max; x++){
        for(int y=1; y<=max; y++){
            for(k=90; k>=1; k--){
                if(fx[x][y]==1&&c!=x&&d!=y){
                    if(fx[x+k][y]==1&&fx[x-k][y]==1&&fx[x][y+k]==1&&fx[x][y-k]==1){
                        printf("%d %d %d\n",x,y,k);
                        c=x;
                        d=y;
                        sign=1;
                    }
                }
            }
        }
    }
    if(sign!=1)printf("-1");
    return 0;
}
