#include <stdio.h>
#include <string.h>
#include <stdlib.h>s
char* sub_str(char* str,int n){
    if(n > strlen(str) || n < 0){
        return NULL;
    }
    str[n] = '\0';
    return str;
}
int main(int argc, char *argv[])
{
    printf("Hello World!\n");
#if 0
    char a[] = "hello word";
    char* p =  sub_str(a,-1);
    if(p == NULL){
        printf("error");
        return 1;
    }
    printf("%s\n",p);
#endif
    char a[] = "aaaaaaaaaaaaaaaaaaaaaaaaa"; //wr stacks
    char *b = "abc" ;//r   text
    char* c = (char*)malloc(10);  //heap wr
    strcpy(c,"hello");
    printf("%s\n",c);
    c[2] = 'h';
      printf("%s\n",c);
    return 0;
}
