#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{   
    	srand( time(NULL) );
	int size;
	size = rand() % 20 + 1;
	int array[size];
	for( int i = 0; i < size; i++ )
	{
        	array[i] = rand() % 100;
	}
    	int median;
	float middle = 0;
	int maximum = array[0];
	int minimum = array[size - 1];
	for( int i = 0; i < size; i++ )
	{	
		if(array[i] > maximum)
		{
			maximum = array[i];
		}
	}
    	for( int i = 0; i < size; i++ )
	{	
		if( array[i] < minimum )
		{
			minimum = array[i];
		}
	}
	for( int i = 0; i < size; i++ )
	{
        	middle += array[i];        
	}
    	middle = middle / size;
	for( int i = 0; i < size; i++ )
    	{
        	printf("%d ", array[i]);       
    	}
    	for(int n = 0; n < size; n++)
    	{
        	int cost_max = 0, cost_min = 0;
        	for(int k = 0; k < n; k++)
        	{
		    	if( array[n] > array[k] )
		    	{
				cost_max++;
		    	}
            		else if( array[n] < array[k] )
            		{
                		cost_min++;
            		}
        }
        if( cost_max == cost_min)
        {
            	median = array[n];
        }
        
    	}
    	printf("\nmedian %d\n", median);
    	printf("maximum %d\n", maximum);
    	printf("minimum %d\n", minimum);
    	printf("middle %.2f\n", middle);

	return 0;
}
