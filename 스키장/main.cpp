#include <stdio.h>
int main ()
{
    int onedayP,multid,multidP,n,i;
    int imsi,imsi2;
    printf("������� onedayPrice, multi-day, multi-dayPrice, n\n");
    scanf("%d %d %d %d",&onedayP,&multid,&multidP,&n);
    imsi=n*onedayP;
    imsi2=(n/multid)*multidP+(n%multid)*onedayP;
    if(imsi<imsi2){
        printf("%d",imsi); // imsi��� ��찡 imsi2��� ��캸�� �۴ٸ� ���.
    }
    else {
        printf("%d",imsi2); // imsi2��� ��찡 imsi��� ��캸�� �۴ٸ� ���.
    }

    return 0;
}
