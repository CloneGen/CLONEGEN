int main () {
    int a, b, c, i, word [4];
    char rank [4];
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            if (a == b)
                continue;
            for (c = 1; c <= 3; c++) {
                if (b == c || a == c)
                    continue;
                word[a] = (b > a) + (c == a);
                word[b] = (a > b) + (a > c);
                word[c] = (c > b) + (b > a);
                rank[a] = 'A';
                rank[b] = 'B';
                rank[c] = 'C';
                if (word[1] == 2 && word[2] == 1 && word[3] == 0) {
                    for (i = 1; i <= 3; i++)
                        cout << rank[i];
                }
            }
        }
    }
    return 0;
}

