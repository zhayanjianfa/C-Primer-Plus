#include <stdio.h>
int main(void)
{
    //_Bool 类型只能是1或0，如果赋非0值，则结果是1
    //且c语言里没有true or false
    _Bool a = 3;
    
    printf("_Bool value:%d ,sizeof(_Bool):%d\n",a,sizeof(a));

    return 0;
}
