#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(void){
	
	int value1, value2, choose, add, sub, mul, div;

	main:
	system("CLS");
	printf("\t\t\tCALCULATOR PROGRAM\n");
	printf("_______________________________________________________\n\n");
	printf("1- ADDITION");
	printf("2- SUBTRACTION");
	printf("3- MULIPLIATION");
	printf("4- DIVISION/n/n/n");
	scanf("%d",&choose);
	
	if(choose==1){
		add:
		system("CLS");
		printf("ENTER VALUE 1: ");
		scanf("%d",&value1);
		printf("ENTER VALUE 2: ");
		scanf("%d",&value2);
		add= value1+value2;
		printf("RESULT: %d\n\n\n",add);
		printf("ENTER 1: RESTART PROGRAM\t\t\t ENTER 0: MAIN MENU\n");
		scanf("%d",&choose);
		if(choose==1){
			goto add;
		}
		else{
			goto main;
		}
		
	}
	if(choose==2){
		sub:
		system("CLS");
		printf("ENTER VALUE 1: ");
		scanf("%d",&value1);
		printf("ENTER VALUE 2: ");
		scanf("%d",&value2);
		sub= value1-value2;
		printf("RESULT: %d",sub);
		printf("ENTER 1: RESTART PROGRAM\t\t\t ENTER 0: MAIN MENU\n");
		scanf("%d",&choose);
		if(choose==1){
			goto add;
		}
		else{
			goto main;
		}
	}
	if(choose==3){
		mul:
		system("CLS");
		printf("ENTER VALUE 1: ");
		scanf("%d",&value1);
		printf("ENTER VALUE 2: ");
		scanf("%d",&value2);
		mul= value1*value2;
		printf("RESULT: %d",mul);
		printf("ENTER 1: RESTART PROGRAM\t\t\t ENTER 0: MAIN MENU\n");
		scanf("%d",&choose);
		if(choose==1){
			goto add;
		}
		else{
			goto main;
		}
	}
	if(choose==4){
		div:
		system("CLS");
		printf("ENTER VALUE 1: ");
		scanf("%d",&value1);
		printf("ENTER VALUE 2: ");
		scanf("%d",&value2);
		div= value1/value2;
		printf("RESULT: %d",div);
		printf("ENTER 1: RESTART PROGRAM\t\t\t ENTER 0: MAIN MENU ");
		scanf("%d",&choose);
		if(choose==1){
			goto add;
		}
		else{
			goto main;
		}
	}
getch();
}

	

