# util

C utilities that is used in other projects
```c
// is used for determining whether or not the character is a whitespace character
int is_ws_f(char c);
// is used for determining whether or not the character is an alphabetic character
int is_alpha_f(char c);
// is used for determining whether or not the character is a numeric character
int is_num_f(char c);
// is used for determining whether or not the character is an alphanumeric character
int is_alnum_f(char c);
// is used for determining whether or not the character is a valid start-of-identifier character [_a-zA-Z]
int is_id_start_f(char c);
// is used for determining whether or not the character is a valid identifier character [_a-zA-Z0-9]
int is_valid_id_f(char c);
// allocates (end - start + 1) bytes and copies the source string into the buffer and zero terminates it
char *cpy_str_f(char *start, char *end);
```
