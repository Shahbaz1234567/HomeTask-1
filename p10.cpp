/*WAP to implement use of setw() and ws in a same program*/
#include<iostream>
#include<iomanip>
using namespace std;
class p10
{
	char name[20];  
	int num;
	public:
		void show_setw()
		{			
			cin>>num;
			cout<<setw(5)<<num;
		}
		void show_ws()
		{
			cin>>ws; // this will carry whitespaces
			cin.getline(name,20);
			cout<<name; 
 
		}
};
main()
{
	p10 o;
	o.show_setw();
	o.show_ws();
}
