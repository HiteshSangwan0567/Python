#include <stdio.h>
int main()
{
	int i, a[100], n, d, temp;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter %d Integers\n", n);
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
	for(i=0;i<n-1;i++){
	for(d=0;d<n-i-1;d++)
		{
			if(a[d]>a[d+1])
			{
				temp=a[d];
				a[d]=a[d+1];
				a[d+1]=temp;
			}
		}
	}
	printf("The sorted list is\n");
	for(i=0;i<n;i++)
	printf("\n%d", a[i]);

}
