#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

struct strem {
  int y; // For head
  int x; // For row
  char str[100]; // For stream of characters
}

int main() {
  char symbol1 = (rand() % (126 - 33 + 1)) + 33;
  char symbol2 = (rand() % (126 - 33 + 1)) + 33;
  char symbol3 = (rand() % (126 - 33 + 1)) + 33;

  while(1) {
  //  printf("\e[4;1H\e[2J");
   usleep(50000);
   printf("%c ", symbol1);
   printf("%c ", symbol2);
   printf("%c \n", symbol3);
   symbol1 = (rand() % (126 - 33 + 1) + 33);
   symbol2 = (rand() % (126 - 33 + 1) + 33);
   symbol3 = (rand() % (126 - 33 + 1) + 33);
  }
  
  return 0;
}
