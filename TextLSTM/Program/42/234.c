int main () {
    int n;
    cin >> n;
    int *p = (int *) malloc (n * sizeof (int));
    int i;
    for (i = 0; i < n; i++)
        cin >> p[i];
    int k;
    cin >> k;
    for (i = 0; i < n; i++)
        if (p[i] == k) {
            n--;
            for (int j = i;
            j < n; j++)
                p[j] = p[j + 1];
            i--;
        }
    if (n == 0)
        cout << "none";
    else {
        cout << p[0];
        for (i = 1; i < n; i++)
            cout << ' ' << p[i];
    }
    free (p);
    return 0;
}

