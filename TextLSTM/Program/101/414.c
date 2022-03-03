int main () {
    int a, b, c;
    char S [3];
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            for (c = 0; c < 3; c++) {
                int x = 2, y = 2, z = 2;
                if (b > a) {
                    x = x - 1;
                    z = z - 1;
                }
                if (a == c)
                    x = x - 1;
                if (b < a)
                    y = y - 1;
                if (a > c)
                    y = y - 1;
                if (c > b)
                    z = z - 1;
                if (a == x && b == y && c == z) {
                    S[a] = 'A';
                    S[b] = 'B';
                    S[c] = 'C';
                }
            }
        }
    }
    cout << S[0] << S[1] << S[2];
    return 0;
}

