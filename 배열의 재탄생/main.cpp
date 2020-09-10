#include <stdio.h>
int main ()
{
    int arr[7],new_arr[7];
    int i,j;
    for(i=0; i<6; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<6; i++){
        new_arr[0]=arr[0];
        new_arr[1]=arr[5];
        new_arr[2]=arr[1];
        new_arr[3]=arr[4];
        new_arr[4]=arr[2];
        new_arr[5]=arr[3];
        printf("%d",new_arr[i]);
    }

    return 0;
}
