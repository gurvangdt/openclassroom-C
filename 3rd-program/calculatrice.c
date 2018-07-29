#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int resultat = 0, nombre1 = 0, nombre2 = 0;

  //On demande le nombre 1 et le nombre 2 au mec

  printf("Entrez le nombre 1 : ");
  scanf("%d", &nombre1);
  printf("Entrez le nombre 2 : ");
  scanf("%d", &nombre2);

  //On fait le calcul ici :

  resultat = nombre1 + nombre2;

  //Et l'addition s'affiche à l'écran :

  printf("%d + %d = %d\n", nombre1, nombre2, resultat);

  return 0;
}
