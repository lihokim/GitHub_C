#include <stdio.h>
#include <string.h>
int main ()
{
    char n[100001];
    int su=0,str;
    scanf("%s",n);
    str=strlen(n);
    for(int i=0; i<str; i++){
        if(n[i]=='S')su+=1;
        else if(n[i]=='T'){
            for(int j=4; ; j+=4){
                if(su<j){
                    su=j;
                    break;
                }
            }
        }
    }printf("%d",su);
    return 0;
}
