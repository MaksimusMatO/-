#include <stdio.h>

int is_simple(int number);

int main()
{
  int inp_num;
  scanf ("%d", &inp_num );
  printf("%d", is_simple(inp_num) );
  getchar(); 
  getchar();

  return 0;
}

int is_simple(int number) 
{                   
  if( number > 2 )
  {
    for( int i = 2; i < number; i++ )
    { 
      int j = 0;  
      if( number % i == 0 )
      {
        printf("\"0\" number %d complicated\n", number);

        return 0;
        break;
      }     
      j++ ;
    }
  }

  {
    printf("\"1\" number %d simple\n", number);

    return 1;
  }
  
  return 0;
}
