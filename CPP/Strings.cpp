#include <cstdio>

int main() {
    /* Without const qualifier compiler throws the error
    warning: ISO C++ forbids converting a string constant to ‘char*’ 
    */ 
    const char * cstring = "String";

    puts(cstring);

    for (int i = 0; cstring[i]; i++){
        printf("%d:%c\n", i, cstring[i]);
    }

    return 0;
}