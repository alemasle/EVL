 #include <stdio.h>

int main () {

  int x = 7;
  int v = 6;
  v = x * v;
  x=v+x;
  printf("x vaut %i.\n",x);
  
  return 0;
}
