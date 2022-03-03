int main () {
    int A = 0, B = 0, C = 0, i = 0, m [4];
    char a [4];
    for (i = 1; i <= 3; i++) {
        a[i] = 0;
        m[i] = 0;
    }
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            if (A == B)
                continue;
            for (C = 1; C <= 3; C++) {
                if (A == C || B == C)
                    continue;
                m[1] = (B > A) + (C == A);
                m[2] = (A > B) + (A > C);
                m[3] = (C > B) + (B > A);
                if (m[1] == 3 - A &&m[2] == 3 - B &&m[3] == 3 - C) {
                    a[A] = 65;
                    a[B] = 66;
                    a[C] = 67;
                }
            }
        }
    }
    cout << a[1] << a[2] << a[3];
    return 0;
}

