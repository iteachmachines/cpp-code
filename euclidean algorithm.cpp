//Euclidean algo 
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{
	int a=10,b=15;
	cout<<gcd(a,b)<<endl;
}
