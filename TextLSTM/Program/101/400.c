int main () {
    int a, b, c;
    int t, p;
    int i, j;
    int m [4];
    char n [4];
    for (a = 0; a <= 2; a++)
        for (b = 0; b <= 2; b++)
            for (c = 0; c <= 2; c++) {
                if ((b > a) + (c == a) == (2 - a) && (a > b) + (a > c) == (2 - b) && (c > b) + (b > a) == (2 - c)) {
                    m[1] = a;
                    m[2] = b;
                    m[3] = c;
                    n[1] = 'A';
                    n[2] = 'B';
                    n[3] = 'C';
                    for (j = 1; j <= 2; j++)
                        for (i = 1; i <= 3 - j; i++)
                            if (m[i] > m[i + 1]) {
                                t = m[i];
                                m[i] = m[i + 1];
                                m[i + 1] = t;
                                p = n[i];
                                n[i] = n[i + 1];
                                n[i + 1] = p;
                            }
                }
            }
    cout << n[1] << n[2] << n[3] << endl;
    return 0;
}

