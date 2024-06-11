#include <stdio.h>
#include <stdlib.h>

/**
 * === Sigma Drawing === 
 *
 * Print this drawing:
 *    
 *    xxxxxxxxxx
 *     x
 *      x
 *       x
 *        x
 *         x
 *        x
 *       x
 *      x
 *     x
 *    xxxxxxxxxx
 * 
 *    
 * Base width: 10
 * Tip width: 5
 * Total height: 11
 * 
 */

    /*Choose to program project to work with any numbers in specifications below.
    Base must be 2x Tip.
    Tip must be 1/2 Base.
    Height must be Base + 1
    */

int main()
{
    //Initializing variables for size of drawing.
    int base = 10, tip = 5, height = 11;

    //Loop to print each line using Height
    for (int i = 0; i < height; i++)
    {
        //Drawing of Base. Both top and bottom of sigma.
        if (i == 0 || i == height - 1)
        {
            for (int j = 0; j < base; j++)
            {
                printf ("x");
            }
            printf("\n");
        }

        //Drawing of Tip
            //Drawing of Tip ascending including peak.
        if (i > 0 && i < (height - 1))
        {
            if (i <= tip)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf(" ");
                }
                printf("x\n");
            }
            //Drawing of Tip descending after peak.
            if (i > tip)
            {
                for (int j = (height - 2); j >= i; j--)
                {
                    printf(" ");
                } 
                printf("x\n");
            }
        }
    }
    return EXIT_SUCCESS;
}