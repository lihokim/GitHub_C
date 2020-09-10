#include <stdio.h>
#define rng 100000
#define swap(a,b) {int c=a; a=b; b=c;}
int main ()
{
    int n,m,x[rng],y[rng],t[rng],i,j,f,k[rng]={1};
    scanf("%d %d",&n,&m);
    for(i=0; i<m; i++){
        scanf("%d %d %d",&x[i],&y[i],&t[i]);
    }
    for(i=0; i<m; i++){
        for(j=i+1; j<m; j++){
            if(t[i]>t[j]){
                swap(t[i],t[j]);
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
        }
    }

    for(i=0; i<m; i++){
        if(x[i]==1||x[i]==k[i]){
            k[i]=y[i];
        }
        else if(y[i]==1||y[i]==k[i]){
            k[i]=x[i];

        }printf("%d",k[i]);


    }

    return 0;
}
