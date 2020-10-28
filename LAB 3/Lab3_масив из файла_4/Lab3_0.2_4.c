#include <stdio.h>
#include <stdlib.h> //для работы atoi();

void function_sort_shell(int *array, int size );

int main()
{
	FILE *file_array;
	char array_char[100];
  int array_int[100];
	int size;
  int i = 0, j = 0;
	file_array = fopen( "all/file_array.txt", "r" );
	if( file_array != NULL )
	{
		size = fread( array_char, 1, 100, file_array );// запись содержимого файла в масив с выводом успешно прочтённых символов 
    int fclose(FILE *file_array);// закрытие файла 
    printf("\n\nnot sort array - ");
    fprintf( stdout, "%s", array_char );
    while( i <= (size / 2) )
    {
      array_int[i] = atoi(&array_char[j]);// перевод из string в integer
      //sscanf(&array_char[j], "%d", &array_int[i]);// тоже самое что и предыдущая строка
      i++; 
      j += 2;
    }
		function_sort_shell( array_int, i);
	}
	else
	{
		printf("pascal");
	}
  printf("\n\nsort array - ");
  for( i = 0; i <= (size / 2); i++)
  {
    printf(" %d", array_int[i]);
  }
  printf("\nmin = %d", array_int[0]); 
  printf("\nmid = %d", array_int[i / 2]);
  printf("\nmax = %d", array_int[i - 1]);
	getchar();
	getchar();

	return 0;
}

void function_sort_shell(int *array, int size )
{
	int upper_sort = 3;
	while( upper_sort > 0 )
	{
		for( int i = 0; i < size; i++ )
		{
			int cost =array[i];
			int j = i;
			while( (j >= upper_sort) && (array[j - upper_sort] > cost))
			{
				array[j] = array[j - upper_sort];
				j = j - upper_sort;
			}
			array[j] = cost;
		}
		if( upper_sort > 1)
		{
			upper_sort = upper_sort / 2;
		}
		else if( upper_sort == 1)
		{
			break;
		}
	}
}
