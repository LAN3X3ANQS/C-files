#include <stdio.h>
int main() {
/*
multidimensional array syntax
int arr[2][3];
*/
    int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };

    for(int i = 0; i < 2; ++i) {

        for (int j = 0; i < 3; ++j) {
          printf("%d", arr[i][j]);  
        }
        printf("\n");
    }
     return 0;
}