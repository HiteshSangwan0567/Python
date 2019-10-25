#include <stdio.h>
int main()
{
	int a[20]={12,13,14,15,16},i,key,flag=0;
	printf("Enter the element you want to search: \n");
	scanf("%d", &key);
	for(i=0;i<5;i++){
		if(a[i]==key)
			printf("Found");
			flag=1;
			break;
		}
	if(!flag){
	printf("Element not found");
}
}

