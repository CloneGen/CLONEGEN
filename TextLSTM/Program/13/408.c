int main () {
    int n, l;
    cin >> n;
    int m [n];
    for (int i = 0;
    i < n; i++)
        cin >> m[i];
    int cishu [101] = {0};
    for (int i = 0;
    i < n; i++) {
        cishu[m[i]]++;
        if (cishu[m[i]] >= 2)
            m[i] = 0;
    }
    for (int i = 0;
    i < n; i++) {
        if (i == 0)
            cout << m[i];
        else if (m[i] != 0)
            cout << " " << m[i];
    }
    return 0;
}

