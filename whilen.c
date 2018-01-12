/* Summary:
 *
 * %ret = a and %ret = a0 and n = n0 and n >= 1 and %ret >= n
 * %ret = n0 and %ret = n and a = a0 and %ret >= a0+1 and %ret >= 1
 * n = n0 and a = a0 and %ret = -1 and n <= 0
 *
 */
int whilen(int n, int a)
{
    int i;
    int j;

    if(n < 1)
        return -1;

    i = 0;

    while(i < n)
    {
        i++;
    }

    j = a;

    while(j < n)
    {
        j = j+1;
    }

    return j;
}

void test()
{
    int n;
    int a;
    int r;

    r = whilen(n, a);
}