#include <stdio.h>
int main ()
{
    int i,time,p,x,r,n,d[5555],s[5555],m_pos,cnt=0,sign=0;
    scanf("%d %d",&x,&r);
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %d",&d[i],&s[i]);
    }
    for(time=0; time<100; time++){
        for(p=0; p<=x; p++){
            cnt=0;
            for(i=0; i<n; i++){
                m_pos=d[i]+s[i]*time;
                if(m_pos<=p+r&&m_pos>=p-r)cnt++;
            }
            if(cnt>=n){
                sign=1;
                break;
            }

        }
    }
    if(sign==1)printf("T");
    else printf("F");


    return 0;
}
