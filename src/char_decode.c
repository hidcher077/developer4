#include <stdio.h>


void encodeMessage(char* message) {
    int i = 0;
    while (message[i] != '\0') {
        printf("%d ", message[i]);
        i++;
    }
}


void decodeMessage(int* encodedMessage, int length) {
    for (int i = 0; i < length; i++) {
        printf("%c", encodedMessage[i]);
    }
}

int main() {
    char message[] = "Hello, world!";
    int encodedMessage[100];
  
   
    printf("Encoded message: ");
    encodeMessage(message);
  
    
    printf("\nDecoded message: ");
    decodeMessage(encodedMessage, 72);

    return 0;
}
