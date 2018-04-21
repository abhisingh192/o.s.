//FIFO page replacement algorithm
//frame size is 3

#include<iostream>
using namespace std;

int main() {
cout<<"enter the number of frames"<<endl;
int f;                                           //number of frames
cin>>f;
int arr[3];                                      //array to hold the reference frame
cout<<"enter the length of the string"<<endl;
int l;
cin>>l;

int s[l];                                        //array to hold the reference string
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



  int len = 0;
  int k = 0;

  for(i=0;i<l;){
  int fla = 0;
  cout<<"checking for... "<<s[i]<<endl;

  if(arr[len]==-1){                         //if arr contains -1 means that position is empty
  for(j=0;j<3;j++){                         //checking if the arr contains the element we are are trying to put from the reference string
    if(s[i]==arr[j]){                          // if it contains then fla is set to 1
         fla = 1;
         break;
    }

  }

  // cout<<"fla "<<fla<<endl;
   if(!fla){
                                                //if fla =0, means our arr did not have the element we were trying to insert
    arr[len]=s[i];                               //therefore insert it in the arr and increment the miss by 1
    i++;
    len++;
    miss++;
    cout<<"miss"<<endl;
    for(j=0;j<3;j++)
     cout<<arr[j]<<" ";
     cout<<endl<<endl;
   }
   else if(fla){                               // if fla is 1, means that arr already had the element we were trying to insert,
    i++;                                       // therefore it is a hit
    hit++;
    cout<<"hit"<<endl;

    for(j=0;j<3;j++)
     cout<<arr[j]<<" ";
     cout<<endl<<endl;
   }

 /*
  cout<<"number of hits are "<<hit<<endl;
  cout<<"number of misses are "<<miss<<endl;
  cout<<endl;
  cout<<endl; */
  }

  else {

                                                        //similar operations but in thiss else block, the arr is now no longer empty

    int flag = 0;
  	for(j=0;j<3;j++){
  		if(s[i]==arr[j])
  		  flag = 1;
  		                }


  		  if(flag == 1){
  		      //  cout<<"checking for... "<<s[i]<<endl;
                i++;

                cout<<"hit"<<endl;
                hit++;


                cout<<"no page fault"<<endl;
  		  for(j=0;j<3;j++)
  		    cout<<arr[j]<<" ";
             cout<<endl;
             cout<<endl;

  		              }

  		else{
        //cout<<" k ="<<k<<endl;
  		arr[k]=s[i];                                           //in case of miss, we replace the arr[k] with s[i], k is initially 0.
  		                                                        //next time we will need to replace the next element of the arr
  		//cout<<"checking for... "<<s[i]<<endl;
  		i++;
  		k++;

  		cout<<"miss"<<endl;
  		miss++;

        //cout<<"1 page fault"<<endl;
  		for(int p=0;p<3;p++)
  		    cout<<arr[p]<<" ";
  		    cout<<endl;
            cout<<endl;
  		    if(k>2)                                              // here the frame size is 3, therefore after k=2, we will have to replace arr[0] with s[i]
  		    k=0;

  		      }

  		}

  		}
  		 cout<<endl;
         cout<<"number of hits are "<<hit<<endl;
         cout<<"number of misses are "<<miss<<endl;
         cout<<"number of pagefaults are "<<miss<<endl;


  		}
}
  		// 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1



