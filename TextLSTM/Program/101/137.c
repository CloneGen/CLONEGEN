int main () {
    int a;
    int b;
    int c;
    int m [3];
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                if ((a + (b > a) + (c == a) == 3) && (b + (a > b) + (c < a) == 3) && (c + (c > b) + (a < b) == 3)) {
                    m[0] = a;
                    m[1] = b;
                    m[2] = c;
                }
            }
        }
    }
    if (m[0] > m[1] && m[1] > m[2]) {
        cout << "CBA";
    }
    if (m[0] < m[1] && m[1] < m[2]) {
        cout << "ABC";
    }
    if (m[0] > m[2] && m[2] > m[1]) {
        cout << "BCA";
    }
    if (m[0] > m[1] && m[0] < m[2]) {
        cout << "BAC";
    }
    if (m[0] < m[1] && m[1] > m[2]) {
        cout << "CAB";
    }
    if (m[0] > m[1] && m[1] > m[2]) {
        cout << "CBA";
    }
    return 0;
}

