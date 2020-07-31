//2.
#include <iostream>
using namespace std;

long long get_fibonacci_huge(long long n)
{
    long long remainder = n % 60;

    long long first = 0;
    long long second = 1;

    long long res = remainder;

    for (int i = 1; i < remainder; i++)
    {
        res = (first + second) % 60;
        first = second;
        second = res;
    }

    return res % 60;
}

int main() {
    long long n;
    cin >> n;
    cout << get_fibonacci_huge(n)%10 << endl;
}
