#include <stdio.h>
typedef struct complex
{
  float real;
  float imaginary;
}complex;

complex input_complex()
{
  complex a;
  printf("Enter real and imaginary part of a complex number ");
  scanf("%f%f",&a.real,&a.imaginary);
  return a;
}

complex add(complex a,complex b)
{
  complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return(c);
}

void output(complex a,complex b,complex c)
{
  printf("%f+%fi + %f+%fi = %f+%fi",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}

int main()
{
  complex a,b,c;
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
  return 0;
}
