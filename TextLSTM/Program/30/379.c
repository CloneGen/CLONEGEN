int main () {
    char a [2] = {'0', '1'};
    int n, i, s = 0;
    cin >> n;
    for (i = 1; i <= n; i++, a[1]++) {
        if (i % 7 != 0 && a[0] != '7' && a[1] != '7')
            s = s + i * i;
        if (a[1] == '9') {
            a[0]++;
            a[1] = '0' - 1;
        }
    }
    cout << s << endl;
}

