/*
find if 3 numbers form AP or GP and also next number of patter.
program terminates when input is 0 0 0 in sequence.
*/

#include<iostream>
using namespace std;

int main()
{
	int size=0, input[1000],a1,a2,a3;
	cout<<"Enter enteries in set of 3 numbers"<<endl;
	while(1)
	{
		cin>>a1>>a2>>a3;
		
		if(a1==0 && a2==0 && a3==0)
				break;
		
		input[size]=a1;
		input[size+1]=a2;
		input[size+2]= a3;
		
		size=size+3;
	}	
		for(int i=0;i<size;i=i+3)
		{
			int a1=input[i];
			int a2=input[i+1];
			int a3=input[i+2];
			
			
			static int temp=0;
			if(a2-a1==a3-a2)
			{
				temp=a3+(a2-a1);
				cout<<"AP "<<temp<<endl;
			}
		
			else if(a2/a1==a3/a2)
			{	
				temp=a3*(a2/a1);
				cout<<"GP "<<temp<<endl;
			}
			else
				cout<<"no pattern"<<endl;
		}
	
	return 0;
}
	
