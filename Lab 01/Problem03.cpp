/*
    Let's consider the following code:

    #include <iostream>
    using namespace std;

    bool isPrime(int n)
    {
        for (int tr = 2; tr < n / ......; tr++)
        if ((n % ...... ) == 0)
            return ......;
        return true;
    }

    int main()
    {
        int n;
        std::cout << "Enter a number:";
        std::cin >> ......;
        if (isPrime(n))
            std::cout << n << " is prime !";
        else
            std::cout << n << " is NOT prime !";
    return 0;
    }

    Fill in the missing code (dots: ...... ) to make this program work as expected.
*/

/*
    1. i
    2. tr
    3. false
    4. n
*/

#include <iostream>

bool isPrime(int n)
{
    for (int tr = 2; tr < n / tr; tr++)
        if ((n % tr) == 0)
            return false;
    return true;
}
int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    if (isPrime(n))
        std::cout << n << " is prime !";
    else
        std::cout << n << " is NOT prime !";
    return 0;
}