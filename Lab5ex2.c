#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){
    setlocale (LC_CTYPE,"ua"); 
	start :
	printf(" Обчислення прикладу з 2 завдання 5 лабораторної \n \n");
	int a[10];
	int dod=0,min,dob=1,vidmin=1,i=1,res;
	const int low = -100, high =100;
	printf(" Яким чином обчислити приклад?\n");
        printf(" Введiть (1), щоб ввести массив з клавiатури \n");
        printf(" Введiть (2), щоб заповнити масив за допомогою генератора випадкових чисел \n ");
	printf(" \n Ваша вiдповiдь : ");
	scanf("%d",&res);
        if ( res ==1 || res ==2 ) {
	printf("\n");
	switch (res) {
		case 1 :
                for(i = 1;i <=10; i++) {
                printf(" Введiть елемент масиву пiд номером %d : ", i);
                scanf("%d", &a[i]);
                if ( a[i] >0){
                dod++;
                }
        } 
	// виведення утвореного масиву
	printf("\n Утворений масив { ");
	 for(i = 1;i <=10; i++) {
		printf("%d ",a[i]);
	}
	printf("} \n");
	// виведення кількості додатніх елементів 
	if ( dod > 0 ) {
        printf("\n Кiлькiсть додатнiх елементiв : ");
        printf ("%d",dod); 
	printf("\n");
	}
      else { 
		printf("\n Додатнiх елементiв в масивi немає"); 
		printf("\n");
		}
	// переведення в модуль
   for ( i=1; i <= 10; i++){
       a[i] = abs( a[i] );
}
       // визначення мінімального елементу в масиві 
       for (int i = 1; i <=10; i++){
       if(a[i]<min){
       min=a[i];
       vidmin=i;
      }
	}
      // обчислення добутку 
      for (i=1; i <vidmin; i++) {		
		dob*=a[i];
		}
			// обчислення виключень
			if ( min == a[1] ){
				printf("\n В масивi перше число є мiнiмальним, або усi числа одинаковi \n");goto end;
			}
			else if (min == a[2]){
				printf("\n  В масивi друге число є мiнiмальним \n");goto end;
			}
		else {
// виведення добутку елементів масиву
        printf ("\n Добуток елементiв масиву,розташованих до мiнiмального елемента : ");
	printf("%d", dob);
	printf("\n");
	printf("\n ");goto end;
			}	
        case 2 : 
        srand(time(0));
            for(i = 1;i <=10; i++) {
		a[i] = low/2 + rand()%high;
                if ( a[i] >0){
                dod++;
                }
        } 
	// виведення утвореного масиву
	printf(" \n Утворений масив { ");
	 for(i = 1;i <=10; i++) {
		printf("%d ",a[i]);
	}
	printf(" } \n");

	// виведення кількості додатніх елементів 
	if ( dod > 0 ) {
        printf("\n Кiлькiсть додатнiх елементiв : ");
        printf ("%d ",dod); 
	printf("\n");
	}
      else { 
		printf("\n Додатнiх елементiв в масивi немає"); 
		printf("\n");
		}
	// переведення в модуль
   for ( i=1; i <= 10; i++){
       a[i] = abs( a[i] );
}
       // визначення мінімального елементу в масиві 
       for (int i = 1; i <=10; i++){
       if(a[i]<min){
       min=a[i];
       vidmin=i;
      }
	}
      // обчислення добутку 
      for (i=1; i <vidmin; i++) {		
		dob*=a[i];
		}	
	// обчислення виключень
          for (i=1; i <=2; i++) {
         if ( min == a[i] ) {	
		printf("\n В масивi перше, або друге число є мiнiмальним \n");goto end;
				} 
			}
	// виведення добутку елементів масиву
        printf ("\n Добуток елементiв масиву,розташованих до мiнiмального елемента : ");
	printf("%d", dob);
	printf("\n"); 
	printf("\n ");   			
	
				
} }
else {
printf("\n Перевiрте правильнiсть введених даних та спробуйте ще раз \n" ); goto start;
	}
end :
printf("\n ");
return 0;
 }


