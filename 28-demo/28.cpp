#include <stdio.h>
#include <stdarg.h>
int sum(int n,...);
int max(int n,...);
int main(void)
{
    printf("Hello World!\n");
    int res =max(4,50,56,45,43);
    printf("%d\n",res);
    int n =  sum(5,1,2,3,4,5);
    printf("%d\n",n);
    return 0;
}
int sum(int n,...){
    va_list va;
    va_start(va,n);
    int sum = 0;
    for(int i = 0; i < n;i++){
       sum += va_arg(va,int);
    }

    va_end(va);
    return sum;
}
//规定：可变参数一定是int类型,n为多少个可变参赛
int max(int n,...){
    va_list va; //句柄
    va_start(va,n);
    int big = va_arg(va,int);
    for(int i = 1; i < n;i++){
          int current = va_arg(va,int);
          if(current > big){
              big = current;
          }
          /*
        if(va_arg(va,int) > big){  //
            big = va_arg(va,int);  //
            }
    */
    }
    va_end(va);
    return big;
}