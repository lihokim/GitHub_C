#include <stdio.h>
int main ()
{
    int n,a[1000001];
    long long max=-1e18,sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum+=a[j];
            if(sum>max){
                max=sum;
            }
        }sum=0;
    }
    printf("%lld",max);

    return 0;
}
