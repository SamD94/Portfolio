#include <stdio.h>

int main() {
    printf("Hello World\n");
    char name[255];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    return 0;
}