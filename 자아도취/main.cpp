#include <stdio.h>
#include <math.h>
int main  ()
{
    int k,i,num,hap=0,range1=1,range2=1;
    scanf("%d",&k);
    for(i=1; i<k; i++){
        range1*=10;  //i���� ����
    }
    for(i=1; i<=k; i++){
        range2*=10;  //i���� ����
    }
    for(i=range1; i<range2; i++){
        num=i;
        while(num!=0){    //�� �ڸ��� ���ϴ� ��
            hap+=pow((num%10),k);
            num/=10;
        }
        if(hap==i){  //������ ���� ���������
            printf("%d\n",hap); //�� �� ���
        }
        hap=0;
    }

    return 0;
}
