#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  float x=n,y=1,e=0.000001;
  while((x-y)>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  printf("%f\n",x);
  return 0;
}
