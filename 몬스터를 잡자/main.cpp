#include <stdio.h>
int main ()
{
    int enemies[200],armies[200]; //�迭 �˳���
    int i,j,count=0,min=0,max=999;
    for(i=0; i<3; i++){
        printf("enemies");
        scanf("%d",&enemies[i]);
    }
    for(i=0; i<4; i++){
        printf("armies");
        scanf("%d",&armies[i]);
    }
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            if(enemies[i]<=armies[j]){ // ĳ������ ���ݷ��� ������ ���ݷ� �̻��̶��
                count++; // ���� ����
                enemies[i]=max; // �ߺ� �ȵǰ� �ִ� �ֱ�
                armies[j]=min; // �ߺ��ȵǰ� �ּڰ� �ֱ�
            }
        }
    }printf("%d",count);//���� ���


    return 0;
}
