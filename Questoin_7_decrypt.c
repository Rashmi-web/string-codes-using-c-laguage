#include<stdio.h>
void decrypt(char * c){
    char * ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }
}
int main(){
    char c[]="Sbtinj";
    decrypt(c);
    printf("The decrypted string is =%s\n",c);

    return 0;
}