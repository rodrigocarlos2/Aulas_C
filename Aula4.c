
#include <stdio.h>
#include <stdlib.h>

void imprimir(){

  printf("Função imprimir!\n");
}

void somar(int n1, int n2){

  int soma;
  
  soma = n1+n2;
  
  printf("Soma: %d\n", soma);
}

void pause(){

  #ifdef LINUX
  
  #elif defined WIN32
  system("pause");
  
  #else
  
  #endif
}

int main(){

  imprimir();
  somar(2, 2);
  
  pause();
  
  return 0;
}
