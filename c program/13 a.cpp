#include <stdio.h>
#include <string.h>

int main(){

printf("jasnoor\n");
printf("2410997165\n"); 
    char str[] = "Find the longest word in the string";
    char *word = strtok(str, " ");
    int max_len = 0;

    while (word != NULL) {
        int len = strlen(word);
        if (len > max_len) max_len = len;
        word = strtok(NULL, " ");
    }

    printf("Longest word length: %d\n", max_len);
    return 0;
}

