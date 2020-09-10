#include <stdio.h>
int main ()
{
    long long n,m;
    long double max,cart,a[3001],b[3001],c[3001],d[3001];
    long long i,j,output[3001]={0};
    scanf("%lld %lld",&n,&m);
    for(i=0; i<n; i++){
        scanf("%Lf %Lf",&a[i],&b[i]);
    }
    for(i=0; i<m; i++){
        scanf("%Lf %Lf",&c[i],&d[i]);
    }
    for(i=n-1; i>=0; i--){
        max=-1.000000;
        for(j=m-1; j>=0; j--){
            cart=(double)(a[i]+c[j])/(b[i]+d[j]);
            if(cart>=max){
                max=cart;
                output[i]=j+1;
            }
        }
    }
    for(i=0; i<n; i++)printf("%lld\n",output[i]);
    return 0;
}
