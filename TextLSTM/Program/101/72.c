int main () {
    int A = 0, B = 0, C = 0;
    int i = 0;
    int rank [4] = {0}, word [4] = {0};
    for (A;
    A < 4; A++) {
        for (B = 1; B < 4; B++) {
            if (A != B)
                for (C = 1; C < 4; C++) {
                    if (B != C &&A != C)
                        word[1] = (B > A) + (C == A);
                    word[2] = (A > B) + (A > C);
                    word[3] = (C > B) + (B > A);
                    rank[A] = 1;
                    rank[B] = 2;
                    rank[C] = 3;
                    if (word[rank[3]] < word[rank[2]] && word[rank[2]] < word[rank[1]]) {
                        for (i = 1; i < 4; i++) {
                            cout << (char) (rank[i] + 64);
                        }
                    }
                }
        }
    }
    return 0;
}

