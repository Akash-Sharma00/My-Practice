#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void create()
{
    string name;
    int accno, bal;
    ofstream in;
    in.open("sample.txt", ios::app);
    cout << "Enter Account holder name:  ";
    cin >> name;
    cout << "Enter account number:  ";
    cin >> accno;
    cout << "Enter balance:  ";
    cin >> bal;
    in << endl;
    in << name << setw(17) << accno << setw(26 - sizeof(accno)) << bal;
}

int main()
{
    create();
    return 0;
}