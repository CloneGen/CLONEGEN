int main () {
    int A, B, C, D, E, count = 0;
    for (A = 1; A <= 5; A++) {
        for (B = 1; B <= 5; B++) {
            for (C = 1; C <= 5; C++) {
                for (D = 1; D <= 5; D++) {
                    for (E = 1; E <= 5; E++) {
                        if ((A != B) && (A != C) && (A != D) && (A != E) && (C != B) && (D != B) && (E != B) && (C != D) && (C != E) && (D != E) && (E != 2) && (E != 3) && ((A <= 2) ^ (E == 1) == 0) && ((B <= 2) ^ (B == 2) == 0) && ((C <= 2) ^ (A == 5) == 0) && ((D <= 2) ^ (C >= 2) == 0) && ((E <= 2) ^ (D == 1) == 0)) {
                            if ((A <= 2) ^ (E == 1) == 0) {
                                if ((E == 1) == 1)
                                    count = count + 1;
                            }
                            if ((B <= 2) ^ (B == 2) == 0) {
                                if ((B <= 2) == 1)
                                    count = count + 1;
                            }
                            if ((C <= 2) ^ (A == 5) == 0) {
                                if ((C <= 2) == 1)
                                    count = count + 1;
                            }
                            if ((D <= 2) ^ (C >= 2) == 0) {
                                if ((C >= 2) == 1)
                                    count = count + 1;
                            }
                            if ((E <= 2) ^ (D == 1) == 0) {
                                if ((D == 1) == 1)
                                    count = count + 1;
                            }
                            if (count == 2) {
                                cout << A << " " << B << " " << C << " " << D << " " << E;
                            }
                        }
                    }
                }
            }
        }
    }
    int x;
    cin >> x;
    return 0;
}

