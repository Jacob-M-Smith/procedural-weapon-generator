#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "weapon-gen.h"

int main(int argc, char** argv)
{
    if (argc < 2)
        return -1;

    int part_num = 0;
    for (int i = 0; i < 10; i++)
    {
        part_num = rpng(atoi(argv[1]), i);
        printf("Part %d is %d\n", i, part_num);
    }

    return 1;
}


/*random part number generator
 - This function takes a loot class and generates a number 
   for a weapon part
 - At the moment this function is time dependent and will 
   return similar numbers if run in quick succession
*/
int rpng(int loot_class, int seed)
{
    if (loot_class > 9)
        return -1;
    srand((unsigned int)time(NULL) * seed * 1000);
    return (rand() % (9 - loot_class + 1)) + loot_class;
}
