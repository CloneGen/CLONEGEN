int main () {
    int sum = 0;
    char c;
    int i = 0, j, p;
    int a [1000];
    while (cin >> a[i]) {
        sum++;
        c = cin.get ();
        if (c == ',')
            i++;
        else
            break;
    }
    int b [sum];
    for (i = 0; i <= sum - 1; i++) {
        cin >> b[i];
        cin.get ();
    }
    int d [1000];
    for (i = 0; i <= 999; i++)
        d[i] = 0;
    for (i = 0; i <= sum - 1; i++) {
        for (j = 0; j <= 999; j++) {
            if (j >= a[i] && j < b[i])
                d[j]++;
        }
    }
    for (i = 1; i <= 999; i++) {
        for (j = 0; j <= 999 - i; j++) {
            if (d[j] > d[j + 1]) {
                p = d[j + 1];
                d[j + 1] = d[j];
                d[j] = p;
            }
        }
    }
    cout << sum << " " << d[999] << endl;
}

