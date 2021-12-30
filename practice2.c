#include <stdio.h>


int main()

{
    int cookies = 45;
    int children = 7;
    int cookies_perchild = 0;
    int cookies_leftover = 0;
    cookies_perchild = cookies/children;
    printf("you have %d childrens and %d cookies",children,cookies);
    printf("\ngive each child %d cookies",cookies_perchild);
    cookies_leftover = cookies%children;
    
    printf("\nthere are %d cookies left over.\n",cookies_leftover);
    return 0;
}
