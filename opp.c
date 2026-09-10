#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h> // Required for usleep (Linux/macOS)

int main() {
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];

    // Clear the terminal screen
    printf("\x1b[2J");

    for (;;) {
        memset(b, 32, 1760); // Fill screen buffer with spaces
        memset(z, 0, 7040); // Reset Z-buffer

        // Render the Torus surface
        for (j = 0; j < 6.28; j += 0.07) {
            for (i = 0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2; // Distance from center
                float D = 1 / (c * h * e + f * g + 5); // 1/z (depth)
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;

                // 3D Projection onto 2D screen coordinates (80x22 grid)
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;

                // Calculate lighting index (Luminance)
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                // If coordinate is inside screen boundaries & closer than previous point
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    // Map luminance value to ASCII character gradient
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }

        // Move cursor to top-left corner and print frame
        printf("\x1b[H");
        for (k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
        }

        // Increment rotation angles
        A += 0.04;
        B += 0.02;
        
        usleep(30000); // Pause for frame rate (~30fps)
    }

    return 0;
}