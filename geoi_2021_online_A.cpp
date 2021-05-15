#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll n,a[4][4000006],c,mn,mx,mid=2000000,mn1,mx1;
vector<int> ans;
int main()
{
	cin>>n;
	a[0][0+mid]=1;
	mn=0+mid;
	mx=0+mid;
	for (ll k=1; k<=50; k++)
	{
		mn1=mn;
		mx1=mx;
		for (ll i=mn; i<=mx; i++)
		{
			if (!a[c][i])
				continue;
			a[(c+1)%2][i-k*k*k]=a[c][i]*2;
			a[(c+1)%2][i+k*k*k]=a[c][i]*2+1;
			a[c][i]=0;
//			cout<<i-k*k*k-mid<<" "<<i+k*k*k-mid<<endl;
			mn1=min(mn1,i-k*k*k);
			mx1=max(mx1,i+k*k*k);
		}
		mn=mn1;
		mx=mx1;
		c=(c+1)%2;
//		cout<<a[c][-1+mid]<<endl;
		if (a[c][n+mid])
		{
//			cout<<a[c][n+mid]<<endl;
			while (a[c][n+mid]>1)
			{
				ans.pb(a[c][n+mid]%2);
				a[c][n+mid]/=2;
			}
			for (int i=ans.size()-1; i>=0; i--)
				if (ans[i])
					cout<<'+';
				else
					cout<<'-';
			cout<<endl;
			return 0;
		}
	}
	cout<<'*'<<endl;
	return 0;
}
