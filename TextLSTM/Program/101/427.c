int main () {
    int A, B, C;
    for (A = 0; A <= 2; A++)
        for (B = 0; B <= 2; B++)
            for (C = 0; C <= 2; C++)
                if ((B > A) + (C == A) == 2 - A &&(A > B) + (A > C) == 2 - B &&(C > B) + (B > A) == 2 - C) {
                    char a [4];
                    a[A] = 'A';
                    a[B] = 'B';
                    a[C] = 'C';
                    for (int i = 0;
                    i <= 2; i++)
                        cout << a[i];
                }
    return 0;
}

