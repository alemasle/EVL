#include <stdio.h>

int main () {

int v = 7*6;

v = v*5*6;
if (v<2*6) v = v-7*6;
   else v = v+7*6;
while (v<50) v++;

printf("v vaut %i.\n",v);

return 0;
}
