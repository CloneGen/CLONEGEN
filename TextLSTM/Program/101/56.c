void judge (int A, int B, int C) {
    if (A < B &&B < C)
        cout << "ABC" << endl;
    if (A < C &&C < B)
        cout << "ACB" << endl;
    if (B < A &&A < C)
        cout << "BAC" << endl;
    if (B < C &&C < A)
        cout << "BCA" << endl;
    if (C < A &&A < B)
        cout << "CAB" << endl;
    if (C < B &&B < A)
        cout << "CBA" << endl;
}

int main () {
    int A, B, C;
    for (A = 0; A < 3; A++)
        for (B = 0; B < 3; B++)
            for (C = 0; C < 3; C++)
                if (A +(B > A) + (C == A) == 2 && B +(A > B) + (A > C) == 2 && C +(C > B) + (B > A) == 2)
                    judge (A, B, C);
    return 0;
}

