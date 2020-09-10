#include <stdio.h>
int main ()
{
    int enemies[200],armies[200]; //배열 넉넉히
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
            if(enemies[i]<=armies[j]){ // 캐릭터의 공격력이 몬스터의 공격력 이상이라면
                count++; // 개수 새기
                enemies[i]=max; // 중복 안되게 최댓값 넣기
                armies[j]=min; // 중복안되게 최솟값 넣기
            }
        }
    }printf("%d",count);//개수 출력


    return 0;
}
