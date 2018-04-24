#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <vector<int> > M;
    int n;
    cout<<"enter the number of process"<<endl;
    cin>>n;
    cout<<"enter the process id, arrival time, burst time"<<endl;
    for(int i=0;i<3;i++)
    {

        vector <int> N;
        for(int j=0;j<n;j++)
        {

            int x;
            cin>>x;
            N.push_back(x);

        }
        M.push_back(N);

    }
    cout<<endl;
  /*   for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < M[i].size(); ++j) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }*/


   // sort(M[1].begin(),M[1].end());

    vector<int> A;
    vector<int> T;
    cout<<endl;

   /* for(int i=0;i<n;i++)
    {
       cout<<A[i]<<endl;

    }*/
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        T.push_back(M[2][i]);                     //inserting the burst time in T vector
    }
    for(int i=0;i<n;i++)
    {
        A.push_back(M[1][i]);                     //inserting the arrival time in A vector
    }

    sort(T.begin(),T.end());
    sort(A.begin(),A.end());




    int totaltime = 0;

    for(int i=0;i<n;i++)
    {
        totaltime+=M[2][i];
    }
    cout<<"totaltime = "<<totaltime<<endl;
   int t = A[0];
   cout<<"the sequence of execution of process is"<<endl;
   int x = 0;
   while(t<totaltime+A[0]+A[n-1]){
        cout<<"time is "<<t<<endl;
    int flag1 = 0;

    for(int i=0;i<T.size();i++)
   {    //cout<<"t = "<<t<<" ";
       if(t>=A[x]){
        for(int j =0;j<M[i].size();j++){
                 if(T[i]==M[2][j] && M[1][j]>t)
                    break;

                  else if(T[i]==M[2][j] && M[1][j]<=t){
                    cout<<M[0][j]<<endl;
                    M[1][j]=1000;
                    t+=M[2][j];
                    flag1 = 1;
                    break;

            }
        }
        if(flag1)
            break;
       }
       else
        t++;



   }
               x++;
   }



   }


