#include <stdio.h>
int main()
{
	int arr[5]={12,56,34,78,100};
	int n=5;
	int max =arr[0];
	for (int i=1;i<n;i++)
{
if	(arr[i]>max)
{
	max =arr[i];
}
}
printf("the largest element in the array is %d",max);
return 0;
}
