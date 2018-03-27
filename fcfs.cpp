#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no of process to be taken"<<endl;
	cin>>n;
	int p[n][5],i;
	cout<<"Enter the process no burst time arrival time in sequence for"<<n<<"Inputs"<<endl;
	for(i=0;i<n;i++){
		cin>>p[i][0];
		cin>>p[i][1];
		cin>>p[i][2];	
	}
	for(i=0;i<n;i++){
		cout<<p[i][0]<<" "<<p[i][1]<<" "<<p[i][2]<<endl; 
	}
	int j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(p[j][2]>p[j+1][2]){
			int temp = p[j][2];
			p[j][2] = p[j+1][2];
			p[j+1][2] = temp;
			temp = p[j][0];
			p[j][0] = p[j+1][0];
			p[j+1][0] = temp;
			temp = p[j][1];
			p[j][1] = p[j+1][1];
			p[j+1][1] = temp;		
			}
		}
	}
	int t=0;
	for(i=0;i<n;i++){
	p[i][3] = t-p[i][2];
	p[i][4]	= p[i][3]+p[i][1];
	t = t+p[i][1];	
	}
	for(i=0;i<n;i++){
		cout<<p[i][0]<<" "<<p[i][1]<<" "<<p[i][2]<<" "<<p[i][3]<<" "<<p[i][4]<<endl;
	} 	
}
