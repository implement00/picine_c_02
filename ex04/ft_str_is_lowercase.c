#include <stdio.h>
#include <unistd.h>


int ft_str_is_lowercase(char *str) {
    int i;
    int ascii;

    if (str == NULL || str[0] == '\0') {
        return (1);
    }

    i = 0;
    while(str[i]) {
        ascii = str[i];
        if(!(ascii >= 97 && ascii <= 122)) {
            return (0);
        }
        i++;
    }

    return (1);
}

int main(void) {
    char *str;
    str = "";
    int i;
    i = 0;
    i = ft_str_is_lowercase(str);
    printf("Result from function call: %d", i);
}