#include <stdio.h>
#include <string.h>
int main()
{
    int s;
    printf("Enter the length of first string: ");
    scanf("%d", &s);
    char str1[s + 1];
    getchar();
    gets(str1);
    if (s != strlen(str1))
    {
        printf("Number of characters do not match length");
        return 0;
    }
    printf("Enter the length of second string: ");
    scanf("%d", &s);
    char str2[s + 1];
    getchar();
    gets(str2);
    if (s != strlen(str2))
    {
        printf("Number of characters do not match length");
        return 0;
    }
    char str3[strlen(str1)+strlen(str2)];
    int j=0;
    for(int i=0; *(str1+i)!='\0';i++)
    {
        *(str3+j)=*(str1+i);
        j++;
    }
    for(int i=0; *(str2+i)!='\0';i++)
    {
        *(str3+j)=*(str2+i);
        j++;
    }
    *(str3+j)='\0';
    printf("%s",str3);
    return 0;
}