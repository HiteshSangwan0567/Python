#include <stdio.h>
int main()
{
	int i, a[20], even=0, odd=0;
	for(i=0;i<=4;i++)
	scanf("%d", &a[i]);
	{
		if(a[i]%2==0)
		{
			even=even+a[i];
			printf("%d", even);
		}
		else
		odd=odd+a[i];
		printf("%d", odd);
	}
}
