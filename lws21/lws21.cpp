#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "input number ";
    cin >> num;

    int SmDig ;
    int SecSmDig ;

    int adj = num;
    while (adj != 0) {
        int dig= adj % 10;
        if (dig < SmDig) {
            SecSmDig = SmDig;
            SmDig = dig;
        }
        else if (dig < SecSmDig && dig != SmDig) {
            SecSmDig = dig;
        }
        adj /= 10;
    }

    if (SecSmDig == 0) {
        cout << "no number" << endl;
    }
    else {
        cout << "You number " << SecSmDig << endl;
    }

    return 0;
}