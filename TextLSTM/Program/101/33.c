int main () {
    int A = 0, B = 0, C = 0;
    int a = 0, b = 0, c = 0;
    int i;
    for (A = 0; A <= 2; A++)
        for (B = 0; B <= 2; B++)
            for (C = 0; C <= 2; C++) {
                a = (B > A) + (C == A);
                b = (A > B) + (A > C);
                c = (C > B) + (B > A);
                if ((a + A == 2) && (b + B == 2) && (c + C == 2) == 1) {
                    for (i = 2; i >= 0; i--) {
                        if (a == i)
                            cout << "A";
                        if (b == i)
                            cout << "B";
                        if (c == i)
                            cout << "C";
                    }
                    break;
                }
            }
    return 0;
}

