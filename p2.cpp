/*Addition of natural numbers using Recursion*/
#include<iostream>
using namespace std;

int add(int n);

int main()
{
    int n;

    cout << "Enter n ";
    cin >> n;

    cout << "Sum =  " << add(n);

     
}

int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;
}
