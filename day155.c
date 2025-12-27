#include<stdio.h>

typedef enum {
    VAL_INT,
    VAL_FLOAT
} NumType;

typedef union {
    int i;
    float f;
} NumData;

typedef struct {
    NumType type;
    NumData data;
} Number;

Number make_int(int x) {
    Number n;
    n.type = VAL_INT;
    n.data.i = x;
    return n;
}

Number make_float(float x) {
    Number n;
    n.type = VAL_FLOAT;
    n.data.f = x;
    return n;
}

Number add(Number a, Number b) {
    if (a.type == VAL_FLOAT || b.type == VAL_FLOAT) {
        float af = (a.type == VAL_FLOAT) ? a.data.f : (float)a.data.i;
        float bf = (b.type == VAL_FLOAT) ? b.data.f : (float)b.data.i;
        return make_float(af + bf);
    } else {
        return make_int(a.data.i + b.data.i);
    }
}

void print_number(Number n) {
    if (n.type == VAL_INT) {
        printf("INT: %d\n", n.data.i);
    } else {
        printf("FLOAT: %.2f\n", n.data.f);
    }
}

int main(void) {
    Number a = make_int(10);
    Number b = make_float(2.5f);
    Number c = make_int(7);

    Number r1 = add(a, b);  // int + float -> float
    Number r2 = add(a, c);  // int + int -> int

    print_number(r1);
    print_number(r2);

    return 0;
}