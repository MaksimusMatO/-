#include <stdio.h>

int is_simple(int number);

int main()
{
  int inp_num;
  printf("enter number\n");
  scanf ("%d", &inp_num );
  printf("\n%d", is_simple(inp_num) );
  getchar(); 
  getchar();

  return 0;
}

int is_simple(int number) 
{
  if (number > 3)
  {
    for(int i = 2; i < number; i++)
    {
      if (number % i == 0)
      {
        return 0;
      }       
    }
    
    return 1;
  }
  else if( (number >= 1) || (number <= 3))
  {
      return 1;
  }
  else
  {
    printf("the number you entered is neither composite nor simple. \n");
  }
  
  return 0;
}
