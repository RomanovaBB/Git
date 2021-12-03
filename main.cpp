double my_pow(double a, int b)
{
    double temp = a;
    if (b == 0)
        return 1;
    for (int i = 0; i < b-1; i++)
    {
        temp = temp * a;
    }
    if (b < 0)
    {
        temp = 1 / temp;
        return temp;
    }
    return temp;
}