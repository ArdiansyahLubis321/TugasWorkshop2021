/* 
 * Ubah suhu selsius ke farenheit
 */

#include <stdio.h>

void main() {
    // Variable untuk tampung masukan user
    float selsius = 0.0;
    
    // Minta suhu selsius yang akan dikonversi
    printf("Selsius: ");
    scanf("%f", &selsius); // Perhatikan & -> alamat variable
    
    // Lakukan proses konversi
    float farenheit = selsius * 9 /5 + 32;
    
    // Tampilkan hasil
    printf("Farenheit: %6.2f\n", farenheit);
}