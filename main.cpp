#include <iostream>
using namespace std;

void pattern(int n1, int n2);

int main()
{
    // Declare variable n to get user input on pattern count
    int n;
    // ask user for integer
    cout << "Enter an Integer to generate a pattern:";
    // load integer into variable
    cin >> n;
    // call pattern fuction to display patterns
    pattern(n, n);
    return 0;
}
void pattern(int n1, int n2)
{
    if (n1 > 0)
    {
        // Create new line
        cout << "\n";
        // Print the empty spaces before the *
        for (int i = 0; i < (n1 + n2); i++)
        {
            cout << " ";
        };
        // Print the *s
        for (int i = 0; (n2 - i) >= n1; i++)
        {
            cout << "* ";
        };
        // Call the fuction recursively
        pattern(n1 - 1, n2);
        // Ensure only 1 full row of *s is printed
        if (n1 > 1)
        {
            // Create new line
            cout << "\n";
            // Print the empty spaces before the *
            for (int i = 0; i < (n1 + n2); i++)
            {
                cout << " ";
            };
            for (int i = 0; (n2 - i) >= n1; i++)
            {
                cout << "* ";
            };
        };
    };
};
