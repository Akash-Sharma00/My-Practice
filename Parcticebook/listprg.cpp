#include <iostream>
#include <list>

using namespace std;

void diap(list<int> &l)
{
    list <int> :: iterator tt;  //Iterator for list<int>

    for ( tt = l.begin(); tt != l.end(); tt++)
    {
        cout<<*tt<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> l1,l2;
    int i, x;
    for ( i = 0; i < 5; i++)
    {
        cout<<"\nEnter the element\t";
        cin>>x;
        l1.push_back(x);
    }
    for ( i = 0; i < 5; i++)
    {
        cout<<"\nEnter the element\t";
        cin>>x;
        l2.push_back(x);
    }
    diap(l1);
    //l1.sort();
    diap(l2);
    l1.merge(l2);
    diap(l1);
    
    return 0;
}