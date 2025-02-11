#ifndef TRANSFORMATION_
#define TRANSFORMATION_

struct transformation {
    long result;
    char error[100];
};

struct transformation to_number(char string[]);

#endif