#include <stdio.h>

int main() {
    int num, temp;
    char binary[32];
    int index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    temp = num;

    if (temp == 0) {
        printf("Binary: 0");
        return 0;
    }

    while (temp > 0) {
        binary[index++] = (temp % 2) + '0';
        temp /= 2;
    }

    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", binary[i]);
    }

    return 0;
}
