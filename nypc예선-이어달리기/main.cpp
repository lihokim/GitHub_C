#include <stdio.h>
int main ()
{
    int n,a[100],b[100],c[100],sum[10000],team[10000],m,min=100000,cnt=0,k;
    int i,j,x,y;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d%c%d%c%d",&a[i],&m,&b[i],&m,&c[i]);
        sum[i]=a[i]*6000+b[i]*100+c[i];
    }
    for(i=0; i<n; i++){
        //printf("%d ",sum[i]);
    }printf("\n");
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){

            team[i]=sum[i]+sum[j];

            for(x=0; x<n; x++){
                for(y=i+1; y<n; y++){
                    if(x!=i&&y!=i&&x!=j&&y!=j){//i,j에서 안나온 나머지 수라면
                        //team[i]=team[x]+team[y];
                        printf("%d %d ",x,y);
                    }printf("\n");
                }printf("\n");
            }


        }
    }
    return 0;
}
