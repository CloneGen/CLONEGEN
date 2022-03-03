int main () {
    char n_a [100], n_b [100] = {'0'};
    int a, b, i;
    long n = 0;
    cin >> a;
    getchar ();
    cin.getline (n_a, 100, ' ');
    cin >> b;
    for (i = 0; n_a[i] != 0; i++) {
        n *= a;
        if (n_a[i] < 'A')
            n += n_a[i] - '0';
        else if (n_a[i] < 'a')
            n += n_a[i] - 'A' + 10;
        else
            n += n_a[i] - 'a' + 10;
    }
    for (i = 0; n != 0; i++) {
        if (n % b > 9)
            n_b[i] = n % b - 10 + 'A';
        else
            n_b[i] = n % b + '0';
        n /= b;
    }
    if (i == 0)
        cout << "0";
    for (i--; i >= 0; i--)
        cout << n_b[i];
    cout << endl;
    return 0;
}

