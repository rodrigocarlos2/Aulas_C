
#include <stdio.h>
#include <stdlib.h>

void pause(){

  ifdef LINUX
  
  elif defined WIN32
  system("pause");
  
  else
  
  endif
}

int main(){

  printf("Hello world!\n");
  
  pause();
  
  return 0;
}
