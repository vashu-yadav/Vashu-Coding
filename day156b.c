#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_STRING
} ValueType;

typedef union {
    int i;
    float f;
    char s[64];
} ValueData;

typedef struct {
    ValueType type;
    ValueData data;
} Value;

void print_value(const Value *v) {
    switch (v->type) {
        case TYPE_INT:
            printf("INT: %d\n", v->data.i);
            break;
        case TYPE_FLOAT:
            printf("FLOAT: %.2f\n", v->data.f);
            break;
        case TYPE_STRING:
            printf("STRING: %s\n", v->data.s);
            break;
        default:
            printf("Unknown type\n");
    }
}

int main(void) {
    Value a, b, c;

    a.type = TYPE_INT;
    a.data.i = 42;

    b.type = TYPE_FLOAT;
    b.data.f = 3.1415f;

    c.type = TYPE_STRING;
    strcpy(c.data.s, "Hello enum+union");

    print_value(&a);
    print_value(&b);
    print_value(&c);

    return 0;
}
