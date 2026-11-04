#ifndef SAFEINT_
#define SAFEINT_

struct SafeResult {   
    int value;
    int errorflag;
};

struct SafeResult safeadd(int a, int b);
struct SafeResult safesubtract(int a, int b);
struct SafeResult safemultiply(int a, int b);
struct SafeResult safedivide(int a, int b);

struct SafeResult safestrtoint(char str[]);


#endif