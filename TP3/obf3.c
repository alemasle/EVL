 #include <stdio.h>

int main () {

int v = 7;

 v = v*5;
 if (v<2) v = v-7;
    else v = v+7;
 while (v<50) v++;

 printf("v vaut %i.\n",v);

return 0;
}
