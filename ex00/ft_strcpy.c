#include <stdio.h>
#include <unistd.h>


char *ft_strcpy(char *dest, char *src) {

    int i;
    i = 0;
    while(src[i]) {
        dest[i] = src[i];
        i++;
    }
    
    dest[i] = '\0'; // Add the null terminator
    return (dest);
}


int main(void) {
    char dest[100];
    char *src;

    src = "hello world try me today good sir";
    ft_strcpy(dest, src);
    printf("%s", dest);
}