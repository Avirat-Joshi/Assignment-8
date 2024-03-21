#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int nums[n + 1];
    printf("Enter %d elements ",(n+1));
    for (int i = 0; i <= n; i++)
        scanf("%d", nums + i);
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum+=(*(nums+i));
    printf("%d" , (sum-(n*(n+1)/2)));    
    return 0;
}