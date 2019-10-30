#include <unistd.h>

int __attribute__((weak)) execvp(const char *file, char *const argv[])
{
        return 0;
}
