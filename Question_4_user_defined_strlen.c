#include<stdio.h>
int Strlen(char * st){

   int len=0;
    while(*st!='\0'){
        len++;
        st++;
    }
    return len;
}

int main(){
    char st[]="pintu";
    int l=Strlen(st);
    printf("The length of the string is = %d\n",l);

}