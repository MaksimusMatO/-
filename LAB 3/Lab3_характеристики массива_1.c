#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{   
    srand( time(NULL) );
	int size;
	printf("Array size : ");
	scanf("%d", &size);
	int array[size];
	for( int i = 0; i < size; i++ )
	{
        array[i] = rand() % 100;
	}
    int median;
	float middle;
	int maximum = array[0];
	int minimum = array[size - 1];
	for(int i = 0; i < size; i++)
	{	
		if(array[i] > maximum)
        {
            maximum = array[i];
        }
	}
    for(int i = 0; i < size; i++)
	{	
		if(array[i]< minimum)
        {
            minimum = array[i];
        }
	}
	for(int i = 0; i < size; i++ )
	{
        middle += array[i];
        
	}
    middle = middle / size;
	for(int i = 0; i < size; i++ )
    {
        printf("%d ", array[i]);
        
    }
    median = array[size / 2];
    printf("\nmedian %d\n", median);
    printf("maximum %d\n", maximum);
    printf("minimum %d\n", minimum);
    printf("middle %.2f\n", middle);

	return 0;
} 
