int main () {
    int A, B, C, D, E, a, b, c, d, e, m = 0, n = 0;
    for (A = 1; A <= 5; A++)
        for (B = 1; B <= 5; B++)
            for (C = 1; C <= 5; C++)
                for (D = 1; D <= 5; D++)
                    for (E = 1; E <= 5; E++) {
                        m = 0;
                        n = 0;
                        if (E == 2 || E == 3)
                            continue;
                        if ((A == B) || (A == C) || (A == D) || (A == E) || (B == C) || (B == D) || (B == E) || (C == D) || (C == E) || (D == E))
                            continue;
                        a = (E == 1);
                        b = (B == 2);
                        c = (A == 5);
                        d = (C != 1);
                        e = (D == 1);
                        if (A == 1 || A == 2)
                            m = m + a;
                        else
                            n = n + a;
                        if (B == 1 || B == 2)
                            m = m + b;
                        else
                            n = n + b;
                        if (C == 1 || C == 2)
                            m = m + c;
                        else
                            n = n + c;
                        if (D == 1 || D == 2)
                            m = m + d;
                        else
                            n = n + d;
                        if (E == 1 || E == 2)
                            m = m + e;
                        else
                            n = n + e;
                        if (n > 0)
                            continue;
                        if (m == 2)
                            cout << A << " " << B << " " << C << " " << D << " " << E << endl;
                        m = 0;
                        n = 0;
                    }
    return 0;
}

