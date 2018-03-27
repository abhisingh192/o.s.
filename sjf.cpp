// shortest job first (without preemption)

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no of process to be taken"<<endl;
	cin>>n;
	int p[n][6],i;
	cout<<"Enter the process no burst time arrival time in sequence for "<<n<<" Inputs"<<endl;
	for(i=0;i<n;i++){
		cin>>p[i][0];
		cin>>p[i][1];
		cin>>p[i][2];
		p[i][3] = 0;
	}
	int j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(p[j][1]>p[j+1][1]){
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
	cout<<"sorted"<<endl;
	for(i=0;i<n;i++){
		cout<<p[i][0]<<" "<<p[i][1]<<" "<<p[i][2]<<" "<<p[i][3]<<endl;
	}
	int t=0;
	float aw = 0,at = 0;
 	cout<<"Process happen in sequence "<<endl;
	for(j=0;j<n;j++){
	for(i=0;i<n;i++){
		if(p[i][2]<=t&&p[i][3]==0){
			p[i][4] = t - p[i][2];
			t=t+p[i][1];
			p[i][3] = 1;
			p[i][5] = p[i][4] + p[i][1];
			aw = aw + p[i][4];
			at = at + p[i][5];
			cout<<p[i][0]<<" "<<"Waiting time = "<<p[i][4]<<" Turnaround time = "<<p[i][5]<<endl;
			break;
		}
	}
	}
	cout<<"Average Waiting Time "<<(aw/n)<<endl;
	cout<<"Average Turnaround time "<<(at/n)<<endl;
	return 0;
}

