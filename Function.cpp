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
   char val=print();
    cout << val << endl;
    cout<<print();
    return 0;
}