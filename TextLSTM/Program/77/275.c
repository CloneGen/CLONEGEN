int main () {
    char a [1000];
    int m = 0, n = 0, i = 0, j, judge = 0, len;
    char x, y;
    cin >> x;
    a[0] = x;
    m++;
    i++;
    while (m != n) {
        cin >> a[i];
        if (a[i] != x && !judge) {
            y = a[i];
            judge++;
            n++;
        }
        else if (a[i] == x)
            m++;
        else
            n++;
        i++;
    }
    len = i++;
    for (i = 1; i <= len / 2; i++) {
        for (j = 0; j <= len - 1; j++) {
            if (a[j] == x) {
                n = j;
                n++;
                while (a[n] != x && a[n] != y)
                    n++;
                if (a[n] == y) {
                    cout << j << " " << n << endl;
                    a[n] = ' ';
                    a[j] = ' ';
                    break;
                }
            }
        }
    }
    return 0;
}

