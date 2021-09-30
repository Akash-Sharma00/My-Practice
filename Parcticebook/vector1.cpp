#include <iostream>
#include <vector>
using namespace std;

template<class T>
void disp(T &v1)
{
    vector<char>:: iterator tt;
    for ( tt = v1.begin(); tt != v1.end(); tt++)
    {
        cout<<*tt<<" ";
    }
    return;
}
int main()
{
    vector<char> v;
    int i,n;
    char x;
    cout<<"\nEnter the length\t";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnter the element\t";
        cin>>x;
        v.push_back(x);
    }
    disp(v);
    vector<char> :: iterator it = v.end();
    cout<<"\nEnter to insert  ";
    cin>>x;
    cout<<"\nPaste : ";
    cin>>n;
    v.insert(it,n,x);
    disp(v);
    return 0;
}