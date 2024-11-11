/* Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... 
rewrite small numbers from input to output. Stop processing input after reading in the number 42. 
All numbers at input are integers of one or two digits */
#include <iostream>
using namespace std;
int main()
{
	int a[100],i=0,input;
	do
	{
		cin>>input;
		if(input!=42)
		{
			a[i]=input;
			i++;
		}
	} while (input!=42);
	cout<<"aborted after hitting 42\n";
	for(int j=0;j<i;j++)
		cout<<a[j]<<endl;
	
	return 0;
}
