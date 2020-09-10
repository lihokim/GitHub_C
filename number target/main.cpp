#include <stdio.h>
int main ()
{
    int number,target,n,count=0,i,imsi,min=99999;
    int a=2,b=1,c=-1;
    scanf("%d %d",&number,&target);
    for(i=1; i<=1000; i++){
        number*=a;
        if(number==b||number-target==c){
            break;
            count+=i;
        }
    }
    printf("%d",count);


    return 0;
}
