int main () {
    int A, B, C, i;
    int num [4], rank [4];
    char name [4];
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            if (B == A)
                continue;
            C = 6 - B -A;
            num[1] = (B > A) + (C == A);
            num[2] = (A > B) + (A > C);
            num[3] = (C > B) + (B > A);
            rank[A] = A;
            rank[B] = B;
            rank[C] = C;
            name[A] = 'A';
            name[B] = 'B';
            name[C] = 'C';
            if (num[1] + rank[A] == 3 && num[2] + rank[B] == 3 && num[3] + rank[C] == 3)
                for (i = 1; i <= 3; i++) {
                    cout << name[i];
                }
        }
    }
    cout << endl;
    return 0;
}

