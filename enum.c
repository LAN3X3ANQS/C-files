#include <stdio.h>
enum Size {
    Small = 27,
    Medium = 31,
    Large = 35,
    ExtraLarge = 40
};

int main() {

    enum Size shoeSize1 = Small;
    enum Size shoeSize2 = Medium;
    enum Size shoeSize3 = Large;
    enum Size shoeSize4 = ExtraLarge; 
    
    printf("%d\n", shoeSize1);
    printf("%d\n", shoeSize2);
    printf("%d\n", shoeSize3);
    printf("% d", shoeSize4);

    return 0;
}