int main () {
    int n, i, s = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if ((69 < (i) &&(i) < 80) || ((i) == 7) || i == 17 || i == 27 || i == 37 || i == 47 || i == 57 || i == 67 || i == 87 || i == 97 || i % 7 == 0)
            continue;
        else
            s = s + pow ((double) i, 2);
    }
    cout << s;
}

