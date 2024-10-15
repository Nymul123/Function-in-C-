#include <iostream>
using namespace std;
int print()
{

cout<<"Hi"<<endl;

    return 2;
}
int main()
{
    print();//Hi
   char val=print();//Hi
    cout << val << endl;//☻ show as output.
    cout<<print();// Hi and 2 are showed in output.
    return 0;
}
