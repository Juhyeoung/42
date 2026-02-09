#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int m,s, m1,s1;

    scanf("%d %d %d %d", &m,&s, &m1,&s1);

    if (s + s1 > 60)
        {
            m1+=1;
            s1 -= 60;
        }
    printf("%d %d", m+m1, s+s1);
    return 0;
}