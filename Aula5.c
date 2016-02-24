
#include <stdio.h>
#include <stdlib.h>

int sum(int n1, int n2){

  return (n1+n2);
}

int sub(int n1, int n2){

  return (n1-n2);
}

int mpy(int n1, int n2){
  
  return (n1*n2);
}

int read(int pos){

  int n;
  
  printf("Digite o %d numero: ",pos);
  scanf("%d", &n);
  
  return n;
}

void pause(){

  #ifdef LINUX
  
  #elif defined WIN32
  system("pause");
  
  #else
  
  #endif
}

int main(){

  int n1, n2;
  int soma, subt, mult;
  
  n1 = read(1);
  
  n2 = read(2);
  
  soma = sum(n1, n2);
  subt = sub(n1, n2);
  mult = mpy(n1, n2);
  
  printf("Soma: %d\n", soma);
  printf("Subtracao: %d\n", sub);
  printf("Multiplicacao: %d\n", mult);
  
  pause();
  
  return 0;
}
