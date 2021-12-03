double my_pow(double x, int s)
{
    if (s == 0) 
        return 1;
    double f = x;
    for (int i = 1; i < s; i++)
    {
        f = f * x;
    }
    if (s > 0) 
        return f;
    else 
    {
        f = 1 / f;
        return f;
    }
}