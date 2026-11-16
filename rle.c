#include <stdio.h>

void rle(const char *s) {
    printf("%s -> ", s);
    for (int i = 0; s[i]; ) {
        int j = i + 1;
        while (s[j] && s[j] == s[i]) j++;
        printf("%d%c", j - i, s[i]);
        i = j;
    }
    putchar('\n');
}

int main(void) {
    rle("AAAAAAAAAAAA");
    rle("ABCDEFGH");
    rle("ABABABAB");
    rle("ABABAAAA");
    return 0;
}