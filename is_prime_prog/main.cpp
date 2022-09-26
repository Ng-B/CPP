#include <iostream>

bool is_prime(int x)
{
    if (x <= 1) {
        return false;
    }

    for (int i = 2; i <= x/2; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv)
{
    for( int i = 1; i < argc; i++)
    {
        std::cout << argv[i] << " is a prime: " << (is_prime(atoi(argv[i])) == 1 ? "True" : "False") << "\n";
    }
    return 0;
}

