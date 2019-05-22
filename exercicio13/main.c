#include "stdio.h"

int main()
{

  int a, b, auxiliar, i, n;


  a = 0;
  b = 1;


  printf("Digite um numero: ");

  scanf("%d", &n);
  printf("Soma de Fibonacci:\n");


  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
   if(n>2){
    auxiliar = (auxiliar + b) - (i+i);
} else {
       if(n<2){
           auxiliar=1;
       }else {
auxiliar=2;
}
}


  }
  printf("%d\n", auxiliar);
}
