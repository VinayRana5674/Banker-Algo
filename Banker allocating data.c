#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<semaphore.h>
void * thread();
pthread_t p[2];//this could be n number of array for n number of process
pthread_mutex_t l1;// for test i have taken only two mutex initially
pthread_mutex_t l2;
int count=0;// count initialization
int main()
{
	
	pthread_mutex_init(&l1,NULL);// for initializing it's in unlock state#include<stdio.h>
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
	system("COLOR 5");
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

	pthread_mutex_init(&12,NULL);
	int i,res;
	void * msg;
	for(i=0;i<2;i++) // create 2 threads 
	{
		res=pthread_create(&p[i],NULL,thread,NULL);
		
	} 
	for(i=0;i<2;i++)//join those threads
	{
		res=pthread_join(p[i],&msg);
	}
	printf("count is %d\n",count);// count at last
	return 0;
}
