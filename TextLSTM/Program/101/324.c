int main () {
    int A, B, C;
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            if (A != B) {
                C = 6 - A -B;
                if ((B > A) + (C == A) + A == 3 && (A > B) + (A > C) + B == 3 && (C > B) + (B > A) + C == 3) {
                    char m [3] = {'A', 'B', 'C'}, x;
                    int a [3] = {A, B, C}, i, j, t;
                    for (j = 0; j < 2; j++)
                        for (i = 0; i < 2 - j; i++)
                            if (a[i] > a[i + 1]) {
                                t = a[i];
                                a[i] = a[i + 1];
                                a[i + 1] = t;
                                x = m[i];
                                m[i] = m[i + 1];
                                m[i + 1] = x;
                            }
                    cout << m[0] << m[1] << m[2];
                }
            }
        }
    }
    return 0;
}

