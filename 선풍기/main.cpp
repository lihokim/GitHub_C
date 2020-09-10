#include <stdio.h>
int main ()
{
    int student[1111];
    int i,n,k,count=0,imsi[1111];
    printf("교실 수는:");
    scanf("%d",&n);
    printf("선풍기 바람이 몇명에게 가는가? (k) :");
    scanf("%d",&k);
    printf("교실당 학생 수는 :");
    for(i=0; i<n; i++){
        scanf("%d",&student[i]);
        imsi[i]+=student[i]-(k*4); // 임의로 만든 임시 배열에 학생수 - 선풍기 바람이 가는 학생수
        if(student[i]<k*4)imsi[i]=0;
        if(student[i]<k)count+=1;
        else {
            if(imsi[i]%k!=0)count+=(imsi[i]/k)+1; //if 임시배열 나누기 학생수의 나머지가 있으면 나머지를 더한다.
            else count+=imsi[i]/k;
        }
    }printf("%d",count);


    return 0;
}
