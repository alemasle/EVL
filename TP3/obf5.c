 #include <stdio.h>

void mafonction (int x) {
    int r = x ^ 92;
    printf("Le résultat initial vaut %i.\n",r);
}

void mafonction_obfusquee (int x) {
    int a, b, c, d, e, f, g, r;
    
    a = 229*x + 247 ;
    b = 237*a + 214 + ((38*a+85) & 254) ;
    c = (b + ((-2*b + 255) & 254))*3 + 77 ;
    d = ((86*c + 36) & 70) * 75 + 231*c + 118 ;
    e = ((58*d + 175) & 244) + 99*d + 46 ;
    f = e & 148 ;
    g = (f-(e&255) + f)*103 + 13 ;
    r = 237*(45*g + (174*g | 34)*229 + 194 - 247) & 255 ;

    printf("Le résultat obfusqué vaut %d.\n",r);
}


int main () {

  int x ;
  
  printf("Valeur de x:");
  scanf("%d",&x);
  
  mafonction(x);
  mafonction_obfusquee(x);
  
  return 0;
}
