#include <stdio.h>
#include <unistd.h>  // For sleep(); use <windows.h> Sleep(100) on Windows

int main() {
    int i = 0;
    while (i < 50) {
        printf("\r|/-\\"[i%4]);
        fflush(stdout);
        usleep(100000);  // 0.1 sec
        i++;
    }
    printf("\rDone!\n");
    return 0;
}
