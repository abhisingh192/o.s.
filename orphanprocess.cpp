#include<iostream>
#include<unistd.h>
#include<cstdlib>
using namespace std;
int main()
{
	int pid = fork();
	
	if(pid>0)
	{
		sleep(10);
		cout<<"process killed "<<pid<<endl;
		exit(0);
	}
	
	else if(pid==0)
	{
		while(1)
		{
			sleep(2);
			cout<<"child process id "<<getpid()<<endl;
			cout<<"parent process id "<<getppid()<<endl;
		}
	}
	return 0;
			
		
}
