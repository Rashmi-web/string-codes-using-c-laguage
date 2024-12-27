#include<stdio.h>
int countcharacter(char *st,char c){
    char * ptr=st;
    int count =0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
            
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[]="Rashmi ranjan swain";
    char c= 'a';
    int i=countcharacter(st,c);
    printf("The given character %c is present %d time in the string.\n",c,i);
}