Graph representation /= adjacency matrices


#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int adj[50][50]={0};

    int node,edge;
    int n1,n2;
    cout<<"enter the number of nodes"<<endl;
    cin>>node;
    cout<<"enter the number of edges"<<endl;
    cin>>edge;

    for (int i=1; i<=edge; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        //cout<<adj[n1][n2]<<endl;
        adj[n2][n1]=1;
        //cout<<adj[n2][n1]<<endl;;
    }
    for (int i=1; i<=node; i++)
    {
        for (int j=1; j<=node; j++)
        {
            cout<<adj[i][j]<<" - ";

        }
        cout<<endl;
    }
    return 0;
}


