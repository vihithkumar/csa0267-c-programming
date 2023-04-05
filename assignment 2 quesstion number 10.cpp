#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int minJumps(int arr[], int n)
{
    if (arr[0] == 0) 
	{
        return -1;
    }
 
    int maxReach = arr[0];

    int step = arr[0];

    int jumps = 1;
 
    int i;
    for (i = 1; i < n; i++)
	 {

        if (i == n - 1)
		 {
            return jumps;
        }

        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];
 
        step--;
 
        if (step == 0)
		 {
            jumps++;
 
            if (i >= maxReach)
			 {
                return -1;
            }
 
        
            step = maxReach - i;
        }
    }
 
    return -1;
}

int main()
{
    int arr[MAX_SIZE];
    int n, i;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minJumpsNeeded = minJumps(arr, n);

    if(minJumpsNeeded == -1) {
        printf("It is not possible to reach the end of the array.\n");
    } else {
        printf("Minimum number of jumps needed to reach the end of the array: %d\n", minJumpsNeeded);
    }

    return 0;
}
