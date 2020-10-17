#include <stdio.h>

int is_simple(int number) 
{                   
  if( number > 2 )
  {
    for( int i = 2; i < number; i++ )
    { 
      int j = 0;  
      if( number % i == 0 )
      {
        printf("\"0\" число %d сложное\n", number);
        return 1;
        break;
      }     
      j++ ;
    }
  }

  {
    printf("\"1\" число %d простое\n", number);
    return 1;
  }
  
  return 0;
}

int main()
{
  int inp_num;
  scanf ("%d" , &inp_num );
  is_simple(inp_num);
  return 0;
}
