int main () {
    int A, B, C, i;
    int words [4];
    char rank [3];
    for (A = 0; A <= 2; A++) {
        for (B = 0; B <= 2; B++) {
            if (A == B)
                continue;
            C = 3 - A -B;
            words[1] = (B > A) + (C == A);
            words[2] = (A > B) + (A > C);
            words[3] = (C > B) + (B > A);
            if (words[1] + A == 2 && words[2] + B == 2 && words[3] + C == 2) {
                rank[A] = 'A';
                rank[B] = 'B';
                rank[C] = 'C';
            }
        }
    }
    cout << rank[0] << rank[1] << rank[2];
    return 0;
}

