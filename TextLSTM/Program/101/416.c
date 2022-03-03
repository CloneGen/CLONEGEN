int main () {
    char rank [3];
    for (int A = 0;
    A < 3; A++)
        for (int B = 0;
        B < 3; B++)
            if (A != B) {
                int C = 3 - A -B;
                if (((B > A) + (A == C) + A == 2) && ((A > B) + (A > C) + B == 2) && ((C > B) + (B > A) + C == 2)) {
                    rank[A] = 'A';
                    rank[B] = 'B';
                    rank[C] = 'C';
                    cout << rank[0] << rank[1] << rank[2];
                }
            }
    return 0;
}

