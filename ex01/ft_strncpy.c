#include <stdio.h>
#include <unistd.h>


char *ft_strncpy(char *dest, char *src, unsigned int n) {

    unsigned int i;
    i = 0;

    // first copy amount of char specified by n or untill we can't no more.
    while(i <= n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    // fill in rest of dest with '\0' if we wen't out of bounds.
    while(i < n) {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}


int main(void) {
    char dest[100];
    char *src;
    unsigned int n;

    n = 40;
    src = "hello world";

    ft_strncpy(dest, src, n);
    printf("%s", dest);
}