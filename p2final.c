#include <stdio.h>
int input()
{
  int a;
  printf("Enter number");
  scanf("%d",&a);
  return a;
}

int cmp(int a,int b,int c)
{
  if (a>b & a>c)
  {
    return a;
  }
  if (b>a & b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

void output(int a,int b,int c,int largest)
{
  printf("The largest out of %d,%d and %d is %d",a,b,c,largest);
}

int main()
{
  int a,b,c,l;
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  output(a,b,c,l);
  return 0;
}