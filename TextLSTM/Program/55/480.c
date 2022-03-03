int trans (char a) {
    int m;
    if (a >= '0' && a <= '9')
        m = a - '0';
    else if (a >= 'a' && a <= 'z')
        m = a - 'a' + 10;
    else
        m = a - 'A' + 10;
    return m;
}

void change (int a, char n [], int b) {
    int m = 0, i, j = 1, d, k, num [100];
    for (i = 0; n[i] != ' '; i++) {
        num[i] = trans (n[i]);
    }
    k = i;
    char c [100];
    for (i = k - 1; i >= 0; i--) {
        m = m + num[i] * j;
        j = j * a;
    }
    if (m == 0)
        cout << "0";
    else {
        i = 0;
        while (m > 0) {
            d = m % b;
            m = m / b;
            if (d >= 10) {
                c[i] = 'A' + d - 10;
            }
            else
                c[i] = d + '0';
            i++;
        }
        for (i--; i >= 0; i--) {
            cout << c[i];
        }
    }
}

int main () {
    char n [100];
    int a, b, i, num [100];
    cin >> a;
    cin.get ();
    for (i = 0; (n[i] = cin.get ()) != ' ';)
        i++;
    cin >> b;
    change (a, n, b);
    return 0;
}

