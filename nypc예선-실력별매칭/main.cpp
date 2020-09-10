#include <stdio.h>
#include <stdlib.h>
#define swap(x,y) {int z=x; x=y; y=z;}
long long n,s,k,i,j;
long long arr[5001],cha[5001],num[5001];

int main ()
{
    scanf("%lld",&n);
    scanf("%lld %lld",&s,&k);
    for(i=0; i<n; i++){
        scanf("%lld",&arr[i]);
        cha[i]=abs(s-arr[i]);
        num[i]=i+1;
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(cha[i]>cha[j]){
                swap(cha[i],cha[j]);
                swap(num[i],num[j]);
            }
        }
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(cha[i]==cha[j]&&arr[i]>arr[j]){
                swap(num[i],num[j]);
            }
        }
    }
    for(i=0; i<k; i++){
        printf("%lld ",num[i]);
    }
    return 0;
}
