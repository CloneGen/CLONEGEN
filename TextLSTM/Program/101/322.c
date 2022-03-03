int main () {
    int a, b, c, cc1, cc2, cc3, i, j, n [3], k;
    char m [] = {'A', 'B', 'C'}, D;
    for (a = 1; a <= 3; a++)
        for (b = 1; b <= 3; b++)
            for (c = 1; c <= 3; c++) {
                cc1 = (b < a) + (c == a);
                cc2 = (a < b) + (a < c);
                cc3 = (c < b) + (b < a);
                if ((((cc2 - cc1) * (b - a)) > 0 || ((cc1 == cc2) && (a == b))) && (((cc2 - cc3) * (b - c)) > 0 || ((cc2 == cc3) && (b == c))) && (((cc3 - cc1) * (c - a)) > 0 || ((cc3 == cc1) && (c == a)))) {
                    n[0] = a;
                    n[1] = b;
                    n[2] = c;
                }
            }
    for (i = 0; i <= 1; i++)
        for (j = 0; j <= 1 - i; j++) {
            if (n[j] < n[j + 1]) {
                k = n[j];
                n[j] = n[j + 1];
                n[j + 1] = k;
                D = m[j];
                m[j] = m[j + 1];
                m[j + 1] = D;
            }
        }
    cout << m[0] << m[1] << m[2] << endl;
    return 0;
}

