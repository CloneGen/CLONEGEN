int main () {
    int A, B, C, D, E, a, b, c, d, e, front;
    for (A = 1; A <= 5; A++)
        for (B = 1; B <= 5; B++)
            if (B != A)
                for (C = 1; C <= 5; C++)
                    if (C != B &&C != A)
                        for (D = 1; D <= 5; D++)
                            if (D != C &&D != B &&D != A)
                                for (E = 1; E <= 5; E++)
                                    if (E != D &&E != C &&E != B &&E != A) {
                                        front = (E != 2 && E != 3);
                                        a = (A == 1 || A == 2) ? (E == 1) : !(E == 1);
                                        b = (B == 1 || B == 2) ? (B == 2) : !(B == 2);
                                        c = (C == 1 || C == 2) ? (A == 5) : !(A == 5);
                                        d = (D == 1 || D == 2) ? (C != 1) : !(C != 1);
                                        e = (E == 1 || E == 2) ? (D == 1) : !(D == 1);
                                        if ((front + a + b + c + d + e) == 6)
                                            cout << A << ' ' << B << ' ' << C << ' ' << D << ' ' << E;
                                    }
    return 0;
}

