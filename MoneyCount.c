#include <stdio.h>
#include <conio.h>
void main(){
	int baht;
	printf("Enter Money : ");
	scanf("%d",&baht);
	printf("\n10 baht = %d",baht/10);
	baht = baht % 10;
	printf("\n5 baht = %d",baht/5);
	baht = baht % 5;
	printf("\n2 baht = %d",baht/2);
	baht = baht % 2;
	printf("\n1 baht = %d",baht/1);
	baht = baht % 1;
}
