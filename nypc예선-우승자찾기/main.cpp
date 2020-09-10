#include <stdio.h>
#define swap(x,y) {int z=x; x=y; y=z;}
int main ()
{
    int n,k,arr[10001],imsi[10001],cnt[1000]={0},max[100],count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0; i<k; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<k; i++){
        max[i]=-1;
        for(int j=0; j<n; j++){
            if(arr[i]==j+1)cnt[j]++;
            if(cnt[j]>max[i]){
                max[i]=cnt[j];
            }
        }
        for(int r=0; r<n; r++){
            if(max[i]==cnt[r]){
                imsi[i]=r+1;
            }
        }
    }

    for(int i=0; i<k; i++){
        for(int j=i+1; j<k; j++){
            if(imsi[i]>imsi[j])swap(imsi[i],imsi[j]);
        }
    }
    for(int i=0; i<k; i++){
        for(int j=i+1; j<k; j++){
            if(imsi[i]==imsi[j])imsi[i]=0;
        }
        if(imsi[i]!=0)count++;
    }
    printf("%d\n",count);
    for(int i=0; i<k; i++){
        if(imsi[i]!=0)printf("%d ",imsi[i]);
    }


    return 0;
}
