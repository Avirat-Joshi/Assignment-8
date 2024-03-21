#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int *a, int n)
{
    int *start = a;
    int *end = a + n - 1;
    while (start < end)
    {
        swap(start,end);
        start++;
        end--;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d",(a+i));
    reverse(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ",*(a+i));
    return 0;
}