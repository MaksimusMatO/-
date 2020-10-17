#include <stdio.h>
#include <math.h>
 
int power(int number, int power)
{ 
  float rez = 1;
  for( int i = 0; i < power; i++)
  {
    rez *= number;
  }
  return rez;
}

int main()
{
  int N = 0, m = 0;
  printf("Введите число: ");
  scanf("%d", &N);
  printf("Введите степень: ");
  scanf("%d", &m);
  printf("%.0d", power(N,m));
  return 0;
}
