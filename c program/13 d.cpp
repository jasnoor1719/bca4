#include <stdio.h>
#include <string.h>

int main() {
	printf("jasnoor kaur\n");
	printf("2410997165\n");
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
        if (result < 0) {
            printf("First string comes first lexicographically\n");
        } else {
            printf("Second string comes first lexicographically\n");
        }
    }
    return 0;
}

