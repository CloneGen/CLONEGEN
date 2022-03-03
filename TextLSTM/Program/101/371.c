int main () {
    for (int A = 0;
    A <= 2; A++)
        for (int B = 0;
        B <= 2; B++)
            for (int C = 0;
            C <= 2; C++)
                if (A == (B < A) + (C == A) && B == (A < B) + (A < C) && C == (C < B) + (B < A))
                    for (int i = 2;
                    i >= 0; i--) {
                        if (A == i)
                            cout << "A";
                        if (B == i)
                            cout << "B";
                        if (C == i)
                            cout << "C";
                    }
    return 0;
}

