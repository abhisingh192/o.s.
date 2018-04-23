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
    cout<<"enter the process id, arrival time, burst time in order"<<endl;
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


   // sort(M[1].begin(),M[1].end());

    vector<int> A;

    for(int i=0;i<3;i++)
    {
        A.push_back(M[1][i]);
    }
    for(int i=0;i<3;i++)
    {
        cout<<A[i]<<" ";
    }
    sort(A.begin(),A.end());


   cout<<"the sequence of execution of process is"<<endl;
   for(int i=0;i<A.size();i++)
   {
       for(int j=0;j<M[i].size();j++){
        if(A[i]==M[1][j])
        {
            cout<<M[0][j]<<" ";
        }
       }
   }
}
