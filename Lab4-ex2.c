#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
	setlocale (LC_CTYPE,"ua");
  int s=0,i=0,ar,vd;
	label1:
			printf(" Обчислення середнього арифметичної суми чисел в дiапазонi [0,30] \n");
			printf(" Виберiть, яким чином обчислювати приклад \n \n");
			printf(" Введiть число (1), якщо циклом (for) \n");
		       printf(" Введiть число (2), якщо циклом (while) \n");
		       printf(" Введiть число (3), якщо циклом (do-while) \n \n");
	              printf(" Ваша вiдповiдь : ");
		       scanf("%d", &vd);
		       printf("\n");
		if ( vd !=1 && vd !=2 && vd !=3 ) {
			printf (" Перевiрте правильнiсть введених даних та спробуйте ще раз \n \n");
		goto label1;}
			switch (vd) {
				case 1 :  // метод for
				 for  (i=0;i <=30; i++) 
					s+=i;
				ar= s/i;
			               printf(" Середнє арифметичне суми чисел в дiапазонi [0,30] методом (for) = %d \n \n ", ar); return 0;                           							              
			case 2:   // метод while
			i=0;
			        while ( i<=30 ) {
				  s+=i;
                             i++; ar= s/i;  }  
				printf(" Середнє арифметичне суми чисел в дiапазонi [0,30] методом (while) = %d \n \n", ar); return 0;				                                                
			 case 3 :    // метод do-while
			i=0;
				do {
				  s+=i; 
				i++;
				     }			
                             while ( i<=30); 
			ar= s/i;
				printf(" Середнє арифметичне суми чисел в дiапазонi [0,30] методом (do-while) = %d \n \n", ar); 
			return 0;
}	
return 0; 
}
