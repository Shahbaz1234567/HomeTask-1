#include <iostream>
#include <math.h>
 
using namespace std;
 
 //Fuction declaration
int reverseNumber(int num);
 
int main()
{
    int num, reverse;
 
    // Inputting number from user
    cout<<"Enter any number: ";
    cin>>num;
 
    // Calling function to reverse any number
    reverse = reverseNumber(num);
 
    cout<<"Reverse of number "<<num <<" is: "<<reverse;
 
    return 0;
}
 
//Recursive function to find reverse of any number
 
int reverseNumber(int num)
{
    // Find total digits in num
    int i=1,num_cpy;
    num_cpy=num;
    while(num_cpy>0)
    {
    	num_cpy=num_cpy/10;
    	i++;
	}
     int digit =i;
 
    // Base condition
    if(num == 0)
        return 0;
 
    return ((num%10 * pow(10, digit)) + reverseNumber(num/10));
}

