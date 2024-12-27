#include<stdio.h>
int main(){
    char str[10];
    printf("Please enter your string:");
    scanf("%s",str);
    printf("Your name is %s\n",str);
    

    // Another way for printing string

    char *ptr=str;

    printf("%s\n",ptr);
    // Another way for printing string
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    


}