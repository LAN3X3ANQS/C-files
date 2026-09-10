#include <stdio.h>
int main() {

    unsigned short x = 32767;
    printf("%d", x);
 
    unsigned short y = ++x;
    printf("\n%d", y);

    return 0;
}