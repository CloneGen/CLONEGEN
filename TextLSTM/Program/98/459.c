int main () {
    int n, i = 0, k = 0, p = 0, l;
    cin >> n;
    char x [500] [40] = {0};
    for (i = 0; i < n; i++) {
        cin >> *(x + i);
    }
    for (i = 0; i < n; i++) {
        l = strlen (*(x + i));
        k = k + l;
        if (i == 0) {
            cout << *(x);
            continue;
        }
        if (k != l && k + p + 1 <= 80) {
            cout << " " << *(x + i);
            p++;
            continue;
        }
        if (k + p + 1 > 80) {
            cout << endl;
            cout << *(x + i);
            k = strlen (*(x + i));
            p = 0;
            continue;
        }
    }
    return 0;
}

