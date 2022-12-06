#include <iostream>
#include "CS303_Assignment3Q2.h"
using namespace std;


int main()
{
    char str[] = "redivider";

    if (isPalindrome(str))
        cout << "This is a palindrome.";
    else
        cout << "Not a palindrome, try again.";

    return 0;
}
