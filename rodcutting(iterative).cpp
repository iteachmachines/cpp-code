//rod cutting iterative
#include<bits/stdc++.h>
using namespace std;
 int rodcutting(int price[],int n)
 {
 	int t[n+1];
 	for(int i=0;i<=n;i++)
 	t[i]=0;
 	for(int i=0;i<=n;i++)
 	{
 		for(int j=1;j<=i;j++)
 		t[i]=max(t[i],price[j-1]+t[i-j]);
 	}
 	return t[n];
}
 int main()
 {
 	int price;
 	cin>>price;
 	int n;
 	cin>>n;
 	cout<<rodcutting(price,n);
 	return 0;

 }
