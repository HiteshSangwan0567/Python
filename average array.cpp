#include <stdio.h>
int main(){
	int a[5];
	int i;
	int avg;
	int sum=0;
	for(i=0;i<=5;i++){
		scanf("%d", &a[i]);
		sum=sum+a[i];
	avg=sum/5;
	
}
printf("%d", avg);
}
