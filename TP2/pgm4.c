#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

  char * buf1,*buf2,*buf3, *buf4, *buf5, *buf6;

 buf1=(char*)malloc(32);
 buf2=(char*)malloc(32);
 buf3=(char*)malloc(32);
 free(buf1);
 free(buf2);
 free(buf1);
 buf4=(char*)malloc(32); 
 buf5=(char*)malloc(32); 
 buf6=(char*)malloc(32); 
 printf("Done."); 
 return 0;
}
