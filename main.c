#include <stdio.h>

int main(int argc, char** argv)
{
    // NOTE: __builtin_cpu_supports is a method of GCC.
    // Thus, other compilers are not supported.
    // You can install GCC on Windows for example via https://msys2.org

    // returns 0 if not supported.
    int avxSupport = __builtin_cpu_supports("avx");
    int avx2Support = __builtin_cpu_supports("avx2");
    printf("AVX: %d\n", avxSupport);
    printf("AVX2: %d\n", avx2Support);
    return 0;
}
