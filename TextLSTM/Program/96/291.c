int main () {
    int a [100], b [100] = {0}, i, p, t;
    char num [100];
    cin >> num;
    p = strlen (num);
    for (i = 0; i < p; i++)
        a[i] = num[i] - '0';
    if (p > 1) {
        for (i = 1; i < p; i++) {
            if (i >= 2) {
                if (a[i - 2] == 0) {
                    b[i] = (a[i - 1] * 10 + a[i]) / 13;
                    t = (a[i - 1] * 10 + a[i]) % 13;
                    a[i] = t % 10;
                    a[i - 1] = t / 10;
                }
                else {
                    t = (a[i - 2] * 100 + a[i - 1] * 10 + a[i]) % 13;
                    b[i] = (a[i - 2] * 100 + a[i - 1] * 10 + a[i]) / 13;
                    a[i] = t % 10;
                    a[i - 1] = t / 10;
                    a[i - 2] = 0;
                }
            }
            else {
                b[i] = (a[i - 1] * 10 + a[i]) / 13;
                t = (a[i - 1] * 10 + a[i]) % 13;
                a[i] = t % 10;
                a[i - 1] = t / 10;
            }
        }
        if (b[1] == 0 && p > 2)
            i = 2;
        else
            i = 1;
        for (; i < p; i++)
            cout << b[i];
        cout << endl;
        cout << t << endl;
    }
    else {
        cout << "0" << endl;
        cout << num[0] << endl;
    }
    return 0;
}

