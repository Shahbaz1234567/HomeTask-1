/*WAP access private info of one class to another class*/
#include<iostream>
using namespace std;
class one
{	 
	int a;
	//private data member
	void get() //private member function
	{
		cin>>a;
	}	
	friend class two;
	//class two is friend of class one
};
class two
{	
	 public:
	 	void show(one o)
	 	{
	 		o.get();
	 		//call of private member function
	 		cout<<o.a;
	 		//getting private data
		}	
};
main()
{	
	one o; //object of class one
	two t;//object of class two

	t.show(o);
	/*calling of member
	 function of class two with passing parameter object of one*/	
}



