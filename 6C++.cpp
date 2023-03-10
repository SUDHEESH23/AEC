#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int time = x*y + ((x-1)/3)*z;
        cout << time << endl;
    }
    return 0;
}