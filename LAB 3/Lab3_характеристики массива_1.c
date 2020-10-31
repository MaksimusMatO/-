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
	int middle = array[size / 2];
	int maximum = array[0];
	int minimum = array[size - 1];
	for(int i = 0; i < size; i++)
	{	
		if(array[i] > maximum)
        {
            maximum = array[i];
            printf("max %d\n", i);
        }
	}
    for(int i = 0; i < size; i++)
	{	
		if(array[i]< minimum)
        {
            minimum = array[i];
            printf("min %d\n", i);
        }
	}
	for(int i = 0; i < size; i++ )
	{
		int cost_max = 0, cost_min = 0;
		for( int j = 0; j != i; j++ )
	    {
	    	if( array[j] != array[i] )
	    	{
		        if( array[j] > array[i] )
		        {
		   			cost_max++;
		        }
		    	else
		    	{
		    		cost_min++;
		    	}
	    	}
	    }
		if( cost_max == cost_min )
		{
			median = array[i];	
		}
	}
	for(int i = 0; i < size; i++ )
    {
        printf("%d ", array[i]);
    }
    middle = array[size / 2];
    printf("\nmedian %d\n", median);
    printf("maximum %d\n", maximum);
    printf("minimum %d\n", minimum);
    printf("middle %d\n", middle);

	return 0;
}
