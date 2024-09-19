#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total,avg,i=1;
    while(i>=3)
    {
        printf("enter the marks: \n");
        scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
        total = m1+m2+m3+m4+m5;
        avg = total/5;
        printf("Total = %d",total);
        printf("Avg = %d",avg);
        i++;
    }
    return;
}