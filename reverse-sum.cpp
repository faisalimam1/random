/* 
Reversed number is a number written in Arabic numerals but the order of digits is reversed. The first digit becomes last and vice versa. 
For example, if the main hero had 1245 strawberries in the tragedy, he has 5421 of them now. Note that all the leading zeros are omitted. 
That means if the number ends with a zero, the zero is lost by reversing (e.g. 1200 gives 21). 
Also note that the reversed number never has any trailing zeros.

ACM needs to calculate with reversed numbers. Your task is to add two reversed numbers and output their reversed sum. 
Of course, the result is not unique because any particular number is a reversed form of several numbers 
(e.g. 21 could be 12, 120 or 1200 before reversing). Thus we must assume that no zeros were lost by reversing 
(e.g. assume that the original number was 12).
*/

#include<iostream>
using namespace std;
int main()
{
	int count=0,i,last;
	long long unsigned num, temp, rev1=0,rev2=0,sum=0,rsum=0;
	printf("Enter 1st no :");
	scanf("%llu",&num);
	temp=num;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	printf("no of digits in 1st num =%d\n",count);
	for(i=0;i<count;i++)
	{
		last=num%10;
		rev1=rev1*10 + last;
		num=num/10;
	}
	printf("reversed 1 no : ");
	printf("%llu",rev1);
	
	//input for 2nd num
	count=0;
	printf("\nEnter 2nd no :");
	scanf("%llu",&num);
	temp=num;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	printf("no of digits in 2nd num =%d\n",count);
	for(i=0;i<count;i++)
	{
		last=num%10;
		rev2=rev2*10 + last;
		num=num/10;
	}
	printf("reversed 2nd no : ");
	printf("%llu",rev2);
	sum=rev1+rev2;
	printf("\nsum of both reveresed no= %llu",sum);
	count=0;
	temp=sum;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	printf("\nNo of digits in sum=%d",count);
	for(i=0;i<count;i++)
	{
		last=sum%10;
		rsum=rsum*10+last;
		sum=sum/10;
	}
	printf("\nReversed sum=%llu", rsum);
	
return 0;
}
