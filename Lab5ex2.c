#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){
    setlocale (LC_CTYPE,"ua"); 
	start :
	printf(" ���������� �������� � 2 �������� 5 ����������� \n \n");
	int a[10];
	int dod=0,min,dob=1,vidmin=1,i=1,res;
	const int low = -100, high =100;
	printf(" ���� ����� ��������� �������?\n");
        printf(" ����i�� (1), ��� ������ ������ � ����i����� \n");
        printf(" ����i�� (2), ��� ��������� ����� �� ��������� ���������� ���������� ����� \n ");
	printf(" \n ���� �i����i�� : ");
	scanf("%d",&res);
        if ( res ==1 || res ==2 ) {
	printf("\n");
	switch (res) {
		case 1 :
                for(i = 1;i <=10; i++) {
                printf(" ����i�� ������� ������ �i� ������� %d : ", i);
                scanf("%d", &a[i]);
                if ( a[i] >0){
                dod++;
                }
        } 
	// ��������� ���������� ������
	printf("\n ��������� ����� { ");
	 for(i = 1;i <=10; i++) {
		printf("%d ",a[i]);
	}
	printf("} \n");
	// ��������� ������� ������� �������� 
	if ( dod > 0 ) {
        printf("\n �i���i��� ������i� �������i� : ");
        printf ("%d",dod); 
	printf("\n");
	}
      else { 
		printf("\n ������i� �������i� � �����i ����"); 
		printf("\n");
		}
	// ����������� � ������
   for ( i=1; i <= 10; i++){
       a[i] = abs( a[i] );
}
       // ���������� ���������� �������� � ����� 
       for (int i = 1; i <=10; i++){
       if(a[i]<min){
       min=a[i];
       vidmin=i;
      }
	}
      // ���������� ������� 
      for (i=1; i <vidmin; i++) {		
		dob*=a[i];
		}
			// ���������� ���������
			if ( min == a[1] ){
				printf("\n � �����i ����� ����� � �i�i�������, ��� ��i ����� ��������i \n");goto end;
			}
			else if (min == a[2]){
				printf("\n  � �����i ����� ����� � �i�i������� \n");goto end;
			}
		else {
// ��������� ������� �������� ������
        printf ("\n ������� �������i� ������,������������ �� �i�i�������� �������� : ");
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
	// ��������� ���������� ������
	printf(" \n ��������� ����� { ");
	 for(i = 1;i <=10; i++) {
		printf("%d ",a[i]);
	}
	printf(" } \n");

	// ��������� ������� ������� �������� 
	if ( dod > 0 ) {
        printf("\n �i���i��� ������i� �������i� : ");
        printf ("%d ",dod); 
	printf("\n");
	}
      else { 
		printf("\n ������i� �������i� � �����i ����"); 
		printf("\n");
		}
	// ����������� � ������
   for ( i=1; i <= 10; i++){
       a[i] = abs( a[i] );
}
       // ���������� ���������� �������� � ����� 
       for (int i = 1; i <=10; i++){
       if(a[i]<min){
       min=a[i];
       vidmin=i;
      }
	}
      // ���������� ������� 
      for (i=1; i <vidmin; i++) {		
		dob*=a[i];
		}	
	// ���������� ���������
          for (i=1; i <=2; i++) {
         if ( min == a[i] ) {	
		printf("\n � �����i �����, ��� ����� ����� � �i�i������� \n");goto end;
				} 
			}
	// ��������� ������� �������� ������
        printf ("\n ������� �������i� ������,������������ �� �i�i�������� �������� : ");
	printf("%d", dob);
	printf("\n"); 
	printf("\n ");   			
	
				
} }
else {
printf("\n �����i��� ��������i��� �������� ����� �� ��������� �� ��� \n" ); goto start;
	}
end :
printf("\n ");
return 0;
 }


