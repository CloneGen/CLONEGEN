int main () {
    int z, q, s, l;
    for (z = 1; z <= 5; z++)
        for (q = 1; q <= 5; q++)
            for (s = 1; s <= 5; s++) {
                l = (z + q) - s;
                if ((l >= 1) && (l <= 5) && (z + l > s + q) && (z + s < q)) {
                    int a [4], i, j, k, temp;
                    char c [4], ch;
                    a[0] = z;
                    a[1] = q;
                    a[2] = s;
                    a[3] = l;
                    c[0] = 'z';
                    c[1] = 'q';
                    c[2] = 's';
                    c[3] = 'l';
                    for (i = 0; i < 4; i++) {
                        k = i;
                        for (j = i + 1; j < 4; j++)
                            if (a[j] > a[k])
                                k = j;
                        if (k != i) {
                            temp = a[k];
                            a[k] = a[i];
                            a[i] = temp;
                            ch = c[k];
                            c[k] = c[i];
                            c[i] = ch;
                        }
                    }
                    for (i = 0; i < 4; i++)
                        cout << c[i] << ' ' << a[i] << 0 << endl;
                }
            }
    return 0;
}

