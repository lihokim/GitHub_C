#include <stdio.h>
int main ()
{
    int m_p,w_p,h_p;
    int m_hp=1000,w_hp=1000,h_hp=1000;
    scanf("%d %d %d",&m_p,&w_p,&h_p);
    m_hp+=h_p-w_p;
    w_hp+=h_p-m_p;
    h_hp-=m_p;
    printf("[%d,%d,%d]",m_hp,w_hp,h_hp);



    return 0;
}
