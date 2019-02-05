/*WAP to the info of ten students without declaring
 no of individual objects and by defining member
  function outside the class */
#include<iostream>
using namespace std;
class p8
{
	public:
	char name[20];
	int roll,rank,cgpa;
	void get();
	void show();
	
};
void p8::get()
{
	cout<<endl<<"Enter Name: ";
	cin>>name;	
	cout<<"Roll Number: ";
	cin>>roll;	
	cout<<"Rank: ";
	cin>>rank;
	cout<<"Enter CGPA: ";
	cin>>cgpa;
}
void p8::show()
{
	 cout<<endl<<"Name:"<<name<<" Roll NO:"<<roll<<" Rank :"<<rank<<" CGPA:"<<cgpa;	  
}

main()
{
	p8 o[10];
	for(int i=0;i<10;i++)
	{
		o[i].get();
		o[i].show();
	}
		
	
}
