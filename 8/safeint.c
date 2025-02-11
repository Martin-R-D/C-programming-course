#include<stdio.h>
#include<limits.h>
#include<string.h>
#include"safeint.h"

struct SafeResult safeadd(int a, int b) {
    struct SafeResult result;
    long long x = a;
    long long y = b;
    if(x + y > INT_MAX || x + y < INT_MIN) {
        result.errorflag = 1;
        return result;
    }
    result.value = a + b;
    result.errorflag = 0;
    return result;
}

struct SafeResult safesubtract(int a, int b) {
    struct SafeResult result;
    long long x = a;
    long long y = b;
    if(x - y > INT_MAX || x - y < INT_MIN) {
        result.errorflag = 1;
        return result;
    }
    result.value = a - b;
    result.errorflag = 0;
    return result;
}

struct SafeResult safemultiply(int a, int b) {
    struct SafeResult result;
    long long x = a;
    long long y = b;
    if(x * y > INT_MAX || x * y < INT_MIN) {
        result.errorflag = 1;
        return result;
    }
    result.value = a * b;
    result.errorflag = 0;
    return result;
}

struct SafeResult safedivide(int a, int b) {
    long long x = a;
    long long y = b;
    struct SafeResult result;
    if(y == 0) {
        result.errorflag = 1;
        return result;
    }
    if(x / y > INT_MAX || x / y < INT_MIN) {
        result.errorflag = 1;
        return result;
    }
    result.value = a / b;
    result.errorflag = 0;
    return result;
}

struct SafeResult safestrtoint(char str[]) {
    struct SafeResult result;
    result.value = 0;
    result.errorflag = 0;
    int minus = 0;
    int index = 0;
    if(str[0] == '-') {
        minus = 1;
        index++;
    } else if(str[0] == '+') {
        index++;
    }

    for(int i = index; i < strlen(str); i++) {
        struct SafeResult num;
        num = safemultiply(result.value, 10);
        if(num.errorflag == 0) {
            result.value = num.value;
            num = safeadd(result.value, str[i] - '0');
            if(num.errorflag == 0) {
                result.value = num.value;
            } else {
                result.errorflag = 1;
                return result;
            }
        } else {
            result.errorflag = 1;
            return result;
        }
    }

    if(minus) {
        result.value = -result.value;
    }
    return result;
    
} 