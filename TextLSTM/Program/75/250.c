int main () {
    int s = 0, i = 0, j, k;
    int n;
    char ch;
    int a [1001], b [1001];
    do {
        cin >> a[i];
        i++;
    }
    while (cin.get () == ',');
    i = 0;
    do {
        cin >> b[i];
        i++;
    }
    while (cin.get () == ',');
    int t = 0;
    for (j = 0; j <= 1000; j++) {
        t = max (t, s);
        s = 0;
        for (k = 1; k <= i; k++) {
            if ((a[k - 1] <= j) && (j < b[k - 1]))
                s++;
        }
    }
    cout << i << " " << t << endl;
    return 0;
}

