int main () {
    int a, b, c, A, B, C;
    char m [4];
    for (a = 0; a < 3; a++)
        for (b = 0; b < 3; b++)
            for (c = 0; c < 3; c++) {
                A = (b > a) + (c == a);
                B = (a > b) + (a > c);
                C = (c > b) + (b > a);
                if ((((a > b && A < B) || (a < b && A > B)) + ((a > c && A < C) || (a < c && A > C)) + ((b > c && B < C) || (b < c && B > C))) == 3) {
                    m[a] = 'A';
                    m[b] = 'B';
                    m[c] = 'C';
                    m[3] = '\0';
                    cout << m;
                }
            }
    return 0;
}

