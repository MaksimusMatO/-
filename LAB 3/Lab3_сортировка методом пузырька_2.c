#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_bubble(int *aray, int size);// * перед переменной является указателем

int main()
{
	srand( time(NULL) );
	int size = rand() % 100;// размер масива рандомен 
	int aray[size + 1];
	for( int i = 0; i < size; i++ )// заполнение массива рандомными числами
	{
		aray[i] = ( rand() %120 ) - 20;
		printf("Aray[%d] = %d\n", i, aray[i]);// показывает масив без сортировки
	}
	printf("\n\n");
	sort_bubble( aray, size );//вызов функции сортировки
	for( int i = 0; i < size; i++ )
	{
		printf("Aray[%d] = %d\n", i, aray[i]);// показывает масив после сортировки
	}
	getchar();
	getchar();

	return 0;
}

void sort_bubble(int *aray, int size)
{
	for( int i = 0; i < size; i++ )// количество сортировок
	{
		for( int j = (size - 1); j > i; j-- )// проверка соседних елементов
		{
			if( aray[j - 1] > aray[j] ) // перестановка соседних переменных
			{
				int nani = aray[j];
				aray[j] = aray[j - 1];
				aray[j - 1] = nani;
			}
		}
	}
}