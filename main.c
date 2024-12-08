#include <stdio.h>

void echo() {
    char buf[4];
    gets(buf);
    puts(buf);
}

int main(void) {
    printf("type: ");
    echo();
    return 0;
}
