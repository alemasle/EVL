 #include <stdio.h>

int encode (int i) {
  return i*6;
}

int decode (int i) {
  return i/6;
}

int main () {

  int x = 7;
  int v = 6;
  v = x * v;
  x=v+x;
  printf("x vaut %i.\n",x);
  
  return 0;
}
