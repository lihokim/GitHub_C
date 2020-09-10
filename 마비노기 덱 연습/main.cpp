#include <stdio.h>
int main ()
{
    int a,i,g=0,m=0,l=0,d=0,n=0;
    char source[100]={'gold','mana','light','dark','nature'};
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf("%s",&source[i]);
    }
    for(i=0; i<a; i++){
        if(source[i]=='gold')g=1;
        else if(source[i]=='mana')m=1;
        else if(source[i]=='light')l=1;
        else if(source[i]=='dark')d=1;
        else if(source[i]=='nature')n=1;
    }
    if((g+m+l+d+n)<=3&&(g+m+l+d+n)>=1)printf("valid");
    else printf("invalid");


    return 0;
}
