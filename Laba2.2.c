#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int n = 1;
    double x;
    double Suma = 0;
    double dodanok;

    for (x = 0; x <= 0.5; x += 0.05)
    {
        Suma = 0;
        do
        {
            dodanok = pow(-1, n + 1) * (pow(x, n) / n);
            Suma = Suma + dodanok;
            n++;
        } while (fabs(dodanok) > 0.001);
        n = 1;
        printf("x = %lf  Suma = %lf\n", x, Suma);
    }
}