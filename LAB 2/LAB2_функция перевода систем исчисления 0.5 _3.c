#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void power(int number, int source, int target);

int main()
{
  int number, source, target;
  printf("enter numbers ( number, current notation, total notation ) : ");
  scanf("%d%d%d", &number, &source, &target );
  power(number, source, target);
  getchar(); 
  getchar();
  return 0;
}

void power(int number, int source, int target)
{     
  if( source <= 10  && target < 10 )// диапазон числовых значений из 10ной в  любую менее 10ной
  {
    int array[100];
    int score = number;
    int res = 0;
    int i = 0;
    while( score > 0 )// разложение по разрядам исходной системы исчисления
    { 
      array[i] = number / (pow (10, i) );
      array[i] = array[i] % 10;
      i++;
      score = score / 10;                         
    }
    int j = 0;
    while( j != i )// перевод в ведённую систему исчисления 
    {
      res += array[j] * (pow (source, j) );   
      j++;
    }
    i = 0, score = res;
    int res_char; 
    while( score > 0 )// разложение по разрядам в новой системе исчисления
    { 
      res_char = res % target;
      res= res / target;     
      i++;
      array[i] = res_char;
      score = score / target;
    }
    while( i > 0 )// вывод результата
    {
      printf("%d", array[i]);
      i--;
    }                    
  }
  else if( source == 0 || source == 1 || target == 0 || target == 1 )// если система исходная или конечная равна 0 или 1
  {
    printf("0");
     
  }
  else if( target >= 10 && source >= 2 )// перевод из любой в любую систему содержащую символьные значения
  {
    int  array[100], score = number;
    int res = 0;
    int i = 0;
    while( score > 0 )// разложение по разрядам в исходной
    { 
      array[i] = number / (pow (10, i) );           
      array[i] = array[i] % 10;            
      i++;
      score = score / 10;                       
    }
    int j = 0;
    while( j != i )// перевод в ведённую систему исчисления 
    {
      res += array[j] * (pow (source, j) );   
      j++;    
    }        
    if( target > 10 )// условие 1ое если конечная система больше десяти (это на всякий случай)
    {   
      char array_char[ i + 1 ];
      char res_char = 0;
      j = 0;
      if( i <= 1)// вывод одноразрядных чисел 
      {
        while( j != i )
        {
          array_char[j] = (char) array[j];   
          if( array_char[j] < 10 )
          {
            res_char += ( array_char[j] + 48 )* (pow (source, j ));   
          }
          else
          {
            char ch = (char) array_char[j];
            res_char += ( ch + 55 ) * (pow (source, j )) ;
          }
          j++;
        }
        printf("%c", res_char);     
      }
      else// вывод много разрядных чисел
      {   
        char array_char[100] ;
        int score = res;        
        int i = 0, res_char;
        while( score > 0 )// разложение по разрядам в новой системе исчисления
        {  
          res_char = res / target;              
          res_char = res % target;
          res = res / target;
          array_char[i] = (char) res_char;// по разрядно записывает результат в масив
          score = score / target;
          i++;                              
        }
        i -= 1;
        while( i >= 0 )// вывод результата
        {
          if( array_char[i] < 10 )
          {
            printf("%c", array_char[i] + 48);
          }
          else
          {
            printf("%c", array_char[i] + 55);
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
