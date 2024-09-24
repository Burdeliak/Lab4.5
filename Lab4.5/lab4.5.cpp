#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0)); 

    double R, A, B;
    cout << " R: ";
    cin >> R;
    cout << " A: ";
    cin >> A;
    cout << " B: ";
    cin >> B;

    
    for (int i = 0; i < 10; ++i) {
        double x = A + static_cast<double>(rand()) / RAND_MAX * (B - A);
        double y = A + static_cast<double>(rand()) / RAND_MAX * (B - A);

        
        bool hit = (x, y, R);

       
        cout << "Shot (" << x << ", " << y << ") - ";
        if (hit) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}