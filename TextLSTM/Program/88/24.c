int main () {
    int n, i;
    char a [30];
    while (cin >> a) {
        n = strlen (a);
        for (i = 0; i < n; i++) {
            if (a[i] == '1' || a[i] == '0' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9')
                cout << a[i];
            else {
                if (a[i - 1] == '1' || a[i - 1] == '0' || a[i - 1] == '2' || a[i - 1] == '3' || a[i - 1] == '4' || a[i - 1] == '5' || a[i - 1] == '6' || a[i - 1] == '7' || a[i - 1] == '8' || a[i - 1] == '9')
                    cout << endl;
            }
        }
    }
    return 0;
}

