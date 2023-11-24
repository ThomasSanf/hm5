#include <stdio.h>
#include <string.h>

void stringReverse(const char *str, int index);

int main() {
    char myStr[] = "This is a short text!";
    stringReverse(myStr, strlen(myStr) - 1);
    printf("\n");

    return 0;
}

void stringReverse(const char *str, int index) {
    if(index < 0) {
        return;
    } else {
        printf("%c", str[index]);
        stringReverse(str, index - 1);
    }
}
