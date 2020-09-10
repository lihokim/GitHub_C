#include <stdio.h>
#define swap(x,y) {int z=x; x=y; y=z;}
int main ()
{
    int n,t,i,j,a[500][500],b[500][500];//임시 배열 하나 더
    scanf("%d %d",&n,&t);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int x=1; x<=t; x++){//케이스 수 만큼 반복
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(x%2!=0){//x가 홀수면
                    if(j<n-1){
                        if(a[i][j]>a[i][j+1]){//i,j가 i,j+1보다 크면
                            swap(a[i][j],a[i][j+1]);//두개 바꾸기
                        }
                    }
                }
                else {//x가 짝수면
                    if(j<n-1){
                        if(b[i][j]>b[i][j+1]){
                            swap(b[i][j],b[i][j+1]);
                        }
                    }
                }
            }
        }
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(x%2!=0){
                    b[i][j]=a[j][n-1-i];//임시 배열에 90도 회전한거 저장
                    if(x==t)printf("%d ",b[i][j]);//케이스 끝났으면 출력
                }
                else {
                    a[i][j]=b[j][n-1-i];
                    if(x==t)printf("%d ",a[i][j]);
                }
            }if(x==t)printf("\n");
        }
    }
    return 0;
}
