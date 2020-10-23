#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void power(int number, int source, int target);

int main()
{
  int numb, sour, targ;
  printf("enter numbers ( number, current notation, total notation ) : ");
  scanf("%d%d%d", &numb, &sour, &targ );
  power(numb, sour, targ);
  getchar(); 
  getchar();
  return 0;
}

void power(int number, int source, int target)
{     
  if( source <= 10  && target < 10 )// диапазон числовых значений из 10ной в  любую менее 10ной
  {
    int  A[100];
    int a = number;
    int res = 0;
    int i = 0;
    while( a > 0 )// разложение по разрядам исходной системы исчисления
    { 
      A[i]= number / (pow (10, i) );
      A[i]= A[i] % 10;
      i++;
      a = a / 10;                         
    }
    int j = 0;
    while( j != i )// перевод в ведённую систему исчисления 
    {
      res += A[j] * (pow (source, j) );   
      j++;
    }
    i = 0, a = res;
    int c; 
    while( a > 0 )// разложение по разрядам в новой системе исчисления
    { 
      c = res % target;
      res= res / target;     
      i++;
      A[i] = c;
      a = a / target;
    }
    while( i > 0 )// вывод результата
    {
      printf("%d", A[i]);
      i--;
    }                    
  }
  if( source == 0 || source == 1 || target == 0 || target == 1 )// если система исходная или конечная равна 0 или 1
  {
    printf("0"); 
  }
  if( target >= 10 && source >= 2 )// перевод из любой в любую систему содержащую символьные значения
  {
    int  A[100], a = number;
    int res = 0;
    int i = 0;
    while( a > 0 )// разложение по разрядам в исходной
    { 
      A[i] = number / (pow (10, i) );           
      A[i] = A[i] % 10;            
      i++;
      a = a / 10;                       
    }
    int j = 0 ;
    while( j != i )// перевод в ведённую систему исчисления 
    {
      res += A[j] * (pow (source, j) );   
      j++;    
    }        
    if( target > 10 )// условие 1ое если конечная система больше десяти (это на всякий случай)
    {   
      char R[ i + 1 ];
      char res_ch = 0;
      j=0;
      if( i <= 1)// вывод одноразрядных чисел 
      {
        while( j != i )
        {
          R[j] = (char) A[j];   
          if( R[j] < 10 )
          {
            res += ( R[j] + 48 )* (pow (source, j ));   
          }
          else
          {
            char ch = (char) R[j];
            res_ch += ( ch + 55 ) * (pow (source, j )) ;
          }
          j++;
        }
        printf("%c\n", res_ch);     
      }
      else// вывод много разрядных чисел
      {   
        char R[100] ;
        int a = res;        
        int i = 0, c;
        while( a > 0 )// разложение по разрядам в новой системе исчисления
        {  
          c = res / target  ;              
          c = res % target;
          res = res / target;
          R[i] = (char) c;
          a = a / target;
          i++;                              
        }
        i -= 1;
        while( i >= 0 )// вывод результата
        {
          if( R[i] < 10 )
          {
            printf("%c", R[i] + 48);
          }
          else
          {
            printf("%c", R[i] + 55);
          }
          i--;
        }
      }           
    }
    else// если не вошло в условие (это на всякий случай)
    {
      printf("%d\n", res);    
    }
  }
}
