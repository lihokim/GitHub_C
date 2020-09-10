#include <stdio.h>
int n,m,k,s,u[1000],v[1000],t[1000],i,j,r,sum[100],sum1[100],sum2[1000],output=0;

int main ()
{
    scanf("%d %d %d %d",&n,&m,&k,&s);
    for(i=0; i<m; i++){
        scanf("%d %d %d",&u[i],&v[i],&t[i]);
    }
    for(i=0; i<m-1; i++){
        for(j=i+1; j<m; j++){
            if(u[i]==s){
                sum1[i]=t[i];
                if(v[i]==u[j]){
                    sum2[i]=t[i]+t[j];
                    printf("%d \n",t[i]+t[j]);
                }
            }
        }
    }
    for(i=0; i<m; i++){
        printf("%d ",sum2[i]);
    }
    return 0;
}
