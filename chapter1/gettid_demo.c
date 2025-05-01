#define _GNU_SOURCE
                    /* This is a macro that activates GNU source code in the
                      subsequently included header files. gettid() is not
                      required by SUSv3; it is a GNU extension.             */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    printf("I am a thread with thread-id %d\n", gettid());
}
