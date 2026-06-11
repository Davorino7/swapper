#include <iostream>
using namespace std;

void swapPointers (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main () {
    
    int x, y;

    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;

    cout << "You entered: x = " << x << ", y =  " << y;

    swapPointers (&x, &y);
        cout << "\nResult: x = " << x << ", y = " << y;


    return 0;
}