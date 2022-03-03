int main () {
    int A, B, C;
    int words [4];
    char a [4];
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            if (A == B)
                continue;
            C = 6 - A -B;
            words[1] = (B > A) + (A == C);
            words[2] = (A > B) + (A > C);
            words[3] = (C > B) + (B > A);
            if (!((A > B &&words[1] <= words[2]) || (A > C &&words[1] <= words[3]) || (B > C &&words[2] <= words[3]) || (B > A &&words[2] <= words[1]) || (C > B &&words[3] <= words[2]) || (C > A &&words[3] <= words[1])) == 0)
                a[A] = 'A';
            a[B] = 'B';
            a[C] = 'C';
            if ((words[1] + A == 3) && (words[2] + B == 3) && (words[3] + C == 3))
                for (int i = 1;
                i <= 3; i++)
                    cout << a[i];
        }
    }
    return 0;
}

