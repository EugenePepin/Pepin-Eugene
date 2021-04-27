#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
    setlocale (LC_CTYPE,"ua");
	int a[10];
	start:	
	 printf(" Обчислення прикладу з 1 завдання 5 лабораторної \n \n");
	    int dod=0, vid = 0 , nul = 0,i=1,res;
                for(i = 1;i <=10; i++) {
                printf(" Введiть елемент масиву пiд номером %d : ", i);
                scanf("%d", &a[i]);
                if ( a[i] == 0) {
		nul++; 
		}		
                else if(a[i] < 0){
                vid++;
                }
		else if ( a[i] >0){
                dod++;
                } 
	}
	printf("\n");
	printf(" Кiлькiсть додатнiх елементiв : ");
        printf ("%d",dod);
	printf("\n");
	printf(" Кiлькiсть вiдємних елементiв : ");
	printf ("%d",vid);
	printf("\n");
        printf(" Кiлькiсть елементiв, у яких є (0) : "); 
	printf ("%d",nul);
        printf("\n");				
        if (vid <= dod && nul < 10  ) {
        printf ( "\n Виведення : 1 " ); 
	}
       else if ( vid > dod && nul < 10  ) {
			 printf ( "\n Виведення : 0"); 
	} 
        if (nul > 0){
	printf ("\n Порядковий номер елементу в якому присутнiй (0): " ); 
        for(i = 1;i <=10; i++) {
        if ( a[i] == 0 ){   
        printf ("%d ", i);
 }
 } }
printf(" \n" ); 
end :
  printf(" \n Ви бажаєте продовжити? \n");
  printf(" Введiть (1), щоб продовжити роботу програми \n");
  printf(" Введiть (0), щоб вийти з програми \n ");
		printf(" \n Ваша вiдповiдь : ");
	scanf("%d",&res);
	printf(" \n" );
	if ( res == 1 ) {
		goto start;
	}
	else if ( res == 0 ) {
		return 0; }
	else {
	printf(" \n Перевiрте правильнiсть введених даних та спробуйте ще раз \n ");
	goto end;
 } 
return 0;
 }
