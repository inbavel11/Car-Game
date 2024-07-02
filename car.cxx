#include<stdio.h>
#include<conio.h>
void car();
void car()
{
	
	printf("\t=====÷=====\n");
	printf("\t|  |   |  |\n");
	printf("\t|  |   |  |\n");
	printf("\t===========\n");
	printf("\t |*|   |*|\n");
	printf("\t ---   ---");
	
}
int main()
{
	car();
	for(int i=1;i>0;i++)
	{
		
	int a;
	printf("\n\n\nenter=");
	scanf("%d",&a);
	clrscr();
	switch(a)
	{
	case 5:
	printf("\n\n\n\n\n\n");
	car();
	break;
	case 2:
	car();
	break;
	case 1:
	printf("=====÷=====\n");
	printf("|  |   |  |\n");
	printf("|  |   |  |\n");
	printf("===========\n");
	printf(" |*|   |*|\n");
	printf(" ---   ---");
	break;
	case 3:
	printf("\t\t=====÷=====\n");
	printf("\t\t|  |   |  |\n");
	printf("\t\t|  |   |  |\n");
	printf("\t\t===========\n");
	printf("\t\t |*|   |*|\n");
	printf("\t\t ---   ---");
 break;
 case 4:
 	printf("\n\n\n\n\n\n");
 		printf("=====÷=====\n");
	printf("|  |   |  |\n");
	printf("|  |   |  |\n");
	printf("===========\n");
	printf(" |*|   |*|\n");
	printf(" ---   ---");
	}
	}
	getch();
}
	
	