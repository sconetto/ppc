#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int sum, n;
	int x1,x2,y1,y2;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		while(n--)
		{
			scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
			sum+=(x2-x1+1)*(y2-y1+1);
		}
		printf("%d\n",sum);
	}
	return 0;
}
