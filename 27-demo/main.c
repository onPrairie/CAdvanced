#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main(int arg,char * argv[])
{
    printf("Hello World!\n");
#if 0
    int * a = malloc(sizeof(int)*10);
    for(int i =0;i < 10;i++){
        a[i] = i;
    }
    for(int i =0;i < 10;i++){
       printf("%d\n",a[i]);
    }
    free(a);
     // free(a);
#endif
#if 0
    int ** p  = (int**)malloc(5*sizeof(int));
    for(int i =0;i < 5;i++){
          p[i] =(int*)malloc(6*sizeof(int));
    }
    p[1][2] = 3;
    printf("%d\n",p[1][2]);
    for(int i = 0; i < 5;i++){
        free(p[i]);
    }


   char * aa;
   int i = 1;
   while(1){
    aa = (char*)malloc(1024*1024);  //1M
     if(aa == NULL){
            printf("malloc error!\n");
            return 1;
     }
     printf("%d M\n",i);
     i++;
     usleep(100000);
   }
#endif
   char * a = (char*)malloc(5);
    strcpy(a,"hello world sssssssssssssssssssss");
    free(a);
    return 0;
}

