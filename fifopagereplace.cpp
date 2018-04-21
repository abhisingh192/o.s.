#include<iostream>
using namespace std;

int main() {
cout<<"enter the number of frames"<<endl;
int f;
cin>>f;
int arr[3];
cout<<"enter the length of the string"<<endl;
int l;
cin>>l;

int s[l];
cout<<"enter the string"<<endl;
for(int i =0;i<l;i++)
cin>>s[i];
cout<<endl;
cout<<"menu"<<endl;
cout<<"1. FIFO"<<endl;
//cout<<"2. LRU"<<endl;
//cout<<"3. Optimal"<<endl;
cout<<endl;

cout<<"enter your choice"<<endl;
int ch;
 cin>>ch;
 int hit =0;
 int miss = 0;
 int pagefault = 0;

 for(int i=0;i<3;i++)
 arr[i] = -1;
 if(ch==1) {
  int i,j;
  cout<<endl;



  for(i=0;i<3;i++){
  cout<<"checking for... "<<s[i]<<endl;
  if(arr[i]==-1 && arr[i-1]!=s[i]){
      arr[i] = s[i];
      miss++;
  }
  else if(arr[i]==-1 && arr[i-1]==s[i])
  hit++;

  }


 /* for(i=0;i<3;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
  cout<<"number of hits are "<<hit<<endl;
  cout<<"number of misses are "<<miss<<endl;
  cout<<endl;
  cout<<endl; */


  int k = 0;

  for(i=3;i<l;){
    int flag = 0;
  	for(j=0;j<3;j++){
  		if(s[i]==arr[j])
  		  flag = 1;
  		                }


  		  if(flag == 1){
  		        cout<<"checking for... "<<s[i]<<endl;
                i++;

                cout<<"hit"<<endl;
                hit++;
                cout<<"number of hits are "<<hit<<endl;
                cout<<"number of misses are "<<miss<<endl;

                cout<<"no page fault"<<endl;
  		  for(j=0;j<3;j++)
  		    cout<<arr[j]<<" ";
             cout<<endl;
             cout<<endl;

  		              }

  		else{

  		arr[k]=s[i];
  		cout<<"checking for... "<<s[i]<<endl;
  		i++;
  		k++;

  		cout<<"miss"<<endl;
  		miss++;
  		cout<<"number of hits are "<<hit<<endl;
        cout<<"number of misses are "<<miss<<endl;

        //cout<<"1 page fault"<<endl;
  		for(int p=0;p<3;p++)
  		    cout<<arr[p]<<" ";
  		    cout<<endl;
            cout<<endl;
  		    if(k>2)
  		    k=0;

  		      }

  		}
  		 cout<<endl;
         cout<<"number of hits are "<<hit<<endl;
         cout<<"number of misses are "<<miss<<endl;
         cout<<"number of pagefaults are "<<miss<<endl;

  		}

  		}
  		// 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1



