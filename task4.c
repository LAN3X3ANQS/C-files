#include <stdio.h>
enum weekdays {
    Sunday,
    Monday,
    Tuesday,
    Wednasday,
    Thursday,
    Friday,
    Saturday
}weekend1, weekend2;
int main() {

    weekend1 = Sunday;
    weekend2 = Saturday;

    printf("%d\n", weekend1);
    printf("%d", weekend2);

    return 0;
}