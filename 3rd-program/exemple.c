#include <math.h>

//RACCOURCIS

int nombre = 2;

nombre += 4; // nombre vaut 6...
nombre -= 3; // ... nombre vaut maintenant 3
nombre *= 5; // ... nombre vaut 15
nombre /= 3; // ... nombre vaut 5
nombre %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)

//FONCTION fabs

double absolu = 0, nombre = -27;
absolu = fabs(nombre); // absolu vaudra 27

//FONCTION ceil > L'INVERSE C'EST floor

double dessus = 0, nombre = 52.71;
dessus = ceil(nombre); // dessus vaudra 53

//FONCTION pow (PUISSANCES)

double resultat = 0, nombre = 2;
resultat = pow(nombre, 3); // resultat vaudra 2^3 = 8

//FONCTION sqrt (RACINE CARREE)

double resultat = 0, nombre = 100;
resultat = sqrt(nombre); // resultat vaudra 10
