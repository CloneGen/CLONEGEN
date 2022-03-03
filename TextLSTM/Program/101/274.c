int main () {
    int A = 0, B = 0, C = 0;
    int Aw = 0, Bw = 0, Cw = 0;
    int As = 0, Bs = 0, Cs = 0;
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            for (C = 1; C <= 3; C++) {
                Aw = (B > A) + (C == A);
                Bw = (A > B) + (A > C);
                Cw = (C > B) + (B > A);
                if (!(A <= B &&Aw <= Bw || A <= C &&Aw <= Cw || B <= A &&Bw <= Aw || B <= C &&Bw <= Cw || C <= A &&Cw <= Aw)) {
                    As = A;
                    Bs = B;
                    Cs = C;
                }
            }
        }
    }
    if (As >= Bs &&Bs >= Cs)
        cout << "ABC" << endl;
    if (As >= Cs &&Cs >= Bs)
        cout << "BCA" << endl;
    if (Bs >= As &&As >= Cs)
        cout << "BAC" << endl;
    if (Bs >= Cs &&Cs >= As)
        cout << "BCA" << endl;
    if (Cs >= As &&As >= Bs)
        cout << "CAB" << endl;
    if (Cs >= Bs &&Bs >= As)
        cout << "CBA" << endl;
    return 0;
}

