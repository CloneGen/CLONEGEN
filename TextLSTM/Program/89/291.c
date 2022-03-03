int main () {
    int n, i, j, max = 0, famous;
    cin >> n;
    int fame [n];
    for (i = 0; i < n; i++)
        fame[i] = 0;
    while (cin >> i >> j) {
        if (i == 0 && j == 0)
            break;
        fame[j] = fame[j] + 1;
    }
    for (j = 0; j < n; j++) {
        if (fame[j] >= max) {
            max = fame[j];
            famous = j;
        }
    }
    if (max >= n - 1)
        cout << famous << endl;
    else
        cout << "NOT FOUND" << endl;
    return 0;
}

