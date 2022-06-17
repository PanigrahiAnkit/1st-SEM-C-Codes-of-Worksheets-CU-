#include <stdio.h>

int main()
{
    int a = 0;
    a = (5 > 2) ?: 8;
    printf("%d", a);
}
/*{
label:
    printf("we are inside label\n");
    goto end;
    printf("Hello world");
    goto label;
end:
    printf("WE ARE AT THE END OF THE PROGRAM");
    return 0;
}*/