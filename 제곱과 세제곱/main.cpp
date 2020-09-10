#include <stdio.h>
int main ()
{
    int i,j,a,b,count=0,cnt=0;
    scanf("%d %d",&a,&b);
    for(i=0; i<=100; i++){
        count=0;
        for(j=2; j<=100; j++){
            if(i%j==0)count++;
        }

        if(count==1){
            if(i*i>=a&&i*i<=b)cnt++;
            if(i*i*i>=a&&i*i*i<=b)cnt++;
        }

    }printf("%d  ",cnt);



    return 0;
}
