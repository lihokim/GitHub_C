#include <stdio.h>
int main()
{
    int i,j,k;
    int re1,re2,fx[101][101]={0},cnt=0,max=-1,end=0,sign=0;
    int a,b,imsi,t;
    scanf("%d %d %d",&i,&j,&k);
    for(a=0; a<3; a++){
        for(b=0; b<101; b++){
            if(a==0){
                if(b<i)fx[a][b]=1;
                else {
                    fx[a][b]=0;
                    break;
                }
            }
            else if(a==1){
                if(b<j)fx[a][b]=1;
                else {
                    fx[a][b]=0;
                    break;
                }
            }
            else if(a==2){
                if(b<k)fx[a][b]=1;
                else {
                    fx[a][b]=0;
                    break;
                }
            }
            if(i>max)max=i;
            if(j>max)max=j;
            if(k>max)max=k;
        }
    }

    for(t=1; t<=300; t++){
        if(t%2!=0){
            sign=0;
            for(a=0; a<3; a++){
                for(b=0; b<101; b++){
                    cnt=0;
                    if(fx[a][b]==1){
                        for(imsi=1; imsi<=max; imsi++){
                            if(fx[a-imsi][b]==1)cnt++;
                            if(fx[a][b+imsi]==1)cnt++;
                            if(fx[a-1][b+imsi]==1)cnt++;
                            if(cnt==0){
                                fx[a][b]=0;
                                if(a+1==3&&b+1==1)end=1;
                                printf("%d %d\n",a+1,b+1);fflush(stdout);
                                sign=1;
                                break;
                            }
                        }

                    }
                }if(sign==1)break;
            }
        }
        if(t%2==0){
            scanf("%d %d",&re1,&re2);
            if(re1==3&&re2==1){
                end=1;
                break;
            }
            re1=re1-1;
            re2=re2-1;
            for(a=0; a<3; a++){
                for(b=0; b<101; b++){
                    fx[re1][re2]=0;
                    for(imsi=1; imsi<=max; imsi++){
                        fx[re1-imsi][re2]=0;
                        fx[re1][re2+imsi]=0;
                        fx[re1-1][re2+imsi]=0;
                    }
                }
            }
        }
        if(end==1)break;
    }
    return 0;
}
