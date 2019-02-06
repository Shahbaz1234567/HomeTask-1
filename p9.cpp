#include<iostream>
using namespace std;
class p9
{
	public :
		void table(int x);
};
inline void p9::table(int x)
{
	for(int i=1;i<=10;i++)
	{
		cout<<x<<" * "<<i<<" = "<<x*i<<endl;
	}
}
main()
{
	p9 o;
	int n;
	cout<<"Enter number to calculate its table";
	cin>>n;
	o.table(n);	
}
