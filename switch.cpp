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
	while(rev>0)
	{
		rem=rev%10;
		switch(rem)
		{
			case 0: cout<<"Zero ";
					break;
			case 1: cout<<"One ";
					break;
			case 2: cout<<"Two ";
					break;
			case 3: cout<<"Three ";
					break;
			case 4: cout<<"Four ";
					break;
			case 5: cout<<"Five ";
					break;
			case 6: cout<<"Six ";
					break;
			case 7: cout<<"Seven ";
					break;
			case 8: cout<<"Eight ";
					break;
			case 9: cout<<"Nine ";
					break;		
		}
		rev/=10;
	}
	
	return 0;
}
