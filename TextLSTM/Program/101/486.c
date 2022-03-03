int main () {
    int A, B, C, i = 0;
    int rank [4] = {0, 0, 0, 0}, words [4] = {0, 0, 0, 0};
    for (A = 1; A < 4; A++) {
        for (B = 1; B < 4; B++) {
            if (A == B)
                continue;
            C = 6 - B -A;
            words[1] = (B > A) + (A == C);
            words[2] = (A > B) + (A > C);
            words[3] = (C > B) + (B > A);
            rank[A] = 1;
            rank[B] = 2;
            rank[C] = 3;
            if (words[rank[1]] == 2 && words[rank[2]] == 1 && words[rank[3]] == 0) {
                for (i = 1; i < 4; i++)
                    cout << (char) (rank[i] + 64);
            }
        }
    }
    return 0;
}

