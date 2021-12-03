double my_pow(double a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        return my_pow(a * a, b / 2);
    }
    return a * my_pow(a, b - 1);
}