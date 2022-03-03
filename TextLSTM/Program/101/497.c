int main () {
    int A, B, C;
    int words [4];
    char rank [4];
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            if (A == B)
                continue;
            for (C = 1; C <= 3; C++) {
                if (A == C || B == C)
                    continue;
                words[1] = (B > A) + (A == C);
                words[2] = (A > B) + (A > C);
                words[3] = (C > B) + (B > A);
                if (!(A < B &&words[1] <= words[2] || A < C &&words[1] <= words[3] || B < A &&words[2] <= words[1] || B < C &&words[2] <= words[3] || C < A &&words[3] <= words[1] || C < B &&words[3] <= words[2])) {
                    rank[A] = 'A';
                    rank[B] = 'B';
                    rank[C] = 'C';
                    cout << rank[1] << rank[2] << rank[3] << endl;
                }
            }
        }
    }
    return 0;
}

