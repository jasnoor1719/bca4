#include <stdio.h>
#include <string.h>

int main(){

printf("jasnoor kaur\n");
printf("2410997165\n");

 {
    char str[100];
    int len, i;

    printf("Enter a string: ");
    gets(str);  // Get user input

    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}}

