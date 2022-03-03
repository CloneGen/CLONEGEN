int main () {
    int num = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    for (int A = 1;
    A < 6; A++)
        for (int B = 1;
        B < 6; B++) {
            if (A == B)
                continue;
            for (int C = 1;
            C < 6; C++) {
                if (A == C || B == C)
                    continue;
                for (int D = 1;
                D < 6; D++) {
                    if (A == D || B == D || C == D)
                        continue;
                    for (int E = 1;
                    E < 6; E++) {
                        if (E == 2 || E == 3)
                            continue;
                        if (A == E || B == E || C == E || D == E)
                            continue;
                        a = (E == 1);
                        b = (B == 2);
                        c = (A == 5);
                        d = (C != 1);
                        e = (D == 1);
                        num = ((A < 3 && a == 1) || (A >= 3 && a == 0)) + ((B < 3 && b == 1) || (B >= 3 && b == 0)) + ((C < 3 && c == 1) || (C >= 3 && c == 0)) + ((D < 3 && d == 1) || (D >= 3 && d == 0)) + ((E < 3 && e == 1) || (E >= 3 && e == 0));
                        if (num == 5) {
                            cout << A << " " << B << " " << C << " " << D << " " << E << endl;
                            break;
                        }
                    }
                }
            }
        }
    return 0;
}

