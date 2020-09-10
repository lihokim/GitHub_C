#include <stdio.h>
int main ()
{
    int r,c,sign=0,output_sign=0,cnt=0,cnt1=0,imsi=0;
    char s[101],m[101][101];
    scanf("%d %d",&r,&c);
    scanf("%s",s);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf(" %c",&m[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        if(s[0]=='m'&&s[1]=='i'&&s[2]=='n')sign=1;
        else if(s[0]=='m'&&s[1]=='a'&&s[2]=='x')sign=2;
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(m[i][j]=='?'){
                if(sign==1){
                    if(m[i][j-1]=='L'||m[i][j+1]=='L'||m[i-1][j]=='L'||m[i+1][j]=='L'){
                        m[i][j]='L';
                    }
                    else {
                        m[i][j]='S';
                    }
                }
            }
        }
    }printf("\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%c ",m[i][j]);
            if(m[i][j]=='L'){
                if(m[i][j+1]=='L'||m[i][j-1]=='L'||m[i+1][j]=='L'||m[i-1][j]=='L')cnt++;
            }
        }printf("\n");
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            //if(cnt)
        }
    }




    /*for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(r==1&&c==1){
                if(m[i][j]=='L')printf("1");
                else if(m[i][j]=='S')printf("0");
                else if(m[i][j]=='?'){
                    if(sign==1)printf("0");
                    else if(sign==2)printf("1");
                }
                output_sign=1;
            }
            else{
                if(m[i][j]=='?'){
                    if(j<1){
                        if(sign==1){
                            if(m[i][j+1]=='L')m[i][j]='L';
                            else if(m[i][j+1]=='S')m[i][j]='S';
                            else if(m[i][j+1]=='?')m[i][j]='S';
                        }
                        else if(sign==2){
                            if(m[i][j+1]=='L')m[i][j]='S';
                            else if(m[i][j+1]=='S')m[i][j]='L';
                            else if(m[i][j+1]=='?')m[i][j]='L';
                        }
                    }
                    else {
                        if(sign==1){
                            if(m[i][j-1]=='L')m[i][j]='L';
                            else if(m[i][j-1]=='S')m[i][j]='S';
                        }
                        else if(sign==2){
                            if(m[i][j-1]=='L')m[i][j]='S';
                            else if(m[i][j-1]=='S')m[i][j]='L';
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(m[i][j]=='L'&&m[i][j+1]=='L')cnt++;
            if(m[i][j]=='L')cnt1++;
        }
    }
    if(output_sign!=1)printf("%d",cnt1-cnt);*/
    return 0;
}
