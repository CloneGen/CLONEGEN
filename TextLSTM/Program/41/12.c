int main () {
    for (int A = 1;
    A <= 5; A++) {
        for (int B = 1;
        B <= 5; B++) {
            for (int C = 1;
            C <= 5; C++) {
                for (int D = 1;
                D <= 5; D++) {
                    for (int E = 1;
                    E <= 5; E++) {
                        if (A != B &&A != C &&A != D &&A != E &&B != C &&B != D &&B != E &&C != D &&C != E &&D != E &&E != 2 && E != 3) {
                            int m = (E == 1) + (B == 2) + (A == 5) + (C != 1) + (D == 1);
                            int cc1 = (E == 1) && (A != 2);
                            int cc2 = (A == 5) && (C != 1) && (C != 2);
                            int cc3 = (C != 1) && (D != 1) && (D != 2);
                            int cc4 = (D == 1) && (E != 1) && (E != 2);
                            if (m == 2 && (cc1 + cc2 + cc3 + cc4) == 0) {
                                cout << A << " " << B << " " << C << " " << D << " " << E << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

