# util

C utilities that is used in other projects
```c
// is used for determining whether or not the character is a whitespace character
int is_ws_u(char c);
// is used for determining whether or not the character is an alphabetic character
int is_alpha_u(char c);
// is used for determining whether or not the character is a numeric character
int is_num_u(char c);
// is used for determining whether or not the character is an alphanumeric character
int is_alnum_u(char c);
// is used for determining whether or not the character is a valid start-of-identifier character [_a-zA-Z]
int is_id_start_u(char c);
// is used for determining whether or not the character is a valid identifier character [_a-zA-Z0-9]
int is_valid_id_u(char c);
// allocates (end - start + 1) bytes and copies the source string into the buffer and zero terminates it
char *cpy_str_u(char *start, char *end);
```
