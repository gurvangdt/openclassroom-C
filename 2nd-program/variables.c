#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) //main function
{
  int nombreDeVies = 5, niveau = 1, age = 0;

  printf("Vous avez %d vies et vous etes niveau %d\n", niveau, nombreDeVies);
  printf("*** B A M ***\n"); // Le mec se fait zbibrou la gueule
  nombreDeVies = 4; // Le mec vient de perdre 1pt de vie
  printf("Désolé mec il te reste que %d PV maintenant tu pues la merde\n", nombreDeVies);

  printf("Tu as quel age salope?");
  scanf("%d", &age); // Rentres ton âge fdp ("scanf" permet d'entrer du contenue dans la console)
  printf("Ah ouais ok tu as donc %d ans!\n\n", age);

  return 0;
}
