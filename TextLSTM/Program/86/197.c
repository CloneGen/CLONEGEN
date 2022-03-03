int main () {
    int n;
    cin >> n;
    int m;
    int a [21];
    a[0] = 0;
    int i;
    int times;
    while (n--) {
        cin >> m;
        for (i = 1; i <= m; i++)
            cin >> a[i];
        a[m + 1] = 70;
        for (i = 0; i <= m + 1; i++) {
            if (a[i] + i * 3 >= 60) {
                break;
            }
        }
        i--;
        times = 60 - i * 3;
        if (times <= a[i + 1])
            ;
        else
            times = a[i + 1];
        cout << times << endl;
    }
    return 0;
}

