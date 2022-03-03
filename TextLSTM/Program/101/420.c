int main () {
    int A, B, C;
    int c1, c2, c3, p, d, f;
    for (A = 1; A <= 3; A++)
        for (B = 1; B <= 3; B++)
            for (C = 1; C <= 3; C++) {
                if (!((A == B) || (A == C) || (B == C))) {
                    c1 = (B > A) + (C == A);
                    c2 = (A > B) + (A > C);
                    c3 = (C > B) + (B > A);
                    p = (((c1 > c2) + (A < B)) != 1);
                    d = (((c1 > c3) + (A < C)) != 1);
                    f = (((c3 > c2) + (C < B)) != 1);
                    if (p && d && f) {
                        for (p = 1; p <= 3; p++) {
                            if (A == p)
                                cout << 'A';
                            if (B == p)
                                cout << 'B';
                            if (C == p)
                                cout << 'C';
                        }
                    }
                }
            }
    return 0;
}

