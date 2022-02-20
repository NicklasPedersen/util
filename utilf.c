#include "utilf.h"
#include <malloc.h>

int is_ws_f(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

// is it an alphabetic character? (a-zA-Z)
int is_alpha_f(char c) {
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

// is it a numeric character? (0-9)
int is_num_f(char c) {
    return '0' <= c && c <= '9';
}

// is it an alpha or a num character?
int is_alnum_f(char c) {
    return is_alpha_f(c) || is_num_f(c);
}

// is it a valid start of an identifier? (a-zA-Z_)
int is_id_start_f(char c) {
    return is_alpha_f(c) || c == '_';
}

// is it a valid continuation of an identifier? (0-9a-zA-Z_)
int is_valid_id_f(char c) {
    return is_alnum_f(c) || c == '_';
}

char *cpy_str_f(char *start, char *end) {
    long len = end - start + 1;
    char *c = malloc(len);
    if (!c) {
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        c[i] = start[i];
    }
    c[len] = '\0';
    return c;
}