#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array = NULL;
	int size;
	printf("ent size\n");
	scanf("%d", &size);
	array = (int*) malloc(size * sizeof(int));
	for( int n = 0; n < size; n++ )
	{
		printf("ent num\n");
		scanf("%d ", &array[n]);
	}
	for( int n = 0; n < size; n++ )
	{
		printf("%d ", array[n]);
	}
	free(array);

	return 0;
}