int main () {
    int A, B, C, As, Bs, Cs, m, n, p;
    for (A = 1; A <= 3; A = A +1) {
        for (B = 1; B <= 3; B = B +1) {
            for (C = 1; C <= 3; C = C +1) {
                As = (B > A) + (C == A);
                Bs = (A > B) + (A > C);
                Cs = (C > B) + (B > A);
                if (!(A <= B &&As <= Bs || A <= C &&As <= Cs || B <= A &&Bs <= As || B <= C &&Bs <= Cs || C <= A &&Cs <= As || C <= B &&Cs <= Bs)) {
                    m = A;
                    n = B;
                    p = C;
                }
            }
        }
    }
    if (m >= n && n >= p) {
        cout << "CBA" << endl;
    }
    if (m >= p && p >= n) {
        cout << "BCA" << endl;
    }
    if (n >= m && m >= p) {
        cout << "CAB" << endl;
    }
    if (n >= p && p >= m) {
        cout << "ACB" << endl;
    }
    if (p >= m && m >= n) {
        cout << "BAC" << endl;
    }
    if (p >= n && n >= m) {
        cout << "ABC" << endl;
    }
    return 0;
}

