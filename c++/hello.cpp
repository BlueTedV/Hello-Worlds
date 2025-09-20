#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    MessageBox(NULL, "hello world", "Popup", MB_OK | MB_ICONINFORMATION);
    return 0;
}