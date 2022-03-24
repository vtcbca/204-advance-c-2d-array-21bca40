/* Write a program to enter five string and print it.
	Date :- 21-2-22
	Author:- Tanmay S. Chaudhari
	*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10];

	//name contain 5 string and each string has 9 charactar.

	int i,j,c=0;
	clrscr();

	//Logic to input 5 string.

	for(i=0;i<5;i++)
	{
		printf("\n Enter a name %d : ",i+1);
		flushall();
		gets(name[i]);
	}

	//Logic to print 5 string.

	for(i=0;i<5;i++)
		printf("\n\tname %d : %s",i+1,name[i]);

	//Logic to check vowel and print it from each string.

	printf("\n");
	for(i=0;i<5;i++)
	{
		for(j=0,c=0;j<9;j++)
		{
			switch(name[i][j])
			{
				case 'A':
				case 'a':
				case 'E':
				case 'e':
				case 'I':
				case 'i':
				case 'O':
				case 'o':
				case 'U':
				case 'u':
					printf("%c ",name[i][j]);
					c++;
					break;
			}
		}
		printf("\n Number of vowels in name %d is %d.\n",i+1,c);
	}
	getch();
}