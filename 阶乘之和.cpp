#include<stdio.h>
int main()
{
	int a[11],i,n,count=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	int N=n+30;
	for(i=0;i<10;i++)
	{
	if(a[i]<=N)
	++count;
	}
	printf("%d\n",count);
	return 0;
}
