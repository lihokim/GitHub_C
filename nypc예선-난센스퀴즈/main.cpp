#include <stdio.h>
int main ()
{
    int i,t,a[1001],b[1001],c[1001],d[1001];
    scanf("%d",&t);
    for(i=0; i<t; i++){
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
    }
    for(i=0; i<t; i++){
        if((a[i]+b[i])-c[i]==d[i])printf("%d+%d-%d=%d\n",a[i],b[i],c[i],d[i]);
        if(a[i]+(b[i]*c[i])==d[i])printf("%d+%d*%d=%d\n",a[i],b[i],c[i],d[i]);
        if(a[i]+(b[i]/c[i])==d[i]&&b[i]%c[i]==0)printf("%d+%d/%d=%d\n",a[i],b[i],c[i],d[i]);

        if((a[i]-b[i])+c[i]==d[i])printf("%d-%d+%d=%d\n",a[i],b[i],c[i],d[i]);
        if(a[i]-(b[i]*c[i])==d[i])printf("%d-%d*%d=%d\n",a[i],b[i],c[i],d[i]);
        if(a[i]-(b[i]/c[i])==d[i]&&b[i]%c[i]==0)printf("%d-%d/%d=%d\n",a[i],b[i],c[i],d[i]);

        if((a[i]*b[i])+c[i]==d[i])printf("%d*%d+%d=%d\n",a[i],b[i],c[i],d[i]);
        if((a[i]*b[i])-c[i]==d[i])printf("%d*%d-%d=%d\n",a[i],b[i],c[i],d[i]);
        if((a[i]*b[i])/c[i]==d[i]&&(a[i]*b[i])%c[i]==0)printf("%d*%d/%d=%d\n",a[i],b[i],c[i],d[i]);

        if((a[i]/b[i])+c[i]==d[i]&&a[i]%b[i]==0)printf("%d/%d+%d=%d\n",a[i],b[i],c[i],d[i]);
        if((a[i]/b[i])-c[i]==d[i]&&a[i]%b[i]==0)printf("%d/%d-%d=%d\n",a[i],b[i],c[i],d[i]);
        if((a[i]/b[i])*c[i]==d[i]&&a[i]%b[i]==0)printf("%d/%d*%d=%d\n",a[i],b[i],c[i],d[i]);
    }
    return 0;
}

