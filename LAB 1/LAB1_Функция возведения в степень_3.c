#include <stdio.h>
#include <math.h>

int power(int number, int power); 

int main()
{
  int N = 0, m = 0;
  printf("enter number: ");
  scanf("%d", &N);
  printf("enter power: ");
  scanf("%d", &m);
  printf("%.0d", power(N, m) );
  getchar();
  getchar();

  return 0;
} 

int power(int number, int power)
{ 
  float rez = 1;
  for( int i = 0; i < power; i++)
  {
    rez *= number;
  }

  return rez;
}
