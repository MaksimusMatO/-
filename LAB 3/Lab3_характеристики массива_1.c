#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
void sort( int *array, int size);

int main()
{   
    	srand( time(NULL) );
	int size;
	size = rand() % 20 + 1;
	int array[size];
	for( int i = 0; i < size; i++ )// генератор массива
	{
        	array[i] = rand() % 100;
	}
        for( int i = 0; i < size; i++ )// водьмассива
    	{
        	printf("%d ", array[i]);       
    	}
        sort( array, size);// сортировка массива для поиска медианы
    	int median;
        if( (size % 2) != 0)
	{
		median = array[size / 2];
	}
	else if( (size % 2) == 0 )
	{
        	median = array[(size / 2) - 1];
    	}
	float middle = 0;
	int maximum = array[0];
	int minimum = array[size - 1];
	for( int i = 0; i < size; i++ )// рассчёт максимума
	{	
		if(array[i] > maximum)
		{
			maximum = array[i];
		}
	}
    	for( int i = 0; i < size; i++ )// рассчёт минимума
	{	
		if( array[i] < minimum )
		{
			minimum = array[i];
		}
	}
	for( int i = 0; i < size; i++ )// рассчёт средне арефметического
	{
        	middle += array[i];        
	}
    	middle = middle / size;
    	printf("\nmedian %d\n", median);
    	printf("maximum %d\n", maximum);
    	printf("minimum %d\n", minimum);
    	printf("middle %.2f\n", middle);

	return 0;
}

void sort( int *array, int size)
{
        for(int n = 0; n < size; n++ )
        {
                for(int k = n; k < size; k++ )
                {
                        if( array[k] < array[n] )
                        {
                                int cost = array[n];
                                array[n] = array[k];
                                array[k] = cost;
                        }
                }
        }      
}
