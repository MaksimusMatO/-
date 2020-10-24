#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void function_sort_shell( int *array, int size );

int main()
{
  srand(time(NULL));
  int size = rand() % 100;
  int array[size];
  for( int i = 0; i < size; i++ )
  {
    array[i] = (rand() % 120) - 20 ;
    printf("%d ", array[i]);
  }
  function_sort_shell( array, size );
  printf("\n\n");
  for( int i = 0; i < size; i++ )
  {
    printf("%d ", array[i]);
  }
  getchar();
  getchar();

  return 0; 
}



void function_sort_shell( int *array, int size )
{
  int upper_sort = 3; // приращение до четверной
  while( upper_sort > 0 )
  {
    for( int i = 0; i < size; i++ )
    {
      int nani = array[i]; // текущий элемент
      int j = i; // елемент по порядку в массиве
      while( (j >= upper_sort) && (array[j - upper_sort] > nani) ) // проверяем все елементы в отрезке приращивания, пока отстоющий элемент больше текущего 
      {
        array[j] = array[j - upper_sort]; // вкладывает в текущее место отстоющий элемент
        j = j - upper_sort;// следующий по отстованию
      }
      array[j] = nani; // сохроняем текущий элемент в не выявленное место
    }
    if( upper_sort > 1 )// деленее до меньшей
    {
      upper_sort = upper_sort / 2;
    }
    else if( upper_sort == 1 )// конец сортировки
    {
      break;
    }
  }
}