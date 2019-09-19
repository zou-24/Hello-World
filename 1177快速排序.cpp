#include<iostream>
#include<algorithm>
const int maxn=100000000;
using namespace std;
int a[maxn];
void check_m(int x,int y)
{
	int i=x,j=y;
	int k=a[x];
	if(i>=j)
	return;
	while(i<j)
	{
		while(i<j&&a[j]>k)
		j--;
		if(i<j)
		{
			a[i]=a[j];
			i++;
		}
		while(i<j&&a[i]<=k)
		i++;
		if(i<j)
		{
			a[j]=a[i];
			j--;
		}
	}
	a[i]=k;
	check_m(x,i-1);
	check_m(i+1,y);
}
int main()
{
	int n,a[maxn]; 
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    check_m(i,j);
	return 0;
}
