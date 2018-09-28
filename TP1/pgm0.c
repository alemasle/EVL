#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int globale = 5;
char *ptr;
int rien;

void mafonction (int c) {
  int i=c;
  ptr = (char *) malloc(10*sizeof(char));
  strncpy(ptr, "ABCDE", 5);
}

void estimeesp () {
  int a;
  printf("esp : 0x%016lx\n",(unsigned long int) (&a));
}

int main() {
  estimeesp();
  mafonction(6);
  printf("Fini !\n");
  return 0;}
