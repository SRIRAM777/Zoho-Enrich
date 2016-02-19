#include<stdio.h>

int nextprime(int n)
{
    int i;
    for(i=3;i<=n/2;i=i+2)
      {
	      if(n%i==0)
        return 0;
      }
    return 1;

}

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
      {
        n=n+1;
      }
    else
      {
        n=n+2;
      }
    while(1)
      {
	      if(nextprime(n))
	      break;
	      n=n+2;
      }
    printf("%d",num);
    return 0;
}
