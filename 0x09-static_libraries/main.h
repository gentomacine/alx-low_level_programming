#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * print_alphabet - prints alphabet and returns new line
 * print_alphabet_x10 - print alphabet 10 times
 * _islower - return 1 if c is lowercase, 0 otherwise
 * _isalpha - return 1 if c is upper or lowercase, 0 otherwise
 * print_sign - return 1 for positive, 0 for 0, and -1 for negative
 * _abs - computes absolute value of integer
 * print_last_digit - print last digit
 * add - add two ints, return sum
 * jack_bauer - prints all minutes of the day
 * times_table - prints times table up to 9
 * print_to_98 - prints all natural numbers to 98
 * print_times_table - print times table up to
 * _isupper - checks if char is capital letter
 * _isdigit - checks if int is a digit 0-9
 * mul - multiply two numbers
 * print_void - print numbers 0-9
 * print_most_numbers - print 0-9 w/out 2 and 4
 * more_numbers - print 0-14 ten times
 * print int using only putchar
 * print a line of n length
 * print a diagonal line of n length
 * print a square of n size
 * print a triangle of n size
 * reset_to_98 - takes pointer int and update the value to 98
 *
 *
 **/
int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int);
int _isalpha(int);
int print_sign(int);
int _abs(int);
int print_last_digit(int);
int add(int, int);
void jack_bauer(void);
void times_table(void);
void print_to_98(int);
void print_times_table(int);
int _isupper(int);
int _isdigit(int);
int mul(int, int);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_number(int);
void print_line(int);
void print_diagonal(int);
void print_square(int);
void print_triangle(int);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);