#include <stdio.h>
#include <stdlib.h> //для работы atoi();

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
        int median = array_int[2];
        for(int n = 0; n <= i; n++)
        {
                int cost_max = 0, cost_min = 0;
                for(int k = 0; k < n; k++)
                {
                        if( array_int[n] > array_int[k] )
                        {
                                cost_max++;
                        }
                        else if( array_int[n] < array_int[k] )
                        {
                                cost_min++;
                        }
                }
                if( cost_max == cost_min )
                {
                        median = array_int[n];
                }
        }
        float middle = 0;
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
