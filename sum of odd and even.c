#include <stdio.h>
int main()
{
    int i, a[20], even=0, odd=0;
    printf("Enter the required numbers:\n");
    for(i=0;i<=4;i++){
    scanf("%d", &a[i]);
    if(a[i]%2==0)
	{
		even=even+a[i];
	}
     else
     {
     odd=odd+a[i];
}
}
    printf("Sum of Even numbers is: %d", even);
    printf("Sum of Odd numbers is: %d", odd);
    return(0);
	}
	
	
