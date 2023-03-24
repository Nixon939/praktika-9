#include <string.h>
#include <stdio.h>
#include <string.h>
void remove_chars(char *str, int k, int n) {
    // Получить длину строки
    int len = strlen(str);

    // Если k больше или равно длине строки, ничего не делать
    if (k >= len) {
        return;
    }

    // Ограничить n, чтобы не удалять больше, чем осталось символов
    n = (n > len - k) ? len - k : n;

    // Сдвинуть оставшуюся часть строки на n позиций влево
    memmove(str + k, str + k + n, len - k - n + 1);
}
