#include <stdio.h>
int main ()
{
    int n,o,k,i,t,x1,x2,num,frog=0;
    int a[1000],b[1000],c[1000];//a=통나무 크기 b=움직이기 시작하는 시점 c=움직이는 속도
    scanf("%d %d %d",&n,&o,&k);
    for(i=0; i<n; i++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }

    for(t=1; t<=100; t++){
        for(int i=0; i<n; i++){
            if(b[i]<=t){
                x1=c[i]*(t-b[i]+1);
                x2=x1+a[i];
                //printf("%d %d 시간:%d\n",x1,x2,t);
            }
            if()
        }printf("\n");
    }
    return 0;
}
