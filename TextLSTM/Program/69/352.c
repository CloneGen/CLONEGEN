int main () {
    int i, x, y, z, c [252], r = 0, s = 0;
    char a [251], b [251], d [251], e [251];
    cin >> d >> e;
    for (i = 0; i < 251; i++)
        c[i] = 0;
    x = strlen (d);
    y = strlen (e);
    for (i = 0; i < x; i++)
        a[i] = d[x - 1 - i];
    for (i = 0; i < y; i++)
        b[i] = e[y - 1 - i];
    for (i = 0; i < x; i++)
        if (a[i] != '0') {
            r = 1;
            break;
        }
    for (i = 0; i < y; i++)
        if (b[i] != '0') {
            s = 1;
            break;
        }
    if (r == 0 && s == 0)
        cout << "0" << endl;
    else {
        if (x > y) {
            for (i = y; i < x; i++)
                b[i] = '0';
            for (i = 0; i < x; i++) {
                c[i] += (int) a[i] - 48 + (int) b[i] - 48;
                if (c[i] >= 10) {
                    c[i] += -10;
                    c[i + 1]++;
                }
            }
            for (i = x + 1;; i--)
                if (c[i] != 0) {
                    z = i;
                    break;
                }
            cout << c[z];
            for (i = 0; i < z; i++)
                cout << c[z - 1 - i];
            cout << endl;
        }
        else {
            for (i = x; i < y; i++)
                a[i] = '0';
            for (i = 0; i < y; i++) {
                c[i] += (int) a[i] - 48 + (int) b[i] - 48;
                if (c[i] >= 10) {
                    c[i] += -10;
                    c[i + 1]++;
                }
            }
            for (i = y + 1;; i--)
                if (c[i] != 0) {
                    z = i;
                    break;
                }
            cout << c[z];
            for (i = 0; i < z; i++)
                cout << c[z - 1 - i];
            cout << endl;
        }
    }
    return 0;
}

