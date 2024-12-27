#include<stdio.h>
#include<string.h>
int main(){
    char st[20]="Rashmi";
    char st2[]="ranjan swain";

    strcat(st,st2);
    printf("Now st is = %s\n",st);

    return 0;


}