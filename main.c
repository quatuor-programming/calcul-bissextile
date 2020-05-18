#include <stdlib.h>
#include <stdio.h>

int main () {
  printf("Calcul des années bissextiles \n ------- \n code par trio-programming\n\n");
  int annee = 0, reste = 0, verify = 0;
  printf("Quelle annee voluez-vous verifier ?\n");
  scanf("%d", &annee);
  
  reste = annee % 4;
  if(reste != 0) {printf("Cette année n'est pas bissextile.\n");}
  else {
    reste = annee % 100;
    if(reste == 0) {
      reste = annee % 400;
      if (reste == 0) {printf("Cette annee est bien bissextile\n"); verify = 1;}
      else {printf("Cette année n'est pas bissextile.\n"); verify = 1;}
    }
    if (verify == 0) {printf("Cette année est bien bissextile.\n");}
  }
  return 0;
}
