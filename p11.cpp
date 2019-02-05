/*WAP to write 3 member functions  within the class  invoke them  by 
using call by value,reference,address and also by defining at least 1 
reference variable in each member function */
#include<iostream>
using namespace std;
class p11
{
	int a=10,b=20,c=30;
	public:
	void fun1()
	{
		int &f1=a;
		cout<<f1;
	}
	void fun2()
	{
		int &f2=b;
		cout<<f2;		
	}
	void fun3()
	{
		int &f3=c;
		cout<<f3;		
	}
	
};
main()
{
	/*METHOD ONE*/

	void (p11::* ptr1)()=&p11::fun1;
	//pointer to member function fun1()
	p11 o1;
	//o1 object of class p11	 		
	(o1.*ptr1)();
	//call of member function
	
	/*METHOD TWO*/
	
	p11 o2;
	o2.fun2();
	
	

	
	
	 
	
}



