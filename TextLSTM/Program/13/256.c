int main () {
    int n, i, j, number;
    int a [100] = {0};
    cin >> n;
    i = 0;
    for (j = 1; j <= n; j++) {
        cin >> number;
        if (a[number] == 0) {
            a[number]++;
            if (i == 0) {
                cout << number;
                i = 1;
            }
            else {
                cout << " " << number;
            }
        }
    }
    return 0;
}

