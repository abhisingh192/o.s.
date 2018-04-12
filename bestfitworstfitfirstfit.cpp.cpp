// memory management algotithms
//first fit, best fit,worst fit


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int mem[] = {10,4,20,18,7,9,12,15};
	int input[] = {12,10,9};
	cout<<"Menu"<<endl;
	cout<<"1. First Fit"<<endl;
	cout<<"2. Worst Fit"<<endl;
	cout<<"3. Best Fit"<<endl;
	int ch;
	cout<<"Enter your choice"<<endl;
	cin>>ch;


	if(ch==1)
	{
		int i,j;
		int b[8];
		for(i=0;i<8;i++)
	     b[i]=mem[i];

		for(i=0;i<3;i++){
		  for(j=0;j<8;j++){
		    if(input[i]<=b[j]){
                    b[j] = -1;

                cout<<mem[j]<<"-"<<input[i]<<"="<<mem[j]-input[i]<<endl;
                    break;
		    }

		                    }

		                }


	}
	else if(ch==2)
	{
	int b[8];
	int i,j;

	for(i=0;i<8;i++)
	b[i]=mem[i];

	sort(b, b+8);
	int a[8];

	for(i=0;i<8;i++)
	a[i]=b[i];



	for(i=0;i<3;i++){
          for(j=7;j>=0;j--){
            if(input[i]<=b[j]){
                    b[j] = -1;
                 cout<<a[j]<<"-"<<input[i]<<"="<<a[j]-input[i]<<endl;
                 break;
            }


	}
        }
	}
	else if(ch==3)
	{
	int i,j;

	int current;
	int b[8];
		for(i=0;i<8;i++)
	     b[i]=mem[i];
	int k;

	for(i=0;i<3;i++){
        int best = 99;
	  for(j=0;j<8;j++){

	    if(input[i]<=b[j]){

	    current = b[j] - input[i];
	      if(current<best){
	      best = current;
	      k=j;
	      }
	      }


	     }
	        b[k] = -1;
	    //   cout<<"k= "<<k<<endl;
	      cout<<mem[k]<<"-"<<input[i]<<"="<<mem[k]-input[i]<<endl;
	      continue;

	     }


	}
}

