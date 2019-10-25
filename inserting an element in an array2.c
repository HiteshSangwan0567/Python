#include <stdio.h>
int main()
{
int i, a[20], value=100, loc=2;
for(i=0;i<=6;i++)
{
	scanf("%d", &a[i]);
}	
for(i=5;i>=1;i--)
{
	a[i+1]=a[i];
}
a[1]=value;
for(i=0;i<=6;i++)
{
	printf("%d", &a[i]);
}
}


