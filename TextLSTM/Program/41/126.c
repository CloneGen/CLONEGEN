int main () {
    int A, B, C, D, E;
    for (A = 1; A < 6; A++) {
        for (B = 1; B < 6; B++) {
            for (C = 1; C < 6; C++) {
                for (D = 1; D < 6; D++) {
                    for (E = 1; E < 6; E++) {
                        if ((E == 1) + (B == 2) + (A == 5) + (C != 1) + (D == 1) == 2 && (A == B) + (A == C) + (A == D) + (A == E) + (B == C) + (B == D) + (B == E) + (C == D) + (C == E) + (D == E) == 0 && (E != 2) + (E != 3) == 2 && A == 5 && B != 1)
                            cout << A << ' ' << B << ' ' << C << ' ' << D << ' ' << E << endl;
                    }
                }
            }
        }
    }
    return 0;
}

