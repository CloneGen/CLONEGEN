int main () {
    int i, j, k, n, fei [20];
    cin >> n;
    const  int n1 = n;
    int a [n1], b [n1];
    for (i = 0; i < n1; i++)
        cin >> a[i];
    fei[0] = fei[1] = 1;
    for (j = 2; j <= 20; j++)
        fei[j] = fei[j - 1] + fei[j - 2];
    b[0] = fei[a[0]];
    cout << fei[a[0] - 1];
    for (k = 1; k < n1; k++) {
        b[k] = fei[a[k] - 1];
        cout << endl << b[k];
    }
}

