int main () {
    int a [1001], b [1001], i = 1, sum = 0, max = 0;
    char c;
    while (cin >> a[i]) {
        c = cin.get ();
        if (c != ',')
            break;
        i++;
    }
    cin >> b[1];
    for (int j = 2;
    j <= i; j++) {
        c = cin.get ();
        cin >> b[j];
    }
    for (int k = 1;
    k <= i; k++) {
        for (int t = 1;
        t <= i; t++) {
            if (a[k] >= a[t] && a[k] < b[t])
                sum++;
        }
        if (max < sum)
            max = sum;
        sum = 0;
    }
    cout << i << ' ' << max;
    return 0;
}

