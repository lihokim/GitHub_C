#include <stdio.h>
int main ()
{
    int student[1111];
    int i,n,k,count=0,imsi[1111];
    printf("���� ����:");
    scanf("%d",&n);
    printf("��ǳ�� �ٶ��� ����� ���°�? (k) :");
    scanf("%d",&k);
    printf("���Ǵ� �л� ���� :");
    for(i=0; i<n; i++){
        scanf("%d",&student[i]);
        imsi[i]+=student[i]-(k*4); // ���Ƿ� ���� �ӽ� �迭�� �л��� - ��ǳ�� �ٶ��� ���� �л���
        if(student[i]<k*4)imsi[i]=0;
        if(student[i]<k)count+=1;
        else {
            if(imsi[i]%k!=0)count+=(imsi[i]/k)+1; //if �ӽù迭 ������ �л����� �������� ������ �������� ���Ѵ�.
            else count+=imsi[i]/k;
        }
    }printf("%d",count);


    return 0;
}
