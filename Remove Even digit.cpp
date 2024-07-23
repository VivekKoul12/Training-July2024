#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin >> num;    
    int result = 0;
    int position = 1;

    while (num > 0) {
        int digit = num % 10;  
        num /= 10;             
        if (digit % 2 != 0) {
            result += digit * position;
            position *= 10;  
        }
    }

    if (result == 0) {
        cout << "0" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
