#include <stdio.h>
int main ()
{
    int t,a,b,x,y,z;
    double i,Adis,Bdis,mosdis,imsi;
    //scanf("%d",&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d %d",&x,&y,&z);
    for(i=0; i<=100; i+=0.000001){//i는 시간
        //Adis=a+x*i;//A기차의 좌표
        //Bdis=b-(y*i);//B기차의 좌표
        //mosdis=(z*i);//파리의 좌표
        //printf("%lf- %lf*%lf=%lf\n",b,y,i,Bdis);
        //printf("%lf * %lf = %lf\n",z,i,mosdis);
        if(b-y*i==z*i){
            printf("%lf",i);
        }
    }//printf("%lf",imsi);

    return 0;
}
