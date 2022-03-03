int main () {
    int n, m, num [200], *p = num;
    cin >> n >> m;
    for (p = num; p < num + n; p++)
        if (p + m >= num + n)
            cin >> *(p + m - n);
        else
            cin >> *(p + m);
    for (p = num; p < num + n - 1; p++)
        cout << *p << ' ';
    cout << *p << endl;
    return 0;
}

