#include<iostream>
using namespace std;
int main()
{
    int t,i;
    string n;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;

        if(n[n.size()-1]%2==0)
        {
            cout<<"even"<<endl;
        }
        else
            cout<<"odd"<<endl;
    }
    return 0;
}
