int main () {
    int a, b, c, words [4], rank [4];
    char m [4];
    for (a = 1; a <= 3; a++)
        for (b = 1; b <= 3; b++)
            for (c = 1; c <= 3; c++) {
                if (a == b || a == c || b == c)
                    continue;
                m[a] = 'A';
                m[b] = 'B';
                m[c] = 'C';
                words[1] = (b > a) + (a == c);
                words[2] = (a > b) + (a > c);
                words[3] = (c > b) + (b > a);
                rank[a] = 1;
                rank[b] = 2;
                rank[c] = 3;
                if (words[rank[1]] == 2 && words[rank[2]] == 1 && words[rank[3]] == 0) {
                    for (int i = 1;
                    i <= 3; i++)
                        cout << m[i];
                }
            }
    return 0;
}

