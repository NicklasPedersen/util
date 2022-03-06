// these functions are suffixed with "_u" to avoid name collisions

int is_ws_u(char c);
int is_alpha_u(char c);
int is_num_u(char c);
int is_alnum_u(char c);
int is_hexnum_u(char c);
int get_hexnum_u(char c);
int is_id_start_u(char c);
int is_valid_id_u(char c);
char *cpy_str_u(char *start, char *end);
char *load_file(char *fname);
