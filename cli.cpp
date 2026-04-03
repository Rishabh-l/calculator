#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;
using namespace std;

int main() {
    while (true){
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch(op) {
        case '+': cout << a << " + " << b << " = " << a + b << endl; break;
        case '-': cout << a << " - " << b << " = " << a - b << endl; break;
        case '*': cout << a << " * " << b << " = " << a * b << endl; break;
        case '%':
    if((int)b != 0) cout << (int)a << " % " << (int)b << " = " << (int)a % (int)b << endl;
    else cout << "Error: Division by zero!" << endl;
    break;
case '^':
    cout << a << " ^ " << b << " = " << pow(a, b) << endl;
    break;
        case '/':
            if(b != 0) cout << a << " / " << b << " = " << a / b << endl;
            else cout << "Error: Division by zero!" << endl;
            break;
        default: cout << "Invalid operator!" << endl;
    }
    }
    return 0;
}