#include <stdio.h>
#include <unistd.h>


char ft_str_is_printable(char *str) {
    int i;
    int ascii;

    if(str == NULL || str[0] == '\0') {
        return (1);
    }

    i = 0;
    while(str[i]) {
        ascii = str[i];
        if (!(ascii >= 32 && ascii <= 126)) {
            return (0);
        }
        i++;
    }

    return (1);
}

int main(void) {
    char *str;
    int i;

    str = "assad ✨";
    i = 0;
    i = ft_str_is_printable(str);
    printf("Returned decimal value: %d", i);
}