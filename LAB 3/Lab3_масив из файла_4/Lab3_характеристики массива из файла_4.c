#include <stdio.h>
#include <stdlib.h> //для работы atoi();

void shell_sort( int *array, int size );

int main()
{
	FILE *file_array;
	char array_char[100];
  	int array_int[100];
	int size;
  	int i = 0;
	int j = 0;
	file_array = fopen( "file_array.txt", "r" );
	if( file_array != NULL )
	{
		size = fread( array_char, 1, 100, file_array );// запись содержимого файла в масив с выводом успешно прочтённых символов 
    	int fclose(FILE *file_array);// закрытие файла 
    	fprintf( stdout, "%s", array_char );
    	while( i <= (size / 2) )
    	{
      		array_int[i] = atoi(&array_char[j]);// перевод из string в integer
      		//sscanf(&array_char[j], "%d", &array_int[i]);// тоже самое что и предыдущая строка
     		i++; 
      		j += 2;
    	}
	}
	else
	{
		printf("\nfile was not opened");
        return 1;
	}
    shell_sort( array_int , i );
    int median;
    if( (i % 2) == 0)
    {
        median = (array_int[i / 2] + array_int[(i / 2) + 1]) / 2.0 ;
    }
    else
    {
        median = array_int[(i / 2) + 1];
    }
	float middle = 0.0;
	int maximum = array_int[2];
	int minimum = array_int[2];
    for(int n = 0; n < i; n++)
	{	
		if(array_int[n] > maximum)
        {
            maximum = array_int[n];
        }
	}
    	for(int n = 0; n < i; n++)
	{	
		if(array_int[n]< minimum)
        {
            minimum = array_int[n];
        }
	}
    for(int t = 0; t < i; t++ )
	{
		middle += array_int[t];
	}
    middle = middle / i;
    printf("\nmedian = %d", median);
 	printf("\nminimum = %d", minimum); 
  	printf("\nmiddle = %.2f", middle);
  	printf("\nmaximum = %d", maximum);
	getchar();
	getchar();

	return 0;
}

void shell_sort( int *array, int size )
{
    int upper_sort = 3;
    while( upper_sort > 0 )
    {
        for ( int n = 0; n < size; n++ )
        {
            int cost = array[n];
            int k = n;
            while( (k >= upper_sort) && (array[k - upper_sort] > cost) )
            {
                array[k] = array[k - upper_sort];
                k = k - upper_sort;
            }
            array[k] = cost;

        }
        if( upper_sort > 1 )
        {
            upper_sort = upper_sort / 2;
        }
        else if( upper_sort == 1 )
        {
            break;
        }
    }
}