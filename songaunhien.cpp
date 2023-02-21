#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// int random(int minN, int maxN)
// {
//     return minN + rand() % (maxN + 1 - minN);
// }

int main()
{
    // Cach 1
    // int r;
    // srand((int)time(0)); // De moi lam chay code se co so moi
    // for (int i = 0; i < 5; ++i)
    // {
    //     r = rand();
    //     printf("Rand %d is %d\n", i, r);
    // }

    // Cach 2 - g?i ham
    int r2;
    srand((int)time(0)); // De moi lam chay code se co so moi
    for (int i = 0; i < 10; ++i)
    {
        // r2 = random(1, 10);
        r2 = 1 + rand() % (10 + 1 - 5);
        printf("%d ", r2);
    }

    return 0;
}
