#include <iostream>
#include "shape.h"
#include "menu.h"
using namespace std;

int main() {
    char opt;
    while (opt != '0') {
        opt = option();
        display(opt);
        cout << endl;
    }
    return 0;
}
