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
{	X1:
			system("COLOR B");
   printf("\n\n\n");	
   printf("\n                                                     ==================                                                 ");
   printf("\n*****************************************************     PROCESS      *************************************************");
   printf("\n*****************************************************   SAFE STATE     *************************************************");
   printf("\n*****************************************************      CHECK       *************************************************");
   printf("\n                                                     ==================                                                 ");
   printf("\n\n\n");
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
	X:
	system("COLOR 3");
	struct safety s[10];
	int fl;
	int i,j,k,process,resources,count=0,id;
	int avail[10];
	int work[10];
	int check_status=0;
	int res_count=0;
	int finish[10];
	printf("\nPlease enter No of Process:-");
	scanf("%d",&process);
	system("COLOR 6");
	printf("\nPlease enter No of Resources:-");
	scanf("%d",&resources);
	system("COLOR 6");
	printf("\nPlease enter Available Resoureces:-\n");
    for(i=0;i<resources;i++)
    {
    	
    	scanf("%d",&avail[i]);
	}
	system("COLOR 7");
		printf("\nEnter Allocation for processes");
	for(i=0;i<process;i++)
	{
		printf("\nP%d",i);
	
		for(j=0;j<resources;j++)
       	{
       		printf("\t");
       		scanf(" %d", &s[i].allocation[j]);
       	
		}
	}
	system("COLOR 2");
		printf("\nEnter Maximum Resources allocation for processes ",i);
		Y:
	for(i=0;i<process;i++)
	{
      	printf("\nP%d",i);
		for(j=0;j<resources;j++)
       	{
       		printf("\t");
       		scanf(" %d",&s[i].maximum[j]);
     
		}
	}
	system("COLOR 8");
	printf("\n\t\t\t\tAllocated resources Table is\n\n");
	for (i = 0; i < process; i++) 
    {
            for (j = 0; j < resources; j++) 
        {
                    printf("\t\t%d",s[i].allocation[j]);
            }
        printf("\n");
        }
        sleep(3);
	system("COLOR 9");
		printf("\n\t\t\t\tMaximun resources Table is\n\n");
	for (i = 0; i < process; i++) 
    {
            for (j = 0; j < resources; j++) 
        {
                    printf("\t\t%d",s[i].maximum[j]);
            }
        printf("\n");
        }
        sleep(3);
        system("COLOR 6");
	
