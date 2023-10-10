#include<stdio.h>
void main(){
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='U'||ch=='O')
    {
        printf("the character is a vowel");
    }
    else
    {
        printf("the character is a consonant");
    }
}