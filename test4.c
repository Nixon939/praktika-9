#include <stdio.h>
#include <string.h>
#include <conio.h>
size_t ustrlen(const char *);
int main() {
    char str[] = "Hello, my name is Ivan";
    size_t size_str = strlen(str);
    printf("std_size = %u\n", size_str);
    size_str = ustrlen(str);
    printf("usr_size = %u\n", size_str);
    _getch();
    return 0;
}
size_t ustrlen(const char * p) {
    size_t size = 0;
    while (p[size++] != 0) { }
    return --size;
}
