// sizeof v1.0.2
// by Max Yuen
// Prints the size of different data types
// (apparently this may be different when compiled on different systens
// or when using different compilers)

#include <stdio.h>

struct test {
    char*c0;
    char*c1;
    char*c2;
    char*c3;
    char*c4;
    char*c5;
    char*c6;
    char*c7;
    char*c8;
    char*c9;
};

int main(void) {
    printf("\nsizeof\nv1.0.2\n\n");
    
    printf("int: %u B = %ubit\n\n",sizeof(int),sizeof(int)*8);

    printf("char: %u B = %ubit\n",sizeof(char),sizeof(char)*8);
    printf("short: %u B = %ubit\n",sizeof(short),sizeof(short)*8);
    printf("long: %u B = %ubit\n",sizeof(long),sizeof(long)*8);
    printf("long long: %u B = %ubit\n\n",sizeof(long long),sizeof(long long)*8);
    
    printf("float: %u B = %ubit\n",sizeof(float),sizeof(float)*8);
    printf("double: %u B = %ubit\n",sizeof(double),sizeof(double)*8);
    printf("long double: %u B = %ubit\n\n",sizeof(long double),sizeof(long double)*8);

    printf("pointer: %u B = %ubit\n\n",sizeof(int*),sizeof(int*)*8);
    return 0;
}