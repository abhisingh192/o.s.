#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<cstdio>
using namespace std;
int main()
{
	int child_pid = fork();
	
	if(child_pid>0)
	{
		cout<<"parent will sleep"<<endl;
		sleep(2);
	}
	else
	{
		cout<<"child is zombie. parent id is "<<getpid()<<endl;
	}
	
	if(child_pid!=0)
	{
		wait(0);
		system("ps -lax > 1.txt");
	}
	return 0;

}
