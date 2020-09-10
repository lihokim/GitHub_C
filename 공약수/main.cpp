#include <stdio.h>
int main ()
{
    int a,b,c,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=1; i<=1000; i++){
        if(a%i==0 && b%i==0 && c%i==0)count++; //세 수를 어떤수로 나눴을떄 나머지가 모두 0이면
    }printf("%d",count);
    return 0;
}
