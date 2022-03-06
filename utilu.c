#include "utilu.h"
#include <malloc.h>

// is it ws character space, tab, newline, or carriage-return
int is_ws_u(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

// is it an alphabetic character? (a-zA-Z)
int is_alpha_u(char c) {
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

// is it a numeric character? (0-9)
int is_num_u(char c) {
    return '0' <= c && c <= '9';
}

// is it a hexedecimal character? (0-9a-fA-F)
int is_hexnum_u(char c) {
    return is_num_u(c) || ('a' <= c && c <= 'f') || ('A' <= c && c <= 'F');
}

// get an integer from a hexedecimal character? (0-9) -> (0-9), (a-f or A-F) -> (10-15)
int get_hexnum_u(char c) {
    if (is_num_u(c)) {
        return c - '0';
    }
    if ('a' <= c && c <= 'f') {
        return c - 'a' + 10;
    }
    return c - 'A' + 10;
}

// is it an alpha or a num character?
int is_alnum_u(char c) {
    return is_alpha_u(c) || is_num_u(c);
}

// is it a valid start of an identifier? (a-zA-Z_)
int is_id_start_u(char c) {
    return is_alpha_u(c) || c == '_';
}

// is it a valid continuation of an identifier? (0-9a-zA-Z_)
int is_valid_id_u(char c) {
    return is_alnum_u(c) || c == '_';
}

// copy string to another
char *cpy_str_u(char *start, char *end) {
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

#include <stdio.h>
// load entire file from filename
char *load_file(char *fname) {
    char *buffer = 0;
    long length;
    FILE *f = fopen(fname, "r");
    if (!f) {
        printf("err no file \"%s\"", fname);
        return NULL;
    }
    fseek(f, 0, SEEK_END);
    length = ftell(f);
    fseek(f, 0, SEEK_SET);
    buffer = malloc(length + 1);
    if (!buffer) {
        fclose(f);
        return NULL;
    }
    fread(buffer, 1, length, f);
    buffer[length] = '\0';
    fclose(f);
    return buffer;
}
