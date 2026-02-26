#include <stdio.h>
#include <string.h>

void find_replace(char *str, const char *old_word, const char *new_word) {
    char temp[1024];  // Temporary string to store result
    char *pos;
    int index = 0;
    int old_word_len = strlen(old_word);
    
    while ((pos = strstr(str, old_word)) != NULL) {
        // Copy part before old word
        while (str < pos) {
            temp[index++] = *str++;
        }
        // Copy new word
        for (int i = 0; new_word[i] != '\0'; i++) {
            temp[index++] = new_word[i];
        }
        str = pos + old_word_len;  // Move past the old word
    }
    
    // Copy remaining part of the string
    while (*str != '\0') {
        temp[index++] = *str++;
    }
    
    temp[index] = '\0';  // Null terminate the result
    strcpy(str, temp);  // Copy result back to the original string
}

int main() {

printf("jasnoor\n");
printf("2410997165\n");

    char str[1024] = "Hello world, welcome to the world of C!";
    char old_word[] = "world";
    char new_word[] = "universe";

    find_replace(str, old_word, new_word);
    printf("Updated text: %s\n", str);

    return 0;
}

