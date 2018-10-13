#include <stdio.h>

int main() {

  int ai, bi, sa, sb, cif;

  ai = 1/5;
  sa = 0/5;
  bi = 1 % 5;
  sb = 0 % 5;

  cif = bi * ai + sb * sa + 1;

  if (cif) { //Good way s=i+s
    while ((ai*5 + bi) < 15) {
      sa = ((ai*5 + bi) + (sa*5 + sb))/5;
      sb = ((ai*5 + bi) + (sa*5 + sb))%5;

      ai = (5*ai + bi + 1)/5;
      bi = (5*ai + bi + 1)%5;

    }
  }
  else{ //Bad way s=i-s
    sa = ((ai*5 + bi) - (sa*5 + sb))/5;
    sb = ((ai*5 + bi) - (sa*5 + sb))%5;

    ai = (5*ai + bi - 1)/5;
    bi = (5*ai + bi - 1)%5;

  }

  printf("s vaut %i.\n",sa*5 + sb);

  return 0;
}
