#include <stdio.h>
int main()
{
    int i,j,k,str,num;
    printf("�� �� �� �� �� �� �� �� ��\n");
    printf("��    ����.cpp   ��\n");
    printf("��               ��\n");
    printf("��  ����-->���  ��\n");
    printf("��               ��\n");
    printf("��  Made by KLH  ��\n");
    printf("�� �� �� �� �� �� �� �� ��\n\n");

    printf("������������������������������������������������������������������������\n");
    printf("��  0~9�� ���ڸ� ���ڸ� �Է��ϼ���. ��\n");
    printf("�������������������������������������������������������������������� ��\n\n");
    scanf("%d",&num);
    printf("\n");
    while(num>=0&&num<=9){
    	if(num==0){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(i==0||j==0||i==4||j==2)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	    else if(num==1){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==2)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	    else if(num==2){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(i==0||i==2||i==4||i+j==3)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	    else if(num==3){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==2||i==0||i==2||i==4)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	    else if(num==4){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==2||i==2||j==0&&i<3)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
		else if(num==5){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(i==0||i==2||i==4||i+j==1||i*j==6)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	    else if(num==6){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(i==0|i==2||i==4||j==0||i*j==6)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	    else if(num==7){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==0&&i<3||i==0||j==2)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	    else if(num==8){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==1&&i%2!=0)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	    else if(num==9){
	        for(i=0; i<5; i++){
	            for(j=0; j<3; j++){
	            	if(j==2||i==0||i==2||i+j==1)printf("��");
	            	else printf("��");
	            }printf("\n");
	        }break;
	    }
	}
	if(num<0||num>9)printf("\n�ý��� ������ ���񽺰� ����Ǿ����ϴ�...\n");
	else printf("\n�����۵� �Ϸ�Ǿ����ϴ�. â�� ��������.\n");



    return 0;
}
