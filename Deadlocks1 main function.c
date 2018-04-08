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
	
	pthread_mutex_init(&l1,NULL);// for initializing it's in unlock state
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
