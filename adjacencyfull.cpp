Adjacency list , from this code you can find all the elements from all the node.
-------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int node=0 , edge=0;
    cout<<"enter the number of node and edge"<<endl;
    cin>>node>>edge;
    vector<int>vec[1000];
    int n1=0,n2=0;

    for (int i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }
    for (int j=0; j<node; j++)
    {
        cout<<"node: "<<j<<" has->:";
        for (int i=0; i<vec[j].size(); i++)
        {
            cout<<vec[j][i]<<",";
        }
        cout<<endl;

    }
    return 0;
}

