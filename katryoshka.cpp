#include <iostream>
using namespace std;

int main() {
    long long n, m, k, counter = 0;
    cin >> n >> m >> k;

    // First, try to form Katryoshkas using the 1-eye, 1-mouth, 1-body combination
    long long one_eye_mouth_body = min(n, min(m, k));
    counter += one_eye_mouth_body;
    
    // Reduce the number of eyes, mouths, and bodies used
    n -= one_eye_mouth_body;
    m -= one_eye_mouth_body;
    k -= one_eye_mouth_body;
    
    // Now, try to form Katryoshkas using the 2-eye, 1-mouth, 1-body combination
    long long two_eyes_mouth_body = min(n / 2, min(m, k));
    counter += two_eyes_mouth_body;

    // Output the total number of Katryoshkas formed
    cout << counter << endl;

    return 0;
}
