int main () {
    char a [500];
    unsigned int i, j, k, l;
    cin >> a;
    for (k = 2; k < strlen (a) + 1; k++) {
        for (i = 0; i < strlen (a) - k + 1; i++) {
            for (j = i; j < i + k; j++) {
                if (a[j] != a[2 * i + k - 1 - j])
                    break;
                else if (j >= 2 * i + k - 1 - j) {
                    for (l = i; l < i + k; l++)
                        cout << a[l];
                    cout << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

