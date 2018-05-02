#include<iostream>
#include<unistd.h>
//#include<sys/types.h>
//#include<cstdio>
//#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"the posix version of your machine is "<<_POSIX_VERSION<<endl;
	
	if(_POSIX_VERSION < 199506L)
	cout<<"your machine does not have full support of POSIX 1003.1c THREAD"<<endl;
	
	#if _POSIXTHREAD_PRIORITY_SCHEDULING
	cout<<"priority scheduling is there"<<endl;
	
	#else
	cout<<"priority scheduling is not there"<<endl;
	
	#endif
	
	return 0;
}
	
