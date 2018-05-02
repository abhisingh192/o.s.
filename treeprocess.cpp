#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	int n ;
	cout<<"parent id "<<getpid()<<endl;
	int x = getpid();
	
	cout<<"how many child processes you want?"<<endl;
	cin>>n;
	
	int i;
	
	for(i=0;i<n;i++)
	{
		int c = fork();
		
		if(c!=0)
		break;
		
		else if(c==0)
		{
			cout<<"child id "<<getpid()<<endl;
			cout<<"parent id "<<x<<endl;
		}
	}
	return 0;
			
	
}
