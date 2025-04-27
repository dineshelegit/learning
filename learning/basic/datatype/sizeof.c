#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() 
{
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -32;
    signed short ss = -32;
    unsigned short us = 650;

    int i = -2000;
    signed int si = -2000;
    unsigned int ui = 400000U;

    long l = -1000L;
    signed long sl = -1000L;
    unsigned long ul = 200000UL;

    long long ll = -900000000LL;
    signed long long sll = -900000000LL;
    unsigned long long ull = 180000000000ULL;

    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    printf("char: %zu bytes, range: %d to %d\n", sizeof(c), SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: %zu bytes, range: 0 to %u\n", sizeof(uc), UCHAR_MAX);

    printf("short/signed short: %zu bytes, range: %d to %d\n", sizeof(s), SHRT_MIN, SHRT_MAX);
    printf("unsigned short: %zu bytes, range: 0 to %u\n", sizeof(us), USHRT_MAX);

    printf("int/signed int: %zu bytes, range: %d to %d\n", sizeof(i), INT_MIN, INT_MAX);
    printf("unsigned int: %zu bytes, range: 0 to %u\n", sizeof(ui), UINT_MAX);

    printf("long/signed long: %zu bytes, range: %ld to %ld\n", sizeof(l), LONG_MIN, LONG_MAX);
    printf("unsigned long: %zu bytes, range: 0 to %lu\n", sizeof(ul), ULONG_MAX);

    printf("long long/signed long long: %zu bytes, range: %lld to %lld\n", sizeof(ll), LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: %zu bytes, range: 0 to %llu\n", sizeof(ull), ULLONG_MAX);

    printf("float: %zu bytes, range: %.10e to %.10e\n", sizeof(f), FLT_MIN, FLT_MAX);
    printf("double: %zu bytes, range: %.10e to %.10e\n", sizeof(d), DBL_MIN, DBL_MAX);
    printf("long double: %zu bytes, range: %.10Le to %.10Le\n", sizeof(ld), LDBL_MIN, LDBL_MAX);

    return 0;
}

