#include<stdio.h>


union IntBytes {
    int num;
    unsigned char bytes[4];
};

int main() {
    union IntBytes val;
    val.num = 305419896;  // 0x12345678 in hex

    printf("Number: %d\n", val.num);
    printf("Bytes: %02X %02X %02X %02X\n",
           val.bytes[0], val.bytes[1], val.bytes[2], val.bytes[3]);

    return 0;
    
}