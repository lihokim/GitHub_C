#include <stdio.h>
int main ()
{
    int n,i,a[10000],b[10000],save=0,sign=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++){
        scanf("%d",&b[i]);
    }
    for(i=0; i<n; i++){
        save+=a[i]-b[i];
        if(a[i]-b[i]<0)sign=1;
    }

    if(sign==1)printf("-1");
    else printf("%d",save);
    return 0;
}
