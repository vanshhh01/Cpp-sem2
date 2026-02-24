#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    cout << "Enter 6 elements:\n";
    for(int i = 0; i < 6; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < 3; i++) {
        v.pop_back();
    }

    cout << "Vector after removing last 3 elements:\n";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
