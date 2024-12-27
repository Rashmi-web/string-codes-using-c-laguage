#include<stdio.h>
int countcharacter(char *st,char c){
    char * ptr=st;
    while(*ptr!='\0'){
        if(*ptr==c){
            return 1;
        }
        ptr++;
    }
    return 0;

}
int main(){
    char st[]="Rashmi ranjan swain";
    char c= 't';
    int i=countcharacter(st,c);
    if(i==1){
        printf("YES the given character present in string.\n");
    }
    else{
        printf("NO the given character not present in string. \n");
    }
    
}