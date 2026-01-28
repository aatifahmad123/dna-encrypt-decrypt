#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    printf("Enter your name : ");
    char str[100];
    fgets(str, sizeof(str), stdin);
    int l = strlen(str);
    
    // Convert to uppercase
    for(int i = 0; i < l; i++) {
        str[i] = toupper(str[i]);
    }
    
    printf("Your name is : %s", str);
    
    // Binary lookup table for A-Z and space
    int binary[27][8] = {
        {0,1,0,0,0,0,0,1}, // A
        {0,1,0,0,0,0,1,0}, // B
        {0,1,0,0,0,0,1,1}, // C
        {0,1,0,0,0,1,0,0}, // D
        {0,1,0,0,0,1,0,1}, // E
        {0,1,0,0,0,1,1,0}, // F
        {0,1,0,0,0,1,1,1}, // G
        {0,1,0,0,1,0,0,0}, // H
        {0,1,0,0,1,0,0,1}, // I
        {0,1,0,0,1,0,1,0}, // J
        {0,1,0,0,1,0,1,1}, // K
        {0,1,0,0,1,1,0,0}, // L
        {0,1,0,0,1,1,0,1}, // M
        {0,1,0,0,1,1,1,0}, // N
        {0,1,0,0,1,1,1,1}, // O
        {0,1,0,1,0,0,0,0}, // P
        {0,1,0,1,0,0,0,1}, // Q
        {0,1,0,1,0,0,1,0}, // R
        {0,1,0,1,0,0,1,1}, // S
        {0,1,0,1,0,1,0,0}, // T
        {0,1,0,1,0,1,0,1}, // U
        {0,1,0,1,0,1,1,0}, // V
        {0,1,0,1,0,1,1,1}, // W
        {0,1,0,1,1,0,0,0}, // X
        {0,1,0,1,1,0,0,1}, // Y
        {0,1,0,1,1,0,1,0}, // Z
        {0,0,1,0,0,0,0,0}  // Space
    };
    
    // Print binary code
    printf("The binary code for your name is : ");
    for(int i = 0; i < l; i++) {
        int index;
        if(str[i] >= 'A' && str[i] <= 'Z') {
            index = str[i] - 'A';
        } else if(str[i] == ' ') {
            index = 26;
        } else {
            continue; // Skip non-alphabetic characters
        }
        
        for(int j = 0; j < 8; j++) {
            printf("%d", binary[index][j]);
        }
    }
    printf("\n");
    
    // Print DNA sequence
    printf("The DNA sequence for your name will be : ");
    for(int i = 0; i < 27; i++) {
        for(int k = 0; k < 7; k += 2) {
            if((binary[i][k] == 0) && (binary[i][k+1] == 0)) {
                printf("T");
            } else if((binary[i][k] == 1) && (binary[i][k+1] == 1)) {
                printf("A");
            } else if((binary[i][k] == 0) && (binary[i][k+1] == 1)) {
                printf("C");
            } else if((binary[i][k] == 1) && (binary[i][k+1] == 0)) {
                printf("G");
            }
        }
    }
    printf("\n");
    
    return 0;
}