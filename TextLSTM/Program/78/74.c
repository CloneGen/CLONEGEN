int main () {
    int i, j, k, l, z, q, s, l1;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j == i)
                continue;
            for (k = 1; k <= 5; k++) {
                if (k == j || k == i)
                    continue;
                for (l1 = 1; l1 <= 5; l1++) {
                    if (l1 == k || l1 == j || l1 == i)
                        continue;
                    if ((i + j) == (k + l1) && (i + l1) > (k + j) && (i + k) < j) {
                        z = i;
                        q = j;
                        s = k;
                        l = l1;
                    }
                }
            }
        }
    }
    char ch [4] = {0};
    ch[0] = 'z';
    ch[1] = 'q';
    ch[2] = 's';
    ch[3] = 'l';
    int a [4] = {0};
    a[0] = z;
    a[1] = q;
    a[2] = s;
    a[3] = l;
    int x, y, t1, t2;
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3 - x; y++)
            if (a[y] < a[y + 1]) {
                t1 = a[y];
                a[y] = a[y + 1];
                a[y + 1] = t1;
                t2 = ch[y];
                ch[y] = ch[y + 1];
                ch[y + 1] = t2;
            }
    for (i = 0; i < 4; i++)
        cout << ch[i] << " " << a[i] * 10 << '\n' << endl;
    return 0;
}

