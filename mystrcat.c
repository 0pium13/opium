#include <stdio.h>

void mystrcat(char *p, char *t) {
    while (*p) p++;
    while (*t) *p++ = *t++;
    *p = '\0';
}

int main() {
    char str1[20] = "computer";
    char str2[] = "science";

    mystrcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}





//new

#include <stdio.h>

int mystrcmp(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) return (*str1 - *str2);
        str1++; str2++;
    }
    return (*str1 - *str2);
}

int main() {

    char str1[20] = "programming";
    char str2[50] = "programming";

    if (mystrcmp(str1, str2) == 0) {
        for (int i = 0; i < 12; i++) str2[i] = str1[i];
    }

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}//