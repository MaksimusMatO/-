#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_bubble(int *array, int size);// * перед переменной является указателем

int main()
{
	srand( time(NULL) );
	int size = rand() % 100;// размер масива рандомен 
	int array[size + 1];
	for( int i = 0; i < size; i++ )// заполнение массива рандомными числами
	{
		array[i] = ( rand() %120 ) - 20;
		printf("Aray[%d] = %d\n", i, array[i]);// показывает масив без сортировки
	}
	printf("\n\n");
	sort_bubble( array, size );//вызов функции сортировки
	for( int i = 0; i < size; i++ )
	{
		printf("Array[%d] = %d\n", i, array[i]);// показывает масив после сортировки
	}
	getchar();
	getchar();

	return 0;
}

void sort_bubble(int *array, int size)
{
	for( int i = 0; i < size; i++ )// количество сортировок
	{
		for( int j = (size - 1); j > i; j-- )// проверка соседних елементов
		{
			if( array[j - 1] > array[j] ) // перестановка соседних переменных
			{
				int var = array[j];
				array[j] = array[j - 1];
				array[j - 1] = var;
			}
		}
	}
}