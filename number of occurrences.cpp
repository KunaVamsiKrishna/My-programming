#include<stdio.h>
int main(){
	int n ,s,r,count=0;
	scanf("%d%d",&n,&s);
	while(n!=0)
	{
		r=n%10;
		if(r==s)
		{
			count++;
		}
		n=n/10;
	}
	printf("%d",count);
}
