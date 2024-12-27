#include<stdio.h>
void Strcpy(char *st1,char *st2){
    int i=0;
    while(st1[i]!='\0'){
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0';
}
int main(){
    char st1[]="Rashmi";
    char st2[20];
    Strcpy(st1,st2);
    printf("st2 is = %s\n",st2);

}