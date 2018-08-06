#include <stdio.h>
#include <stdlib.h>

void mdi(int b, int a, int c, int i)
{
    if(i > c)
        return;
    if(a < b * i && b * i <  c)
    {
        printf("%d", b * i);
        
        mdi(b, a, c, i + 1);
    }
    else
        mdi(b, a, c, i + 1);
        
    
}

int main()
{
    int b, a, c;
    
    scanf("%d%d%d", &b, &a, &c);
    
    mdi(b, a, c, 1);
    
    return 0;
}
