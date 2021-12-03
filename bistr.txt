double b_pow(double x, int s)
{
    if (s == 0)
    {
        return 1;

    }
    if (s % 2 == 0)
    {
        return b_pow(x * x, s / 2);
    }
    return x * b_pow(x, s - 1);
}