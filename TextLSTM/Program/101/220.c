int main () {
    int x, y, z;
    int a, b, c;
    int i;
    char rank [3];
    for (x = 1; x <= 2; x++)
        for (y = 0; y <= 2; y++)
            for (z = 0; z <= 2; z++)
                if (x != y && x != z && y != z) {
                    a = b = c = 2;
                    if (x < y) {
                        a--;
                        c--;
                    }
                    else
                        b--;
                    if (x > z)
                        b--;
                    if (y < z)
                        c--;
                    if (a != b && b != c && c != a) {
                        rank[a] = 'A';
                        rank[b] = 'B';
                        rank[c] = 'C';
                        for (i = 0; i <= 2; i++) {
                            cout << rank[i];
                        }
                    }
                }
    return 0;
}

