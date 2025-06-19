#include <stdio.h>
#include <unistd.h>


int ft_str_is_alpha(char *str) {
    int i;
    int ascii;

    if (str[0] == '\0' || str == NULL) {
        return (1);
    }

    i = 0;
    while(str[i] && str[i] != '\0') {
        ascii = str[i];
        if (!((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))) {
            return (0);
        }
    }

    return (1);

}


int main(void) {
    char *str;
    int i;

    i = 0;
    str = "";
    i = ft_str_is_alpha(str);
    printf("Return type of func: %d", i);
}