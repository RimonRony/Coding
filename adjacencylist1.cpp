adjacency list using vector , direct find the child of a given node
--------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int node=0 , edge=0;
    cout<<"enter the number of node and edge"<<endl;
    cin>>node>>edge;
    vector<int>vec[5];
    int n1=0,n2=0;

    for (int i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }
        for (int i=0; i<vec[3].size(); i++)
        {
            cout<<vec[3][i]<<"-";
        }
    return 0;
}
