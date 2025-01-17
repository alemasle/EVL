#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_authentification (char *password) {

  char password_buffer[16];
  int auth_flag=0;

  strcpy(password_buffer, password);
  if (strcmp(password_buffer, "titi") == 0)
    auth_flag=1;
  if (strcmp(password_buffer, "toto") == 0)
    auth_flag=1;
  return auth_flag;
}

int main (int argc, char * argv[]) {
  if (argc<2) {
    printf("Usage: %s <password>\n", argv[0]);
    exit(0);
  }
  if (check_authentification(argv[1])) {
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("    Access granted.\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
  } else
    printf("\nAccess denied.\n");
  return 0;
}
