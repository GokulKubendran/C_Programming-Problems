#ifndef DIFF_OF_SQUARES_H_INCLUDED
#define DIFF_OF_SQUARES_H_INCLUDED

int Square_Diff(int n)
{

    int l, k, m;
    l = (n * (n + 1) * (2 * n + 1)) / 6;
    k = (n * (n + 1)) / 2;
    k = k * k;
    m = abs(l - k);
    return m;
  }


#endif // DIFF_OF_SQUARES_H_INCLUDED
