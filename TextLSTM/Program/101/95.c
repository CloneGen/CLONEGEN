int main () {
    int A = 0, B = 0, C = 0;
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
    for (A = 0; A < 3; A++) {
        for (B = 0; B < 3; B++) {
            for (C = 0; C < 3; C++) {
                a1 = (B > A);
                a2 = (C == A);
                b1 = (A > B);
                b2 = (A > C);
                c1 = (C > B);
                c2 = (B > A);
                if (a1 + a2 + A == 2 && b1 + b2 + B == 2 && c1 + c2 + C == 2) {
                    if (A < B &&B < C) {
                        cout << "A" << "B" << "C";
                    }
                    if (A < C &&C < B) {
                        cout << "A" << "C" << "B";
                    }
                    if (B < A &&A < C) {
                        cout << "B" << "A" << "C";
                    }
                    if (B < C &&C < A) {
                        cout << "B" << "C" << "A";
                    }
                    if (C < B &&B < A) {
                        cout << "C" << "B" << "A";
                    }
                    if (C < A &&A < C) {
                        cout << "C" << "A" << "B";
                    }
                }
            }
        }
    }
    return 0;
}

