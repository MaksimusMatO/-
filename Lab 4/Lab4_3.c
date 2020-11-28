#include <stdio.h>
#include <stdlib.h>

int* get_simples( int count );

struct store
{
	int *numbers;
};

int main()
{       
    	struct store store;
	int count;
    	int *array;
	printf("enter count ");
	scanf("%d", &count);
    	count--;
    	printf("\n");
	array = get_simples(count);
    	printf("\n");
	for( int i = 0; i < count; i++ )
	{
        	if( array[i] != 0 )
        	{
        		printf(" %d", array[i]);
        		printf("\n");       
        	}
	}
	getchar();
	getchar();

	return 0;
}

int* get_simples( int count )
{
    	struct store store;
    	int *array[count];
	store.numbers = (int*) malloc(count * sizeof(int));
	for( int i = 0; i < count; i++ )
	{
		store.numbers[i] = i + 2;
	}
	for( int i = 0; i < count; i++ )
	{
		if( store.numbers[i] != 0 )
		{
			for( int a = i + 1; a < count; a++ )
			{
				if( (store.numbers[a] % store.numbers[i] ) == 0 )
				{
					store.numbers[a] = 0;
				}
			}
		}  
	}
    	*array = store.numbers;
    	free(store.numbers);

	return *array;
}
