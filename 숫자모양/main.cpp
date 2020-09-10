#include <stdio.h>
int main()
{
    int i,j,k,str,num;
    printf("┏ ─ ─ ─ ─ ─ ─ ─ ┓\n");
    printf("│    숫자.cpp   │\n");
    printf("│               │\n");
    printf("│  숫자-->모양  │\n");
    printf("│               │\n");
    printf("│  Made by KLH  │\n");
    printf("┗ ─ ─ ─ ─ ─ ─ ─ ┛\n\n");

    printf("┏──────────────────────────────────┓\n");
    printf("│  0~9중 한자리 숫자를 입력하세요. │\n");
    printf("┗───────────────────────────────── ┛\n\n");
    scanf("%d",&num);
    printf("\n");
    while(num>=0&&num<=9){
    	if(num==0){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(i==0||j==0||i==4||j==2)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
	    else if(num==1){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==2)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
	    else if(num==2){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(i==0||i==2||i==4||i+j==3)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
	    else if(num==3){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==2||i==0||i==2||i==4)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
	    else if(num==4){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==2||i==2||j==0&&i<3)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
		else if(num==5){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(i==0||i==2||i==4||i+j==1||i*j==6)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
	    else if(num==6){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(i==0|i==2||i==4||j==0||i*j==6)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
	    else if(num==7){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==0&&i<3||i==0||j==2)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
	    else if(num==8){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==1&&i%2!=0)printf("○");
	            	else printf("●");
	            }printf("\n");
	        }break;
	    }
	    else if(num==9){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==2||i==0||i==2||i+j==1)printf("●");
	            	else printf("○");
	            }printf("\n");
	        }break;
	    }
	}
	if(num<0||num>9)printf("\n시스템 오류로 서비스가 종료되었습니다...\n");
	else printf("\n정상작동 완료되었습니다. 창을 닫으세요.\n");



    return 0;
}
