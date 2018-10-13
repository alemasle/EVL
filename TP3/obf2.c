#include <stdio.h>

int main() {

  int i,s;

  i=1;
  s=0;
  while (i<15) {
      s = s+i;
      i++;
    }
  printf("s vaut %i.\n",s);

  return 0;
}
