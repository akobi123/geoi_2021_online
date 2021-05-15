#include<bits/stdc++.h>
#define ll int
#define F first
#define S second
using namespace std;
ll m,n,x,t,f[400005];
pair<ll,pair<ll,ll> > a[100005];
int get(ll id,ll l,ll r,ll u)
{
	if (f[id]!=-1)
		return f[id];
	if (u<=(l+r)/2)
		return get( id*2 ,    l    ,(l+r)/2,u);
	else
		return get(id*2+1,(l+r)/2+1,   r   ,u);
}
void upd(ll id,ll l,ll r,ll L,ll R,ll d)
{
	if (L<=l && r<=R)
	{
		f[id]=d;
		return;
	}
	if (r<L || R<l)
		return;
	if (f[id]!=-1)
	{
		f[ 2*id ]=f[id];
		f[2*id+1]=f[id];
		f[id]=-1;
	}
	upd( id*2 ,    l    ,(l+r)/2,L,R,d);
	upd(id*2+1,(l+r)/2+1,   r   ,L,R,d);
	return;
}
int main()
{
	cin>>m;
	for (int i=0; i<m; i++)
	{
		cin>>a[i].S.F>>a[i].F>>a[i].S.S;
		a[i].S.S+=a[i].S.F-1;
		n=max(n,a[i].S.S+1);
	}
	sort(a,a+m);
	for (int i=0; i<m; i++)
	{
		x=min( get(1,0,n,a[i].S.F-1) , get(1,0,n,a[i].S.S+1) );
		upd(1,0,n,a[i].S.F,a[i].S.S,x+1);
	}
	cin>>t;
	while (t--)
	{
		cin>>x;
		if (x>n)
		{
			cout<<0<<" ";
			continue;
		}
		cout<<get(1,0,n,x)<<" ";
	}
	cout<<endl;
	return 0;
}
