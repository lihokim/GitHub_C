#include <stdio.h>
int main ()
{
	int x,y,hamsu,gi,shape,p,q,b,c,i,j;
	printf("왼쪽 물음이 맞다면 괄호안에 있는 수를 입력해주세요.\n");
	printf("함수 : 일차함수(1) / 이차함수(2)\n");
	scanf("%d",&hamsu);
	if(hamsu==1){
		printf("기울기는? : ");
		scanf("%d",&gi);
		printf("y절편은? : ");
		scanf("%d",&y);
		printf("\n일차함수 식 : ");
		if(y<0){
            printf("y=%dx%d",gi,y);
            printf("\n");
            for(j=20; j>=-20; j--){
                for(i=-15; i<=15; i++){
                    if(gi*i+y==j)printf(" * ");
                    else if(i==0)printf(" │ ");
                    else if(j==0)printf(" ─ ");
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
                    else if(i==0)printf(" │ ");
                    else if(j==0)printf(" ─ ");
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
                    else if(i==0)printf(" │ ");
                    else if(j==0)printf(" ─ ");
                    else printf("   ");
                }printf("\n");
            }printf("\n\n");
        }
	}
	else if(hamsu==2){
		printf("ex)기본형:y=ax² 표준형:y=a(x-p)²+q  일반형:y=ax²+bx+c\n\n");
		printf("형태 : 기본형(1) / 표준형(2) / 일반형(3)\n");
		scanf("%d",&shape);
		if(shape==1){
			printf("기울기는? : ");
			scanf("%d",&gi);
			printf("\n이차함수 식 : y=%dx²",gi);
            printf("\n");
            for(j=20; j>=-20; j--){
                for(i=-15; i<=15; i++){
                    if(i*i*gi==j)printf(" * ");
                    else if(i==0)printf(" │ ");
                    else if(j==0)printf(" ─ ");
                    else printf("   ");
                }printf("\n");
            }printf("\n\n");
		}
		else if(shape==2){
			printf("기울기는? : ");
			scanf("%d",&gi);
			printf("꼭짓점의 좌표는? p,q 로 입력 : ");
			scanf("%d,%d",&p,&q);
			printf("\n이차함수 식 : ");
			if(p>0&&q>0){
                printf("y=%d(x-%d)²+%d",gi,p,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p<0&&q<0){
                printf("y=%d(x+%d)²%d",gi,p*-1,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(p==0&&q>0){
                printf("y=%dx²+%d",gi,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*i*i+q==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(p==0&&q<0){
                printf("y=%dx²%d",gi,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*i*i+q==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p>0&&q==0){
			    printf("y=%d(x-%d)²",gi,p);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p<0&&q==0){
			    printf("y=%d(x+%d)²",gi,p*-1);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p<0&&q>0){
			    printf("y=%d(x+%d)²+%d",gi,p*-1,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
			else if(p>0&&q<0){
			    printf("y=%d(x-%d)²%d",gi,p,q);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(gi*((i-p)*(i-p))+q==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
			}
		}
		else if(shape==3){
			printf("기울기는? : ");
			scanf("%d",&gi);
			printf("꼭짓점의 좌표는? p,q 로 입력 : ");
			scanf("%d,%d",&p,&q);
			b=(gi*-2)*p;
			c=((4*gi*q)+(b*b))/(4*gi);
			printf("\n이차함수 식 : ");
			if(b>0&&c>0){
                printf("y=%dx²+%dx+%d",gi,b,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b<0&&c<0){
			    printf("y=%dx²%dx%d",gi,b,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b==0&&c>0){
			    printf("y=%dx²+%d",gi,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b==0&&c<0){
			    printf("y=%dx²%d",gi,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b>0&&c==0){
			    printf("y=%dx²+%dx",gi,b);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b<0&&c==0){
			    printf("y=%dx²%dx",gi,b);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b<0&&c>0){
			    printf("y=%dx²%dx+%d",gi,b,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
			else if(b>0&&c<0){
			    printf("y=%dx²+%dx%d",gi,b,c);
                printf("\n");
                for(j=20; j>=-20; j--){
                    for(i=-15; i<=15; i++){
                        if(i*i*gi+b*i+c==j)printf(" * ");
                        else if(i==0)printf(" │ ");
                        else if(j==0)printf(" ─ ");
                        else printf("   ");
                    }printf("\n");
                }printf("\n\n");
            }
		}
	}

	return 0;
}
