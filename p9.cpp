#include<iostream>
using namespace std;
class p9
{
	float b,h,ar;
	public :
		void table(int x);
		void triangle()
		{
			cout<<"Enter base and height of triangle"<<endl;
			cin>>b>>h;
			ar=0.5*b*h;
			cout<<"\n Area = "<<ar;
		}
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
	o.triangle();
}
