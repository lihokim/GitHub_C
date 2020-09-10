#include <stdio.h>
long long int x[300000],y[300000];
long long int n,a,b,mid;
long long int i,j,cnt=0,count=0,imsi1=0,imsi2=0,imsi3=0;
int main ()
{
    scanf("%lld %lld %lld",&n,&a,&b);
    for(i=0; i<n; i++){
        scanf("%lld %lld",&x[i],&y[i]);
    }
    mid=n/2;
    for(i=0; i<mid; i++){
        cnt=0;
        for(j=0; j<n; j++){
            imsi1=(x[i]-x[j])*(0-y[j])-(b-x[j])*(y[i]-y[j]);
            imsi2=(b-x[j])*(0-y[j])-(a-x[j])*(0-y[j]);
            imsi3=(a-x[j])*(y[i]-y[j])-(x[i]-x[j])*(0-y[j]);
            if(imsi1>0&&imsi2>0&&imsi3>0)cnt++;
            if(imsi1<0&&imsi2<0&&imsi3<0)cnt++;
        }
        if(cnt==0)count++;
    }
    for(i=mid; i<n; i++){
        cnt=0;
        for(j=0; j<n; j++){
            imsi1=(x[i]-x[j])*(0-y[j])-(b-x[j])*(y[i]-y[j]);
            imsi2=(b-x[j])*(0-y[j])-(a-x[j])*(0-y[j]);
            imsi3=(a-x[j])*(y[i]-y[j])-(x[i]-x[j])*(0-y[j]);
            if(imsi1>0&&imsi2>0&&imsi3>0)cnt++;
            if(imsi1<0&&imsi2<0&&imsi3<0)cnt++;
        }
        if(cnt==0)count++;
    }
    printf("%lld",count);

    return 0;
}
