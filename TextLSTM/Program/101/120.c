int main () {
    int A, B, C;
    int As, Bs, Cs;
    int Al, Bl, Cl;
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            for (C = 1; C <= 3; C++) {
                As = (B > A) + (C == A);
                Bs = (A > B) + (A > C);
                Cs = (C > B) + (B > A);
                if (!(A <= B &&As <= Bs || A <= C &&As <= Cs || B <= A &&Bs <= As || B <= C &&Bs <= Cs || C <= A &&Cs <= As || C <= B &&Cs <= Bs)) {
                    Al = A;
                    Bl = B;
                    Cl = C;
                }
            }
        }
    }
    if (Al >= Bl &&Bl >= Cl)
        cout << "ABC" << endl;
    if (Al >= Cl &&Cl >= Bl)
        cout << "BCA" << endl;
    if (Bl >= Al &&Al >= Cl)
        cout << "BAC" << endl;
    if (Bl >= Cl &&Cl >= Al)
        cout << "BCA" << endl;
    if (Cl >= Al &&Al >= Bl)
        cout << "CAB" << endl;
    if (Cl >= Bl &&Bl >= Al)
        cout << "CBA" << endl;
    return 0;
}

