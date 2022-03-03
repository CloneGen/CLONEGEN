int main () {
    int A, As, B, Bs, C, Cs, i;
    char app [4] [2];
    for (A = 1; A <= 3; A++)
        for (B = 1; B <= 3; B++) {
            if (A == B)
                continue;
            for (C = 1; C <= 3; C++) {
                if (A == C || B == C)
                    continue;
                As = (A < B) + (A == C);
                Bs = (A > B) + (A > C);
                Cs = (B < C) + (B > A);
                if (As +A == 3 && Bs +B == 3 && Cs +C == 3) {
                    strcpy (app[A], "A");
                    strcpy (app[B], "B");
                    strcpy (app[C], "C");
                    for (i = 1; i <= 3; i++)
                        cout << app[i];
                }
            }
        }
    return 0;
}

