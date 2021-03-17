#ifndef SUM_OF_MULT_H_INCLUDED
#define SUM_OF_MULT_H_INCLUDED

int calculate_sum(int a, int N)
{
    int m = N / a;
    int sum = m * (m + 1) / 2;
    int ans = a * sum;
    return ans;
}


#endif // SUM_OF_MULT_H_INCLUDED
