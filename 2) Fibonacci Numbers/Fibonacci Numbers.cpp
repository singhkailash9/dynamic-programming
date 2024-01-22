#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 0)
    {
        cout << "Not a positive integer";
        return -1;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n > 2)
    {
        int first = 0, second = 1, sum = 0;
        for (int i = 3; i <= n; i++)
        {
            sum = first + second;
            first = second;
            second = sum;
        }
        return sum;
    }
    return -1;
}

int main()
{
    int n, result;
    cout << "Enter a number\n";
    cin >> n;
    result = fibonacci(n);
    cout << "The fibonacci number is " << result;
    return 0;
}