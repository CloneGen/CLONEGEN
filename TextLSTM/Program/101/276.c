int main () {
    int A, B, C, a, b, c, words [4] = {0};
    char rank [4];
    for (A = 1; A < 4; A++) {
        for (B = 1; B < 4; B++) {
            for (C = 1; C < 4; C++) {
                words[1] = (B > A) + (C == A);
                words[2] = (A > B) + (A > C);
                words[3] = (C > B) + (B > A);
                a = 3 - words[1];
                b = 3 - words[2];
                c = 3 - words[3];
                if ((a != b) && (a != c) && (b != c) && (a == A) && (b == B) && (c == C)) {
                    rank[A] = 'A';
                    rank[B] = 'B';
                    rank[C] = 'C';
                    for (int i = 1;
                    i < 4; i++) {
                        cout << rank[i];
                    }
                }
            }
        }
    }
    return 0;
}

