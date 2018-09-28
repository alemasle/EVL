/*
   Fri Oct 25 18:44:27 CEST 2013
   Hugues Evrard <hugues.evrard@inria.fr>
   Ce document est dans le domaine public.

   Observation de la memoire virtuelle :

   Sous linux, en mode super utilisateur :
   echo "0" > /proc/sys/kernel/randomize_va_space

   Puis lancer ce programme dans 2 terminaux differents, et observer
   l'adresse de i et les effets de modification de valeur, entre les 2
   instances du programme.

 */

#include <stdio.h>

int main()
{
    char buff[32] = { '\0' };
    int i = 0;
    int loop = 1;

    while (loop) {

        printf("  i : adresse : %x\tvaleur : %d\n", &i, i);

        printf("==> Choisir action : v[oir] m[odifier] q[uitter] ? ");
        scanf("%s", buff);

        switch (buff[0]) {
        case 'v':
            break;
        case 'm':
            printf("==> nouvelle valeur ? ");
            scanf("%d", &i);
            break;
        case 'q':
            loop = 0;
            break;
        default:
            printf("option non reconnue\n");
            break;
        }
    }

    printf("sayonara !\n");
    return 0;
}
