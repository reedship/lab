#include <stdio.h>

int main(){
  int numberArray[5] = {1,2,3,4,5};

  printf("Iteration going forwards\n");

  for (int i=0;i<5;i++){
    printf("%d\n", numberArray[i]);
  }

  printf("Iteration going backwards\n");

  for (int i=5;i>0;i--){
    printf("%d\n", numberArray[i-1]);
  }
}
