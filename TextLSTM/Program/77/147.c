int main () {
    int a [101], n = 0;
    char s [101];
    cin >> s;
    for (int i = 0;
    s[i]; ++i) {
        if (s[i] == s[0])
            a[++n] = i;
        else
            cout << a[n--] << " " << i << endl;
    }
    return 0;
}

