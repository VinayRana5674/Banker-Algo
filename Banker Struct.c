#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
struct safety
{
int allocation[10];
int maximum[10];
int need[10];
int flag;
};

int main()
{
	system("COLOR 2");
		X1:
	printf("\n\t\t\t\t\t\tMENU");
	printf("\n\t\t\t\t\t\t1-Enter data");
	printf("\n\t\t\t\t\t\t2-Exit");
	int choice;
	printf("\n\nPlease enter your choice 1 or 2:-");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		goto X;
		case 2:
			exit(0);
			default:
				
				printf("\n\n\t\t\t\t\tPlease enter valid choice");
			
	}
