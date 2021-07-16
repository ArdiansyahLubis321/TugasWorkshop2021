/* 
 * Memasukkan matriks
 */

#include <stdio.h>

void main() {
    // Variable untuk tampung masukan user
    float matriks[2][2] = { {0.0, 0.0}, {0.0, 0.0} };
    
    // Minta Elemen-elemen dari matriks
    printf("[1, 1]: ");
    scanf("%f", &matriks[0][0]);
    printf("[1, 2]: ");
    scanf("%f", &matriks[0][1]);
    printf("[2, 1]: ");
    scanf("%f", &matriks[1][0]);
    printf("[2, 2]: ");
    scanf("%f", &matriks[1][1]);
    
    // Tampilkan hasil
    printf("%7.4f %7.4f\n", matriks[0][0], matriks[0][1]);
    printf("%7.4f %7.4f\n", matriks[1][0], matriks[1][1]);
}