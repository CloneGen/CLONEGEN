int main () {
    int y, m, d;
    int i = 0, num = 0;
    cin >> y >> m >> d;
    if (y % 4 == 0 && (y % 100 != 0 || (y % 400 == 0))) {
        int a [13] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (i = 0; i < m - 1; i++)
            num += a[i];
        num += d;
    }
    else {
        int a [13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (i = 0; i < m - 1; i++)
            num += a[i];
        num = num + d;
    }
    cout << num << endl;
    return 0;
}

