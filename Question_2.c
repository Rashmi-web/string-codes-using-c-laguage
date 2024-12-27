#include<stdio.h>
#include<string.h>

int main(){
    char st1[30];
    char st2[30];
    char c;
    int i=0;
    printf("please enter the first string : ");
    scanf("%s",st1);

    printf("Please enter the second string char by char:\n ");

    while(c!='\n' ){
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;

    }
    st2[i-1]='\0';
    printf("The value of st1 is = %s\n",st1);
    printf("The value of st1 is = %s\n",st2);
    printf("strcmp for these strings returns  %d\n",strcmp(st1,st2));
}