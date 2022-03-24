/*write a menu driven program  to perform following task using different function chatagory
date:21-03-2022*/
#include<stdio.h>
#include<conio.h>
void prime();	//without argument without return type
void pellindrom(int,int);	//with argument without return type
int reverse();	//without argument with return type
int evenseries(int,int);	//with argument with return type
int menu();	//without argument with return type

void main()
{
		int c,x,y,i,a;
		char ch;
		clrscr();
	do
	{
	   c=Menu();

	   switch(c)
	   {

		case 1:
			prime();
			break;
		case 2:
			printf("\nEnter value:");
			scanf("%d",&x);
			pellindrom(p,q);
			break;
		case 3:
			reverse();
			break;
		case 4:
			printf("\nEnter value:");
			scanf("%d",&x);
			evenseries(p,q);
			break;
		case 5:
			exit(0);
		default:
			printf("Invalid choice:");
	   }
	   printf("\n\n\tDo you want to continue?(yes=Y/y,no=N/n):");
	   flushall();
	   scanf("%c",&ch);
	   }while(ch=='Y'||ch=='y');
	getch();
	}
int menu()
	int a;
	printf("\nMenu");
	printf("\n_____________\n1.Prime Number\n2.Pellindrom Number\n3.Reverse Number\n4.Even Series\n5.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&a);

	return a;

void prime()
{
	int x,y,i,count=0;
	clrscr();
	printf("\n enter num to check prime or not:");
	scanf("%d",&x);
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			count=1;
			break;
		}
	}
	if (count==0)
		printf("%d is prime number",x);
	else
		printf("%d is not prime number",x);
}

void pellindrom(int p,int q)
{
	int x,b=0,y;
	clrscr();
	printf(" enter a number to reverse:\n");
	scanf("%d",&x);
	y=x;
	while(x!=0)
	{
		b=b*10;
		b=b+x%10;
		x=x/10;
	}
	if(y==b)
		printf("%d is a pellindrom number",y);
	else
		printf("%d is a not pellindrom number",y);
}


