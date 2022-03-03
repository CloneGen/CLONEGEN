int main () {
    int AFAN, BFAN, CFAN;
    int A = 3, B = 3, C = 3;
    for (AFAN = 2; AFAN <= 3; AFAN++)
        for (BFAN = 1; BFAN <= 3; BFAN++)
            for (CFAN = 1; CFAN <= 3; CFAN++) {
                A = B = C = 3;
                if (AFAN != BFAN &&BFAN != CFAN &&CFAN != AFAN) {
                    if (BFAN > AFAN) {
                        A = A -1;
                        C = C -1;
                    }
                    else
                        B = B -1;
                    if (AFAN > CFAN)
                        B = B -1;
                    if (CFAN > BFAN)
                        C = C -1;
                    if (A > B &&B > C)
                        cout << "CBA" << endl;
                    else if (A > C &&C > B)
                        cout << "BCA" << endl;
                    else if (B > A &&A > C)
                        cout << "CAB" << endl;
                    else if (C > A &&A > B)
                        cout << "BAC" << endl;
                    else if (B > C &&C > A)
                        cout << "ACB" << endl;
                    else if (C > B &&B > A)
                        cout << "ABC" << endl;
                }
            }
    return 0;
}

