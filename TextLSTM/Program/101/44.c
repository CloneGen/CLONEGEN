int main () {
    int A, B, C, a, b, c, x, y, z;
    for (A = 1; A <= 3; A++)
        for (B = 1; B <= 3; B++)
            for (C = 1; C <= 3; C++) {
                a = (B > A) + (C == A);
                b = (A > B) + (A > C);
                c = (C > B) + (B > A);
                x = (a > b) && (A < B) || (a == b) && (A == B) || (a < b) && (A > B);
                y = (a > c) && (A < C) || (a == c) && (A == C) || (a < c) && (A > C);
                z = (c > b) && (C < B) || (c == b) && (C == B) || (c < b) && (C > B);
                if (x + y + z == 3) {
                    for (int i = 1;
                    i <= 3; i++) {
                        if (i == A)
                            cout << "A";
                        if (i == B)
                            cout << "B";
                        if (i == C)
                            cout << "C";
                    }
                }
            }
    return 0;
}

