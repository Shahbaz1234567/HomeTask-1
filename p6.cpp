#include<iostream>
using namespace std;
class p6
{
	public :
	static int roll;
	
	static void get()
	{
		cout<<"Enter roll";
		cin>>roll;
	}
	static void put()
	{
		cout<<roll;
	}
		
};
int p6::roll=0;
main()
{
	 p6::get();
	 p6::put();

}
