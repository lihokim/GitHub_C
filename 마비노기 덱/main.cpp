#include <stdio.h>
int main ()
{
    int a,i,g=0,m=0,l=0,d=0,n=0;
    char source[10000]={'gold','mana','light','dark','nature'};
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf(" %s",&source[i]);
    }
    for(i=0; i<a; i++){
        if(source[i]=='g')g=1;
        else if(source[i]=='m')m=1;
        else if(source[i]=='l')l=1;
        else if(source[i]=='d')d=1;
        else if(source[i]=='n')n=1;
    }printf("%d",g+m+l+d+n);
   //if((g+m+l+d+n)<=3&&(g+m+l+d+n)>=1)printf("valid");
    //else printf("invalid");


    return 0;
}
