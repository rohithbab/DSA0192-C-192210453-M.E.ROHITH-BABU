#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main()
{
	int n1,n2,result;
	cout<<"enter first number:";
	cin>>n1;
	cout<<"\nenter second number:";
	cin>>n2;
	result=gcd(n1,n2);
	cout<<"the gcd of "<<n1<<" and "<<n2<<" is = "<<result;
}