#include "functions.h"

int my_strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void my_memmove(char* dest, const char* src, int n) {
    if (dest == src) return;
    if (dest < src) {
        // Копирование по направлению от начала
        for (int i = 0; i < n; ++i) {
            dest[i] = src[i];
        }
    }
    else {
        // Копирование по направлению от конца
        for (int i = n - 1; i >= 0; --i) {
            dest[i] = src[i];
        }
    }
}

void remove_chars(char* str, int pos, int n) {
    int len = my_strlen(str);
    if (pos + n > len) {
        return;
    }
    my_memmove(str + pos, str + pos + n, len - pos - n + 1);
}

void remove_consecutive_duplicates(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        int j = i;
        while (str[j] == str[i]) {
            j++;
        }
        if (j - i > 1) {
            remove_chars(str, i + 1, j - i - 1);
        }
        else {
            i++;
        }
    }
}
