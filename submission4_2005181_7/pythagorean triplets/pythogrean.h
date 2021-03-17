#ifndef PYTHOGREAN_H_INCLUDED
#define PYTHOGREAN_H_INCLUDED

void pythagoreanTriplets(int L)
{

    int a, b, c = 0;

    int m = 2;

    while (c < L)
    {
           for (int n = 1; n < m; ++n)
           {

            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (c > L)
                break;

            printf("%d %d %d\n", a, b, c);
        }
        m++;
    }
}

#endif // PYTHOGREAN_H_INCLUDED
