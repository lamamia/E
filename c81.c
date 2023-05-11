#include<stdio.h>
int main(){
    char text;
    while(getchar()!='\n');
    text=getchar();
    printf("input1:%c\n", text);
    text=getchar();
    printf("input2:%c\n", text);
    return 0;
}