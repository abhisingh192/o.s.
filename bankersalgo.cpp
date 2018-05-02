#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int totres = 0;
    cout<<"enter the number of process"<<endl;
    int process; cin>>process;

    cout<<"enter the number of resources"<<endl;
    int res;  cin>>res;

    int Av[res];

    cout<<"the available array is"<<endl;

    for(int i =0; i<res; i++)
        cin>>Av[i];

    for(int j = 0; j<res; j++){
            totres+=Av[j];
        }

    cout<<"enter the allocated array"<<endl;

    int A[process][res];

    for(int i =0; i<process; i++){
        for(int j = 0; j<res; j++){

            cin>>A[i][j];
        }
    }

    cout<<"enter the max array"<<endl;

    int M[process][res];

    for(int i =0; i<process; i++){
        for(int j = 0; j<res; j++){

            cin>>M[i][j];
        }
    }

    cout<<"the need array is"<<endl;

    int N[process][res];

    for(int i =0; i<process; i++){
        for(int j = 0; j<res; j++){

            N[i][j] = M[i][j] - A[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i =0; i<process; i++){
        for(int j = 0; j<res; j++){

            cout<<N[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int count1 = 0;

    for(int i =0; i<process; i++){
            int temp = 0;
        for(int j = 0; j<res; j++){
            temp+=N[i][j];
        }
        //cout<<"temp "<<temp<<endl;


        //cout<<"totres "<<totres<<endl;
        int flag = 0;

        if(temp <= totres){
            for(int j = 0; j<res; j++){

                    if(Av[j]<N[i][j]){
                        flag = 1;
                        break;
                    }



        }
        int x = 0;
        if(!flag){
            for(int j = 0; j<res; j++){
                    N[i][j] = 9999;
                    Av[j]=Av[j] + A[i][j];
            }

            for(int j = 0; j<res; j++){
            x+=A[i][j];
        }
       /* cout<<"available is";
        for(int j = 0; j<res; j++){
            cout<<Av[j]<<" ";
        }*/
                    totres = totres + x;
                    //cout<<endl<<endl;
                    cout<<i<<"th process"<<endl;
                    //cout<<"update totres is "<<totres<<endl;
                    //cout<<endl<<endl;
                    count1++;

        }
        }




        if(count1<process && i == process -1)
            i = -1;
        else if(count1 == process)
                 break;




}

}

/*
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2

7 5 3
3 2 2
9 0 2
2 2 2
4 3 3
*/
