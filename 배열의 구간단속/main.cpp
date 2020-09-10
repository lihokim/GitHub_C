#include <stdio.h>
int main ()
{
    int arr[1000];
    int i,n,count=0,max=0;
    printf("배열 길이 입력:");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        if(count>=max)max=count;
        if(arr[i+1]>arr[i])count++;
        else count=0;
    }
    printf("%d",max+1);

    return 0;
}
