#include <stdio.h>
int main ()
{
    int t,a,b,x,y,z;
    double i,Adis,Bdis,mosdis,imsi;
    //scanf("%d",&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d %d",&x,&y,&z);
    for(i=0; i<=100; i+=0.000001){//i�� �ð�
        //Adis=a+x*i;//A������ ��ǥ
        //Bdis=b-(y*i);//B������ ��ǥ
        //mosdis=(z*i);//�ĸ��� ��ǥ
        //printf("%lf- %lf*%lf=%lf\n",b,y,i,Bdis);
        //printf("%lf * %lf = %lf\n",z,i,mosdis);
        if(b-y*i==z*i){
            printf("%lf",i);
        }
    }//printf("%lf",imsi);

    return 0;
}
