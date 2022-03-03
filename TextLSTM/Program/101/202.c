int main () {
    int A, B, C;
    int word [4];
    char rank [4];
    int i;
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            if (A == B)
                continue;
            C = 6 - A -B;
            word[A] = (B < A) + (C == A);
            word[B] = (A < B) + (A < C);
            word[C] = (C < B) + (B < A);
            if (word[1] < word[2] && word[2] < word[3]) {
                rank[A] = 'A';
                rank[B] = 'B';
                rank[C] = 'C';
                for (i = 3; i >= 1; i--)
                    cout << rank[i];
            }
        }
    }
    return 0;
}

