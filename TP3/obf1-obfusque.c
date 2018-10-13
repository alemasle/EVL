 #include <stdio.h>

int main () {

  int oeuf = 7;
  int poule = 6;
  poule = oeuf * poule;
  oeuf=poule+oeuf;
  printf("oeuf vaut %i.\n",oeuf);

  return 0;
}
