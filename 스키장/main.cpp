#include <stdio.h>
int main ()
{
    int onedayP,multid,multidP,n,i;
    int imsi,imsi2;
    printf("순서대로 onedayPrice, multi-day, multi-dayPrice, n\n");
    scanf("%d %d %d %d",&onedayP,&multid,&multidP,&n);
    imsi=n*onedayP;
    imsi2=(n/multid)*multidP+(n%multid)*onedayP;
    if(imsi<imsi2){
        printf("%d",imsi); // imsi라는 경우가 imsi2라는 경우보다 작다면 출력.
    }
    else {
        printf("%d",imsi2); // imsi2라는 경우가 imsi라는 경우보다 작다면 출력.
    }

    return 0;
}
