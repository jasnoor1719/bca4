#include <stdio.h>

int main() {
	printf("harmanjot singh\n");
	printf("2410997135\n");
    int customerAreaCode, customerNumber, calledAreaCode, calledNumber, callTime;
    float cost;

    while (1) {
        printf("Enter customer area code (3 digits) or -1 to exit: ");
        scanf("%d", &customerAreaCode);
        if (customerAreaCode == -1) break;

        printf("Enter customer phone number (7 digits): ");
        scanf("%d", &customerNumber);
        printf("Enter called area code (3 digits): ");
        scanf("%d", &calledAreaCode);
        printf("Enter called number (7 digits): ");
        scanf("%d", &calledNumber);
        printf("Enter call time in minutes (4 digits): ");
        scanf("%d", &callTime);

        if (callTime > 20 && customerAreaCode != calledAreaCode) {
            cost = callTime * 0.10;  // 10 cents per minute
        } else {
            cost = callTime * 0.13;  // 13 cents per minute
        }

        if (cost > 0.10) {
 printf("Calling number: %03d-%07d\n", customerAreaCode, customerNumber);
            
printf("Called number: %03d-%07d\n", calledAreaCode, calledNumber);
            printf("Cost of the call: $%.2f\n", cost);
        }
    }

    return 0;
}

