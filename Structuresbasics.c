#include<stdio.h>
#include<string.h>

struct Books{
        int age;
        char name[10];
        char gender[10];
    } book;

void printstruct(struct Books bk)
{
    printf("My name is %s\n",bk.name);
    printf("And my gender is %s\n",bk.gender);
    printf("And I am %d years old\n", bk.age);
};


int main()
{
    struct Books bk1, bk2;
    strcpy(bk1.name,"Rushikesh");
    strcpy(bk1.gender,"Mail");
    bk1.age = 20;

    printstruct(bk1);

}