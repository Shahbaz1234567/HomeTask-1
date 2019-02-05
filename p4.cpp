#include<iostream>
using namespace std;
class bank
{
	char cust_name[50];
	int acc_no;
	int ifsc_code;
	public:
	void get_detail()
	{
	cout<<"Enter Customer Name : "<<endl;
	cin>>cust_name;
	cout<<"Enter Account Number : "<<endl;
	cin>>acc_no;
	cout<<"Enter IFSC Code : "<<endl;
	cin>>ifsc_code;
		
	}
	
friend void world(bank s);
};
void world(bank s)
{
	cout<<endl<<"Customer Name : "<<s.cust_name<<endl;
	cout<<"Account Number : "<<s.acc_no<<endl;
	cout<<"IFSC Code : "<<s.ifsc_code<<endl;
	
}
main()
{
	bank s;
	s.get_detail();
	world(s);
	
}
