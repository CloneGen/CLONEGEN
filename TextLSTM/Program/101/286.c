int main () {
    int a, b, c;
    int as, bs, cs;
    char d [4];
    for (a = 1; a <= 3; a++)
        for (b = 1; b <= 3; b++)
            for (c = 1; c <= 3; c++) {
                as = (b > a) + (c == a);
                bs = (a > b) + (a > c);
                cs = (c > b) + (b > a);
                if (!(a <= b && as <= bs || a <= c && as <= cs || b <= a && bs <= as || b <= c && bs <= cs || c <= a && cs <= as || c <= b && cs <= bs)) {
                    d[a] = 'A';
                    d[b] = 'B';
                    d[c] = 'C';
                }
            }
    cout << d[1];
    cout << d[2];
    cout << d[3] << endl;
    return 0;
}

