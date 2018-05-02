#include<iostream>
#include<unistd.h>
#include<cstdlib>
using namespace std;
int main()
{
	int c = fork();
	
	if(c<0)
	cout<<"error "<<endl;
	
	else if(c==0)
	exit(0);
	
	system("ps -lax");
	
	return 0;
			
		
}
