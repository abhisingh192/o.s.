#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	int a ;
	a = fork();
	cout<<"fork returns "<<getpid()<<endl;
	return 0;
}
