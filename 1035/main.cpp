#include <iostream>
int f(long long n)
{
    return n < 10 ? n : f((f(n / 10) + n % 10));
}
int main()
{
    long long n;
    std::cin>>n;
    std::cout << f(n);
    return 0;
}

