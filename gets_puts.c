#include<stdio.h>
int main(){
    char str[10];
    printf("Enter your name");
    gets(str);
    printf("your name is : %s",str);
    puts(str);
}