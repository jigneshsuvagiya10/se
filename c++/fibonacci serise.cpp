#include<iostream>
using namespace std;

int main()
{
	int n1=0,n2=1,n3,i,n;
	
	cout<<"Enter number of elements : ";
	cin>>n;
	
	cout<<n1<<endl;
	cout<<n2<<endl;
	
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		
		cout<<n3<<endl;
		
		n1=n2;
		n2=n3;
	}
	
	return 0;
}
