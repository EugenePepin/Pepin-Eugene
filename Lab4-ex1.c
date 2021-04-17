#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main() {
	setlocale (LC_CTYPE,"ua");
  int x,y,res;
  float a;
while (1) {
  while (2) { 
    printf(" Обчислення прикладу з 1 завдання, 16 варiанту \n");
    printf(" Введiть число x: ");
    scanf("%d", &x);
    printf(" Введiть число y: ");
    scanf("%d", &y);

    if ( sin(x)+(x*y)-(2*x)+y == 0) {
      printf("\n Для таких значень x та y виконується дiлення на 0 \n");
      printf(" Перевiрте правильнiсть введених даних та спробуйте ще раз\n\n");
      continue;
    }
    else {
      break;
    }
  }
  a = (((x*y) + (2*x) - (pow(y,x)))/(sin(x)+(x*y)-(2*x)+y));
  printf(" \n ---Результати---- \n  ");
  printf(" \n  Вiдповiдь: ");
  printf("%.2f\n ", a);
  printf (" \n ------------------\n ");
		while (3){
  printf(" \n Ви бажаєте продовжити? \n");
  printf(" Введiть (1), щоб продовжити роботу програми \n");
  printf(" Введiть (0), щоб вийти з програми \n ");
		printf(" \n Ваша вiдповiдь : ");
	scanf("%d",&res);
	printf(" \n" );
	if ( res == 1 ) {
		break;
	}
	else if ( res == 0 ) {
		return 0; }
	else {
		printf(" \n Перевiрте правильнiсть введених даних та спробуйте ще раз \n ");
				continue;
 }
}
		
}
	
  return 0;
}

