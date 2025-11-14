#include <iostream>
#include <vector>
using namespace std;

int main() {
    string parentheses;
    cin >> parentheses;

    int size = parentheses.size();
    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        arr[i] = (parentheses[i] == '(') ? 1 : -1;
    }

    int balance = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        balance += arr[i];
        
        if (balance < 0) {
            count++;
            balance += 2;
        }
    }

    count += balance / 2;
    cout << count;
    
    return 0;
}