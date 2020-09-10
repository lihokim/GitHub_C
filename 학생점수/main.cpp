#include <stdio.h>
int main ()
{
    int max=0,min=1000,a,n[10000];
    scanf("%d",&a);
    for(int i=0; i<a; i++){
        scanf("%d",&n[i]);
        if(n[i]<=min)min=n[i];
        if(n[i]>=max)max=n[i];
    }printf("%d",max-min);

    return 0;
}
