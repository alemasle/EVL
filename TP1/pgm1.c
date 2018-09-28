#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[]) {
  int valeur = 5;
  char buffer1[8];
  char buffer2[8];

  strcpy(buffer1, "un");
  strcpy(buffer2, "deux");

  printf("[AVANT] buffer2 est a l'adresse %p et contient \'%s\'\n", buffer2, buffer2);
  printf("[AVANT] buffer1 est a l'adresse %p et contient \'%s\'\n", buffer1, buffer1);
  printf("[AVANT] valeur est a l'adresse %p et vaut %d (0x%08x)\n", &valeur, valeur, valeur);

  printf("\n[STRCPY] copie de %lu octets dans buffer2\n\n", strlen(argv[1]));
  strcpy(buffer2, argv[1]);

  printf("[APRES] buffer2 est a l'adresse %p et contient \'%s\'\n", buffer2, buffer2);
  printf("[APRES] buffer1 est a l'adresse %p et contient \'%s\'\n", buffer1, buffer1);
  printf("[APRES] valeur est a l'adresse %p et vaut %d (0x%08x)\n", &valeur, valeur, valeur);

  return 0;
}
