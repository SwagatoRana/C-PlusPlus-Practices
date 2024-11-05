#include<stdio.h>
int main(){
    // FILE* ptr = fopen("file.txt","w");
    // char c = fgetc(ptr);
    // fputs("My name is Swagato Rana",ptr);
    char arr[50];
    FILE* ptr1 = fopen("file.txt","r");
    fgets(arr,24,ptr1);
    printf("%s",arr);
    return 0;
}