/* PROGRAM TO CONVERT DIGITS INTO WORDS 
Eg: 123--> One Two Three */

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int rev=0,rem=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	string str[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	while(rev>0)
	{
		rem=rev%10;
		cout<<str[rem]<<" ";
		rev=rev/10;
	}
	return 0;
}
