int main () {
    int n = 0;
    cin >> n;
    int i = 0, p [100];
    for (i = 0; i < n; i++)
        cin >> *(p + i);
    cout << *(p + n - 1);
    if (n > 1)
        for (i = n - 2; i >= 0; i--)
            cout << " " << *(p + i);
    cout << endl;
    return 0;
}

