#include <stdio.h>
int main ()
{
    int ta[100000],tb[100000],tc[100000],p[100000],q[100000],n;
    int a[100],b[100],c[100];
    char m;
    for(int i=0; i<3; i++){
        scanf("%d%c%d%c%d",&ta[i],&m,&tb[i],&m,&tc[i]);
        p[i]=ta[i]*6000 + tb[i]*100 + tc[i];
    }
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%c%d%c%d",&a[i],&m,&b[i],&m,&c[i]);
        q[i]=a[i]*6000 + b[i]*100 + c[i];
    }
    for(int i=0; i<n; i++){
        if(q[i]>p[0])printf(":(\n");
        else if(q[i]>p[1]&&q[i]<=p[0])printf("*\n");
        else if(q[i]>p[2]&&q[i]<=p[1])printf("**\n");
        else printf("***\n");
    }
    return 0;
}
