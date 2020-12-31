#include<bits/stdc++.h>
using namespace std;
int rodcutting(int n,int a,int b,int c)
{
	if(n==0)
	return 0;
	if(n<0)
	return -1;
	int res=max(max(rodcutting(n-a,a,b,c),rodcutting(n-b,a,b,c)),rodcutting(n-c,a,b,c));
	if(res==-1)
	return -1;
	return 1+res;
}
int main()
{
	int n;
	cin>>n;
	int a,b,c;
	cin>>a>>b>>c;
	cout<<rodcutting(n,a,b,c);
}
