#include <stdio.h>
int main ()
{
    int n,i,cnt1=0,cnt2=0,signal=0;
    char rb[50000];
    scanf("%d",&n);
    scanf("%s",rb);
    //R�� �� �������� ������
    for(i=0; i<n; i++){
        if(rb[i]=='B')signal=1;
        if(rb[i]=='R'&&signal==1)cnt1++;
    }
    signal=0;
    //R�� �� ���������� ������
    for(i=n-1; i>=0; i--){
        if(rb[i]=='B')signal=1;
        if(rb[i]=='R'&&signal==1)cnt2++;
    }
    if(cnt1<=cnt2)printf("%d",cnt1);
    else printf("%d",cnt2);

    return 0;
}
