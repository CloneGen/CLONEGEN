int main () {
    int A = 1, B = 1, C = 1, D = 1, E = 1;
    if (A == 1 || A == 2) {
        A = 2;
        E = 1;
        D = 1;
    }
    if (B == 1 || B == 2) {
        B = 2;
        if (C == 1) {
            C = 1;
            A = 5;
            E = 4;
            D = 3;
            cout << A << " " << B << " " << C << " " << D << " " << E << endl;
        }
        if (D == 1) {
            D = 1;
            E = 2;
        }
        if (E == 1) {
            E = 1;
            D = 1;
        }
    }
    if (C == 1 || C == 2) {
        A = 5;
        C = 2;
        if (D == 1) {
            D = 1;
            E = 1;
        }
        if (E == 1) {
            E = 1;
            D = 1;
        }
    }
    if (D == 1 || D == 2) {
        C != 1;
        if (E == 1) {
            E = 1;
            D = 1;
        }
    }
    return 0;
}

