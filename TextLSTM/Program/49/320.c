int main () {
    char a [500];
    cin.getline (a, 500);
    int i, j, k, m, l, s;
    l = strlen (a);
    for (i = 1; i <= l - 1; i++) {
        for (j = 0; j <= l - 1 - i; j++) {
            for (k = 0, s = 0; k < (i + 1) / 2; k++) {
                if (a[j + k] == a[j + i - k])
                    s = 0;
                else {
                    s = s + 1;
                    break;
                }
            }
            if (s == 0) {
                for (m = j; m <= j + i; m++)
                    cout << a[m];
                cout << endl;
            }
        }
    }
    return 0;
}

