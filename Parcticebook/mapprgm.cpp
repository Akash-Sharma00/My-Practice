#include <iostream>
#include <string.h>
#include <map>

using namespace std;

void disp(map<string,int> &s)
{
    map<string,int> :: iterator tt;
    for ( /*auto &x: s)*/tt = s.begin(); tt != s.end(); tt++)
    {
        //cout<<x.first<<" "<<x.second<<endl;
        cout<<tt->first<<" "<<tt->second<<endl;;
    }
    cout<<endl;
}

int main()
{
    map<string,int> m1;
    int i,x;
    string a;
    for(i = 0; i < 5; i++)
    {
        cout<<"\nEnter a name :";
        cin>>a;
        cout<<"\nEnter marks :";
        cin>>x;
        m1[a] = x;
        //pair<string,int>(x,)
    }
    disp(m1);
    return 0;
}