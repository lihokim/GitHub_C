#include <stdio.h>
int main ()
{
    int n,i,cnt1=0,cnt2=0,signal=0;
    char rb[50000];
    scanf("%d",&n);
    scanf("%s",rb);
    //R을 다 왼쪽으로 보내기
    for(i=0; i<n; i++){
        if(rb[i]=='B')signal=1;
        if(rb[i]=='R'&&signal==1)cnt1++;
    }
    signal=0;
    //R을 다 오른쪽으로 보내기
    for(i=n-1; i>=0; i--){
        if(rb[i]=='B')signal=1;
        if(rb[i]=='R'&&signal==1)cnt2++;
    }
    if(cnt1<=cnt2)printf("%d",cnt1);
    else printf("%d",cnt2);

    return 0;
}
