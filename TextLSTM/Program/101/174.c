int main () {
    int A, B, C;
    for (A = 0; A <= 2; A++) {
        for (B = 0; B <= 2; B++) {
            if (B == A)
                continue;
            else {
                C = 3 - B -A;
                if (((B > A) + (C == A) == (2 - A)) && ((A > B) + (A > C) == (2 - B)) && ((C > B) + (B > A) == (2 - C))) {
                    if (A < B &&A < C) {
                        cout << "A";
                        if (B < C)
                            cout << "B" << "C";
                        else
                            cout << "C" << "B";
                    }
                    if (B < A &&B < C) {
                        cout << "B";
                        if (A < C)
                            cout << "A" << "C";
                        else
                            cout << "C" << "A";
                    }
                    if (C < B &&C < A) {
                        cout << "C";
                        if (B < A)
                            cout << "B" << "A";
                        else
                            cout << "A" << "B";
                    }
                }
            }
        }
    }
    return 0;
}

