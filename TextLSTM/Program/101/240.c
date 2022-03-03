int main () {
    int a = 1, b = 1, c = 1, i = 1;
    char rank [4];
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                if (((b < a) + (c == a) == (a - 1)) && ((a < b) + (a < c) == (b - 1)) && ((c < b) + (b < a) == (c - 1))) {
                    rank[a] = 'A';
                    rank[b] = 'B';
                    rank[c] = 'C';
                    for (i = 3; i >= 1; i--)
                        cout << rank[i];
                }
            }
        }
    }
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

