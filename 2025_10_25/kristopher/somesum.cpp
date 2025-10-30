#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num_pairs = n/2;
    
    if (n == 1) {
        cout << "Either";
    }
    
    else if (n % 2 == 0) {
        if (num_pairs % 2 == 0) {
            cout << "Even";
        }
    
        else {
            cout << "Odd";
        }
    }
    
    else {
        cout << "Either";
    }
    

    return 0;
}