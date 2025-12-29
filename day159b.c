#include <stdio.h>

#define FEATURE_CHAT   (1 << 0)   // 0001
#define FEATURE_VIDEO  (1 << 1)   // 0010
#define FEATURE_AUDIO  (1 << 2)   // 0100

int main(void) {
    unsigned int enabled = 0;

    enabled |= FEATURE_CHAT;      // turn on chat
    enabled |= FEATURE_AUDIO;     // turn on audio

    printf("Enabled mask = %u\n", enabled);

    if (enabled & FEATURE_CHAT) {     // bitwise AND
        printf("Chat feature is ON\n");
    }
    if (!(enabled & FEATURE_VIDEO)) { // logical ! with bitwise &
        printf("Video feature is OFF\n");
    }

    enabled ^= FEATURE_AUDIO;        // toggle audio (bitwise XOR)
    printf("After toggling audio, mask = %u\n", enabled);

    return 0;
}
