#include<stdio.h>
#include<string.h>
int main(){ 
    char str[]="Hello World";
    printf("The original text is %s\n",str);
    printf("Performing AND operation: \n");
    for(int i=0;i<strlen(str);i++){
        str[i]=str[i]& 127;
        printf("%c",str[i]);
    }
    printf("Performing OR operation:\n");
    for(int i=0;i<strlen(str);i++){
        str[i]=str[i]|127;
        printf("%c",str[i]);
    }
    printf("Performing XOR operation:\n");
    for(int i=0;i<strlen(str);i++){
        str[i]=str[i]^127;
        printf("%c",str[i]);
    }
    return 0;
}