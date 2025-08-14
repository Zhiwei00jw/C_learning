//将字符串s1中的字符传送到字符串s2中，每隔三个字符，传送一个'*'
#include <stdio.h>
#include <string.h>
#define MAX 80
void transfer_str(char * s1,char * s2);
int main(){
    char s1[MAX],s2[MAX];
    char *p1=s1,*p2=s2;
    printf("Enter a string:");
    gets(p1);
    transfer_str(p1,p2);
    puts(p2);
    system("pause");
    return 0;

}
void transfer_str(char * s1,char * s2){
    int index=0;
    while(*s1!='\0'){
        index=0;
        while(index<3){
            *(s2++)=*(s1++);
            index++;
        }
        *(s2++)='*';
    }
    *s2='\0';
}
