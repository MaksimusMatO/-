#include <stdio.h>

int is_simple(int number) 
{
  int progres = 0;                      //переменная для проверки простоты числа
  if( number > 1 )
  {
    for( int i = 2; progres = 0, i < number; i++ )
    {
      int j = 0;   
      if( number % i == 0 )
      {
        progres = 1 ;
        printf("\"0\" число %d сложное\n", number);
        return 1;
        break;
      }
      else{
        progres = 0;
      }      
      j++ ;
    }
  }
  if(progres == 0)
  {
    printf("\"1\" число %d простое\n", number);
    return 1;
  }
}

int main()
{
  int inp_num;
  scanf ("%d" , &inp_num );
  is_simple(inp_num);
  return 0;
}