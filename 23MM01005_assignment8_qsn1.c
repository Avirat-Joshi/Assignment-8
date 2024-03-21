#include<stdio.h>
#include<string.h>
void circular_rotate(int *a,int *b,int *c)
{
    int temp;
    temp=*c;
    *c=(*a);
    *a=temp;
    temp=*c;
    *c=(*b);
    *b=temp;
}
int main()
{
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    circular_rotate(&x,&y,&z);
    printf("%d %d %d",x,y,z);
    return 0;
}