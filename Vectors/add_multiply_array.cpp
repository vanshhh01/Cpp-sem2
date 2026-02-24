#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int sum = 0;
    int product = 1;

    cout << "Enter 6 elements:\n";
    
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 6; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Addition of elements = " << sum << endl;
    cout << "Multiplication of elements = " << product << endl;

    return 0;
}
