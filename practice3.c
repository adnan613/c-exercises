#include <stdio.h>

int main()
{
    float plank_length = 10.0;
    float piece_count = 4.0;
    float piece_length = 0.0;
    piece_length = plank_length/piece_count;


    printf("A plank %f long can be cut into %f pieces of %f size\n",plank_length,piece_count,piece_length);
    return 0;
}