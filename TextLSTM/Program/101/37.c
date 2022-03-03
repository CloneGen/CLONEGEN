int main () {
    int A, B, C;
    char rank [4];
    char word [4];
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            if (A == B)
                continue;
            C = 6 - A -B;
            word[A] = (B < A) + (C == A);
            rank[A] = 'A';
            word[B] = (A < B) + (A < C);
            rank[B] = 'B';
            word[C] = (C < B) + (B < A);
            rank[C] = 'C';
            if (word[3] > word[2] && word[2] > word[1])
                cout << rank[3] << rank[2] << rank[1] << endl;
        }
    }
    return 0;
}

