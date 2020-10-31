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
        	array[i] = 100 - rand() % 200;
	}
	int mid;
	int max = array[0];
	int min = array[size - 1];
	for(int i =0 ; i<n ; i++)
	{	
		if(array[i] > max)
        {
            max = array[i];
        }
        if(array[i]< min)
        {
            min = array[i];
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
			mid = array[i];	
		}
	}
	for(int i = 0; i < size; i++ )
    {
        printf("%d.", array[i]);
    }
    printf("\nMax %d\n", max);
    printf("min %d\n", min);
    printf("mid %d\n", mid);

	return 0;
}
