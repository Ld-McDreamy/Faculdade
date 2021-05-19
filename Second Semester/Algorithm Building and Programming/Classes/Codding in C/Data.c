#include <stdio.h>

int main(void){
  int day, month, year, still;

  printf("\nQue dia \202 hoje?\n      ");
  scanf("%d", &day);
  printf("\nEm que m\210s estamos?\n\t");
  scanf("%d", &month);
  printf("\nEm que ano estamos?\n       ");
  scanf("%d", &year);

  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) still = 31 - day;
  else if (month == 4 || month == 6 || month == 9 || month == 11) still = 30 - day;
  else still = 28 - day; /* Calculo para saber quantos dias faltam para o fim do mês */
  if (month == 1) printf("\nM\210s que estamos: Janeiro. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 2) printf("\nM\210s que estamos: Fevereiro. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 3) printf("\nM\210s que estamos: Mar\207o. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 4) printf("\nM\210s que estamos: Abril. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 5) printf("\nM\210s que estamos: Maio. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 6) printf("\nM\210s que estamos: Junho. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 7) printf("\nM\210s que estamos: Julho. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 8) printf("\nM\210s que estamos: Agosto. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 9) printf("\nM\210s que estamos: Setembro. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 10) printf("\nM\210s que estamos: Outubro. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 11) printf("\nM\210s que estamos: Novembro. \nFaltam %d dias para o final do m\210s.\n\n", still);
  else if (month == 12) printf("\nM\210s que estamos: Dezembro. \nFaltam %d dias para o final do m\210s.\n\n", still);
  // significado dos (\números) -> \202 = é; \207 = ç; \210 = ê;  
  return 0; }