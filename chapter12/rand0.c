#include <stdio.h>
static unsigned long int next = 1;
unsigned int rand0(void)
{
    printf("current next value:%u\n",next);
    next = next * 1103515245 + 12345;
    return (unsigned int ) (next /65536)%32768;
}
