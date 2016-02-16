/*
-----------
i/p : 123
o/p : 131

i/p : 131
o/p : 141
-----------
*/

#include<stdio.h>
int main()
{
    int num,n,i,r=0,s=0;
    scanf("%d",&num);
    i=num+1;
    while(i>num)
    {
        n=i;r=0;s=0;
        while(n>0)
        {
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        if(s==i)
        {
            printf("%d",i);
            break;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
