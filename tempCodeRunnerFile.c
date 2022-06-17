#include <stdio.h>
//#include <string.h>
int main()
{
    char arr[]={'A','B','c','d','E','f'};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    return 0;

}