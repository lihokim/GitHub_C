#include <stdio.h>
#define swap(x,y) {int z=x; x=y; y=z;}
int main ()
{
    int n,t,i,j,a[500][500],b[500][500];//�ӽ� �迭 �ϳ� ��
    scanf("%d %d",&n,&t);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int x=1; x<=t; x++){//���̽� �� ��ŭ �ݺ�
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(x%2!=0){//x�� Ȧ����
                    if(j<n-1){
                        if(a[i][j]>a[i][j+1]){//i,j�� i,j+1���� ũ��
                            swap(a[i][j],a[i][j+1]);//�ΰ� �ٲٱ�
                        }
                    }
                }
                else {//x�� ¦����
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
                    b[i][j]=a[j][n-1-i];//�ӽ� �迭�� 90�� ȸ���Ѱ� ����
                    if(x==t)printf("%d ",b[i][j]);//���̽� �������� ���
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
