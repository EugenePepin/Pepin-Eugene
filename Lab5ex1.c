#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
    setlocale (LC_CTYPE,"ua");
	int a[10];
	start:	
	 printf(" ���������� �������� � 1 �������� 5 ����������� \n \n");
	    int dod=0, vid = 0 , nul = 0,i=1,res;
                for(i = 1;i <=10; i++) {
                printf(" ����i�� ������� ������ �i� ������� %d : ", i);
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
	printf(" �i���i��� ������i� �������i� : ");
        printf ("%d",dod);
	printf("\n");
	printf(" �i���i��� �i����� �������i� : ");
	printf ("%d",vid);
	printf("\n");
        printf(" �i���i��� �������i�, � ���� � (0) : "); 
	printf ("%d",nul);
        printf("\n");				
        if (vid <= dod && nul < 10  ) {
        printf ( "\n ��������� : 1 " ); 
	}
       else if ( vid > dod && nul < 10  ) {
			 printf ( "\n ��������� : 0"); 
	} 
        if (nul > 0){
	printf ("\n ���������� ����� �������� � ����� �������i� (0): " ); 
        for(i = 1;i <=10; i++) {
        if ( a[i] == 0 ){   
        printf ("%d ", i);
 }
 } }
printf(" \n" ); 
end :
  printf(" \n �� ������ ����������? \n");
  printf(" ����i�� (1), ��� ���������� ������ �������� \n");
  printf(" ����i�� (0), ��� ����� � �������� \n ");
		printf(" \n ���� �i����i�� : ");
	scanf("%d",&res);
	printf(" \n" );
	if ( res == 1 ) {
		goto start;
	}
	else if ( res == 0 ) {
		return 0; }
	else {
	printf(" \n �����i��� ��������i��� �������� ����� �� ��������� �� ��� \n ");
	goto end;
 } 
return 0;
 }
