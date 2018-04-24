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
    cout<<"enter the process id, arrival time, burst time, priority  in order"<<endl;
    for(int i=0;i<4;i++)
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
    for(int i=0;i<n;i++)
    {
        A.push_back(M[3][i]);
    }
    cout<<endl;
   /* for(int i=0;i<n;i++)
    {
       cout<<A[i]<<endl;

    }*/
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        T.push_back(M[1][i]);
    }

    sort(T.begin(),T.end());



    int totaltime = 0;

    for(int i=0;i<n;i++)
    {
        totaltime+=M[2][i];
    }
    cout<<"totaltime = "<<totaltime<<endl;
   int t = T[0];
   cout<<"the sequence of execution of process is"<<endl;


/*
1 2 3 4 5 6 7
0 1 2 3 4 5 6
4 2 3 5 1 4 6
100 99 98 2 4 1 3
*/
   int x = 0;
   while(t<totaltime){
    int flag1 = 0;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size(),t<totaltime;i++)
   {
       if(t>=T[x]){
        for(int j =0;j<M[i].size();j++){
                 if(A[i]==M[3][j] && M[1][j]>t)
                    break;

                  else if(A[i]==M[3][j] && M[1][j]<=t){
                    cout<<M[0][j]<<endl;
                    M[3][j]=10000;
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


