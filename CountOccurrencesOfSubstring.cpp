/* PROGRAM TO COUNT NUMBER OF OCCURENCES OF A SUBSTRING IN A STRING 
EG: MALAYALAM 
	AL
	COUNT = 2 */
	
#include<iostream>
#include<string>
using namespace std;

int find(string str1,string str2)
{
	int flag=0,count=0;
	int k=0;
	int n=str1.length();
	int m=str2.length();
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=0;j<m;j++)
		{
			if(str1[k]!=str2[j])
				{
					flag=1;
					break;
				}
				else
				{
					k++;
				}	
		}
			if(flag==0)
					count++;
			flag=0;	
	}
	return count;	
}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	cout<<"Count of "<<str2<<" in "<<str1<<" is "<<find(str1,str2)<<endl;
	return 0;
}
