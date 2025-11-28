
#include <stdio.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    enum Month month;

    for (month = JAN; month <= DEC; month++) {
        printf("Month %d has %d days\n", month + 1, days[month]);
    }
    return 0;
}
