/* echo_eof.c -- 重复输入，直至文件结束*/
#include <stdio.h>
int main(void)
{
    int ch;
    while((ch=getchar())!=EOF)
        putchar(ch);
    return 0;
}
