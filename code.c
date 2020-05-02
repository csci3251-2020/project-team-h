// Your C code here
#include <stdio.h>

void SayHello () {
  printf("Hello world.");
  printf("\n");
}

void SayBye () {
  printf("Goodbye world.");
  printf("\n");
}

void Counting (int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n",i);
  }
  printf("I found you.\n");
}

void main() {
 SayHello();
 Counting (10);
 SayBye();
  
 return; 
}
