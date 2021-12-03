double my_pow(double x, unsigned int s)
{
    double f = x;
    for (int i = 1; i < s; i++)
    {
        f = f * x;
    }
    return f;
}