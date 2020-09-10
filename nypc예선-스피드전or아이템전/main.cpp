#include <stdio.h>
int main ()
{
    int t,n[1001][1001],speed=0,item=0;
    int hap1=0,hap2=0,max1=0,max2=0;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        for(int j=0; j<8; j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0; i<t; i++){
        for(int j=0; j<8; j++){
            if(j<4){
                hap1+=n[i][j];
                if(n[i][j]>max1)max1=n[i][j];
            }
            else {
                hap2+=n[i][j];
                if(n[i][j]>max2)max2=n[i][j];
            }
        }
        if(hap1>hap2)speed=1;
        if(max1>max2)item=1;
        if(speed==item)printf("R\n");
        else if(speed==1&&item==0)printf("S\n");
        else if(speed==0&&item==1)printf("I\n");
        hap1=0;
        hap2=0;
        max1=0;
        max2=0;
        speed=0;
        item=0;
    }
    return 0;
}
