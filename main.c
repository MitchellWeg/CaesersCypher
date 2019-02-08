#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char arr[], int rotation);
void decrypt(char arr[], int rotation);

// First argument should is the string to encrypt,
// Second argument is the rotation number.
int main(int argc, char* argv[])
{
    encrypt(argv[1], atoi(argv[2]));
    return 0;
}

// Encrypts a string.
void encrypt(char arr[], int rotation)
{
    size_t size = strlen(arr);

    for (size_t i = 0; i < size; i++) {
       int ascii = (int)arr[i] + rotation;

       printf("%c", ascii);
    }
}


// Decrypts a string.
void decrypt(char arr[], int rotation)
{
    size_t size = strlen(arr);

    for (size_t i = 0; i < size; i++) {
       int ascii = (int)arr[i] + rotation;

       printf("%c", ascii);
    }
}
