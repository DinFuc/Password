long long password(int n, int k)
{
    long long gcd = __gcd(n, (int)pow(10, k));
    return (long long)((n * pow(10, k)) / gcd);
}
