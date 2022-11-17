#include <stdio.h>

int main() {
    float phi, volum, diameter, jari;
    diameter=15;
    phi=3.14;
    jari=diameter/2;
    
    printf("jari	 	:%f\n",jari);
    printf("diameter 	:%f\n",diameter);
    volum=(4.0/3)*phi*jari*jari*jari;
    printf("Volume Bola 	:%2f\n",volum);
    

    return 0;
}

