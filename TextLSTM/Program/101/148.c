int main () {
    int A, B, C;
    int a, b, c;
    int t, k;
    char ch1, ch2, ch3;
    for (A = 1; A < 4; A++)
        for (B = 1; B < 4; B++)
            for (C = 1; C < 4; C++) {
                a = (B > A) + (C == A);
                b = (A > B) + (A > C);
                c = (C > B) + (B > A);
                if ((((A > B) && (a < b)) || ((A == B) && (a == b)) || ((A < B) && (a > b))) + (((B > C) && (b < c)) || ((B == C) && (b == c)) || ((B < C) && (b > c))) + (((C > A) && (c < a)) || ((C == A) && (c == a)) || ((C < A) && (c > a))) == 3) {
                    for (k = 1; k <= 3; k++) {
                        if (A == k)
                            cout << "A";
                        if (B == k)
                            cout << "B";
                        if (C == k)
                            cout << "C";
                    }
                    cout << endl;
                    return 0;
                }
            }
}

