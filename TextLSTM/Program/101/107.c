int main () {
    int A, B, C, i;
    char words [3], rank [3];
    for (A = 0; A <= 2; A++) {
        for (B = 0; B <= 2; B++) {
            if (B == A)
                continue;
            for (C = 0; C <= 2; C++) {
                if (C == A || C == B)
                    continue;
                words[0] = (B > A) + (C == A);
                words[1] = (A > B) + (A > C);
                words[2] = (C > B) + (B > A);
                rank[A] = 0;
                rank[B] = 1;
                rank[C] = 2;
                if ((A +words[rank[A]]) == 2 && (B +words[rank[B]]) == 2 && (C +words[rank[C]]) == 2)
                    for (i = 0; i <= 2; i++)
                        cout << (char) (rank[i] + 65);
            }
        }
    }
    return 0;
}

