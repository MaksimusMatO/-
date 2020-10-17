#include <stdio.h>

long get_fibbonachi_via_cycle(int number){
  long fib1 = 0 ,fib2 = 1 ,fib3 = 1 ;
  for(int i = 0 ; i<=number ; i++){
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3; 
  }
  return fib3;
}

int main(){
  int fib_num;
  printf("какое число Фиббоначи вывести\n'после ввода нужного числа введите что-нибудь ещё': ");//после ввода нужного числа введите чтонибудь ещё?????
  scanf("%d\n", &fib_num);
  printf( "%ld", get_fibbonachi_via_cycle(fib_num) );
  getchar(); getchar();
  return 0;
}