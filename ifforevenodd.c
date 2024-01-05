#include<stdio.h>
void main(){
    char chr;
    printf("enter the character");
    scanf("%c",&chr);
    if(chr=='a'||chr=='e'||chr=='i'||chr=='o'||chr=='u'||chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U')
    {
        printf("the character is VOWEL");
    }
    else
    {
        printf("the character is a CONSONANT");
    }
}
