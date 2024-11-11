#include <iostream>
using namespace std;
int main()
{
    long long int m, n ,a;
    printf("Enter values of m, n and a repectively : \n");
    scanf("%lld %lld %lld", &m, &n, &a);
    long long int  div1= m/a ;
    if (m%a ==  0)
        m =div1;
    else 
        m = div1+1;
    
    long long int div2= n/a;
    if (n%a == 0)
        n= div2;
    else 
        n=div2 +1;

    long long unsigned int res;
    res= (m*n);
    printf("The number of flagstones required to fully cover the theatre squre is : %llu", res);
    return 0;
}
