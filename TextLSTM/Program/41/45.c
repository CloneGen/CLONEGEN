int main () {
    int A, B, C, D, E;
    int a, b, c, d, e;
    for (A = 1; A <= 5; A++) {
        for (B = 1; B <= 5; B++) {
            for (C = 1; C <= 5; C++) {
                for (D = 1; D <= 5; D++) {
                    for (E = 1; E <= 5; E++) {
                        if ((E == 2) || (E == 3))
                            continue;
                        if ((A == B) || (A == C) || (A == D) || (A == E) || (B == C) || (B == D) || (B == E) || (C == D) || (C == E) || (D == E))
                            continue;
                        a = (E == 1);
                        b = (B == 2);
                        c = (A == 5);
                        d = (C != 1);
                        e = (D == 1);
                        if ((((A +B-a - b) == 1) && ((C +D+E-c - d - e) == 12)) || (((A +C-a - c) == 1) && ((B +D+E-b - d - e) == 12)) || (((A +D-a - d) == 1) && ((B +C+E-b - c - e) == 12)) || (((A +E-a - e) == 1) && ((B +C+D-b - c - d) == 12)) || (((B +C-b - c) == 1) && ((A +D+E-a - d - e) == 12)) || (((B +D-b - d) == 1) && ((A +C+E-a - c - e) == 12)) || (((B +E-b - e) == 1) && ((A +C+D-a - c - d) == 12)) || (((C +D-c - d) == 1) && ((A +B+E-a - b - e) == 12)) || (((C +E-c - e) == 1) && ((A +B+D-a - b - d) == 12)) || (((D +E-d - e) == 1) && ((A +B+C-a - b - c) == 12))) {
                            cout << A << ' ' << B << ' ' << C << ' ' << D << ' ' << E << endl;
                            A = B = C = D = E = 6;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

