#include <stdio.h>
#include <limits.h>

#define PRINT(NAME, FORMAT, BYTES, MAX_SIGNED, MIN_SIGNED, UNSIGNED_FORMAT) printf("%-15s | %-15s | %-15zu | %-15d | %-15d | %-15s\n", NAME, FORMAT, BYTES, MAX_SIGNED, MIN_SIGNED, UNSIGNED_FORMAT);

int main() {
    PRINT("int", "%%d", sizeof(int), INT_MAX, INT_MIN, "%%u")
    PRINT("short", "%%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%%hd")
    PRINT("long", "%%ld", sizeof(long), LONG_MAX, LONG_MIN, "%%lu")
    PRINT("long long", "%%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%%llu")
    return 0;
}