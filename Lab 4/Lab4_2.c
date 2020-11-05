#include <stdio.h>
#include <stdlib.h>

struct store
{       
	int size;
    	int *number;
	int *quality;      
};

int main()
{       
    	struct store store;
    	printf("enter size ");
    	scanf("%d", &store.size);
    	store.number = (int*) malloc(store.size * sizeof(int));
    	store.quality = (int*) malloc(store.size * sizeof(int));
	printf("enter numbers ");
    	for( int i = 0; i < store.size; i++ )
    	{
        	scanf("%d", &store.number[i]);
        	if( (store.number[i] % 2) == 0 )
        	{
        	        store.quality[i] = 0;
        	}
        	else
        	{
        	        store.quality[i] = 1;
        	}
    	}
    	for( int i = 0; i < store.size; i++ )
    	{
        	printf("\n");
        	printf("%d ", store.number[i]);
        	if( store.quality[i] == 1 )
        	{
                	printf("number not even");
        	}
        	else
        	{
        	    printf("number even");    
        	}
    	}
    	getchar();
    	getchar();	

	return 0;
}