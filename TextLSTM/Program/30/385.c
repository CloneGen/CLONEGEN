int main () {
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1;
    i <= n; i++) {
        int a = i % 10, b = (i - a) / 10;
        if (a != 7 && b != 7 && i % 7 != 0)
            s = s + i * i;
    }
    cout << s;
    return 0;
}

