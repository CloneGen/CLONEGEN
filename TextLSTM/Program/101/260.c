int main () {
    int A = 0, B = 0, C = 0;
    char rank [3] = {0};
    for (A = 0; A < 3; A++) {
        for (B = 0; B < 3; B++) {
            if (B == A)
                continue;
            C = 3 - A -B;
            if (((B < A) + (C == A) == A) && ((A < B) + (A < C) == B) && ((C < B) + (B < A) == C)) {
                rank[A] = 'A';
                rank[B] = 'B';
                rank[C] = 'C';
                cout << rank[2] << rank[1] << rank[0] << endl;
            }
        }
    }
    return 0;
}

