#include <stdio.h>
int main ()
{
	int x,y,hamsu,gi,shape,p,q,b,c,i,j;
	printf("���� ������ �´ٸ� ��ȣ�ȿ� �ִ� ���� �Է����ּ���.\n");
	printf("�Լ� : �����Լ�(1) / �����Լ�(2)\n");
	scanf("%d",&hamsu);
	if(hamsu==1){
		printf("�����? : ");
		scanf("%d",&gi);
		printf("y������? : ");
		scanf("%d",&y);
		printf("\n�����Լ� �� : ");
		if(y<0){
            printf("y=%dx%d",gi,y);
            printf("\n");
            for(j=20; j>=-20; j--){
                for(i=-15; i<=15; i++){
                    if(gi*i+y==j)printf(" * ");
                    else if(i==0)printf(" �� ");
                    else if(j==0)printf(" �� ");
                    else printf("   ");
                }printf("\n");
            }printf("\n\n\n\n");
		}
		else if(y>0){
            printf("y=%dx+%d",gi,y);
            printf("\n");
            for(j=20; j>=-20; j--){
                for(i=-15; i<=15; i++){
                    if(gi*i+y==j)printf(" * ");
                    else if(i==0)printf(" �� ");
                    else if(j==0)printf(" �� ");
                    else printf("   ");
                }printf("\n");
            }printf("\n\n");
		}
		else {
            printf("y=%dx",gi);
            printf("\n");
            for(j=20; j>=-20; j--){
                for(i=-15; i<=15; i++){
                    if(gi*i+y==j)printf(" * ");
                    else if(i==0)printf(" �� ");
                    else if(j==0)printf(" �� ");
                    else printf("   ");
                }printf("\n");
            }printf("\n\n");
        }
	}
	else if(hamsu==2){
		printf("ex)�⺻��:y=ax�� ǥ����:y=a(x-p)��+q  �Ϲ���:y=ax��+bx+c\n\n");
		printf("���� : �⺻��(1) / ǥ����(2) / �Ϲ���(3)\n");
		scanf("%d",&shape);
		if(shape==1){
			printf("�����? : ");
			scanf("%d",&gi);
			printf("\n�����Լ� �� : y=%dx��",gi);
            printf("\n");
            for(j=20; j>=-20; j--){
                for(i=-15; i<=15; i++){
                    if(i*i*gi==j)printf(" * ");
                    else if(i==0)printf(" �� ");
                    else if(j==0)printf(" �� ");
                    else printf("   ");
                }printf("\n");
            }printf("\n\n");
		}
		else if(shape==2){
			printf("�����? : ");
			scanf("%d",&gi);
			printf("�������� ��ǥ��? p,q �� �Է� : ");
			scanf("%d,%d",&p,&q);
			printf("\n�����Լ� �� : ");
			if(p>0&&q>0){
                printf("y=%d(x-%d)��+%d",gi,p,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p<0&&q<0){
                printf("y=%d(x+%d)��%d",gi,p*-1,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(p==0&&q>0){
                printf("y=%dx��+%d",gi,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*i*i+q==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(p==0&&q<0){
                printf("y=%dx��%d",gi,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*i*i+q==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p>0&&q==0){
			    printf("y=%d(x-%d)��",gi,p);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p<0&&q==0){
			    printf("y=%d(x+%d)��",gi,p*-1);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p<0&&q>0){
			    printf("y=%d(x+%d)��+%d",gi,p*-1,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p>0&&q<0){
			    printf("y=%d(x-%d)��%d",gi,p,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
		}
		else if(shape==3){
			printf("�����? : ");
			scanf("%d",&gi);
			printf("�������� ��ǥ��? p,q �� �Է� : ");
			scanf("%d,%d",&p,&q);
			b=(gi*-2)*p;
			c=((4*gi*q)+(b*b))/(4*gi);
			printf("\n�����Լ� �� : ");
			if(b>0&&c>0){
                printf("y=%dx��+%dx+%d",gi,b,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b<0&&c<0){
			    printf("y=%dx��%dx%d",gi,b,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b==0&&c>0){
			    printf("y=%dx��+%d",gi,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b==0&&c<0){
			    printf("y=%dx��%d",gi,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b>0&&c==0){
			    printf("y=%dx��+%dx",gi,b);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b<0&&c==0){
			    printf("y=%dx��%dx",gi,b);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b<0&&c>0){
			    printf("y=%dx��%dx+%d",gi,b,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b>0&&c<0){
			    printf("y=%dx��+%dx%d",gi,b,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" �� ");
                        else if(j==0)printf(" �� ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
		}
	}

	return 0;
}
