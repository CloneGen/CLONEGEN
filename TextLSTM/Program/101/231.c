int main () {
    int A, B, C, a, b, c;
    for (A = 1; A <= 3; A++)
        for (B = 1; B <= 3; B++)
            for (C = 1; C <= 3; C++) {
                a = (B > A) + (C == A);
                b = (A > B) + (A > C);
                c = (C > B) + (B > A);
                if (((A > B) && (b > a) || (B > A) && (a > b)) && ((A > C) && (c > a) || (A < C) && (c < a)) && ((B > C) && (c > b) || (C > B) && (b > c))) {
                    for (int i = 2;
                    i >= 0; i--) {
                        if (a == i)
                            cout << 'A';
                        if (b == i)
                            cout << 'B';
                        if (c == i)
                            cout << 'C';
                    }
                    break;
                }
            }
    return 0;
}

