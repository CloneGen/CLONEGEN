int main () {
    int a [10];
    int b [10];
    cin >> a[0] >> b[0];
    int i = 1, j = 1;
    while (true) {
        if (a[i - 1] % 2 == 0) {
            a[i] = a[i - 1] / 2;
        }
        else {
            a[i] = (a[i - 1] - 1) / 2;
        }
        if (a[i] == 1) {
            break;
        }
        else
            i++;
    }
    while (true) {
        if (b[j - 1] % 2 == 0) {
            b[j] = b[j - 1] / 2;
        }
        else {
            b[j] = (b[j - 1] - 1) / 2;
        }
        if (b[j] == 1) {
            break;
        }
        else
            j++;
    }
    while (i >= 0 && j >= 0) {
        if (a[i] == b[j]) {
            i--;
            j--;
        }
        else {
            break;
        }
    }
    cout << a[i + 1];
    return 0;
}

