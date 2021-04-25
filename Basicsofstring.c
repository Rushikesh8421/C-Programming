#include<stdio.h>
#include<string.h>

int main()
{
    char name[3] = {'R','J', '\0'};
    char str1[65], str2[98], str3[32];
    
    strcpy(str1, "Kedar");
    strcpy(str2, "Raj");
    
    printf("%s\n",name);
    printf("%s\n",str1);
    printf("%s\n",str2);

    strcat(str1, str2);
    printf("%s\n", str1);
    
    // CASE-1 for strcmp
    strcpy(str1, "A");
    strcpy(str2, "A");
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%d\n", strcmp(str1, str2));

    // CASE-2 for strcmp
    strcpy(str1, "A");
    strcpy(str2, "Z");
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%d\n", strcmp(str1, str2));

    // CASE-3 for strcmp
    strcpy(str1, "Z");
    strcpy(str2, "A");
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%d", strcmp(str1, str2));

    return 0;
}