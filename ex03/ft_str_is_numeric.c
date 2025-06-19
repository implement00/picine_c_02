#include <stdio.h>
#include <unistd.h>


int ft_str_is_numeric(char *str) {
    int i;
    int ascii;

    if(str == NULL || str[0] == '\0') {
        return (1);
    }

    i = 0;
    while(str[i]) {

        ascii = str[i];
        if(!(ascii >= 48 && ascii <= 57)) {
            return (0);
        }
        i++;
    }

    return (1);
}


int main(void) {
    char *str;
    int i;

    str = "09";
    i = 0;
    i = ft_str_is_numeric(str);
    printf("Return type decimal %d", i);
}