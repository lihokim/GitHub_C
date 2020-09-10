#include <stdio.h>
#include <math.h>
int main  ()
{
    int k,i,num,hap=0,range1=1,range2=1;
    scanf("%d",&k);
    for(i=1; i<k; i++){
        range1*=10;  //i범위 저장
    }
    for(i=1; i<=k; i++){
        range2*=10;  //i범위 저장
    }
    for(i=range1; i<range2; i++){
        num=i;
        while(num!=0){    //각 자릿수 구하는 식
            hap+=pow((num%10),k);
            num/=10;
        }
        if(hap==i){  //제곱의 합이 원래수라면
            printf("%d\n",hap); //그 수 출력
        }
        hap=0;
    }

    return 0;
}
