int main () {
    char str [50];
    long a = 0, b = 0;
    long i = 0;
    long n = 1, s = 0;
    cin >> a;
    for (i = 0; i < 50; i++) {
        str[i] = getchar ();
        if ((str[i] == ' ') && (i > 0))
            break;
    }
    i = i - 1;
    for (i;
    i > 0; i--) {
        if ((str[i] < 58) && (str[i] > 47)) {
            str[i] = str[i] - 48;
        }
        else if ((str[i] > 64) && (str[i] < 91)) {
            str[i] = str[i] - 55;
        }
        else if (str[i] > 96) {
            str[i] = str[i] - 87;
        }
        s = s + str[i] * n;
        n = n * a;
    }
    cin >> b;
    char c = 'A', d = 'A';
    long j = 0, k = 10, q = 10;
    int r [50];
    while (s >= b) {
        r[j] = s % b;
        s = s / b;
        j++;
    }
    j = j - 1;
    if (s <= 9) {
        cout << s;
    }
    else {
        for (q = 10; q < 36; q++) {
            if (s == q) {
                cout << d;
                break;
            }
            d = d + 1;
        }
        d = 'A';
    }
    for (j;
    j >= 0; j--) {
        if (r[j] <= 9) {
            cout << r[j];
        }
        else {
            for (k = 10; k < 36; k++) {
                if (r[j] == k) {
                    cout << c;
                    break;
                }
                c = c + 1;
            }
            c = 'A';
        }
    }
    cin.get ();
    cin.get ();
    return 0;
}

