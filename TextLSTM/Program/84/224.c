int main () {
    int k = 0, a [101], i = 0, max = 0, sec = 0;
    cin >> k;
    cin >> a[1];
    max = a[1];
    for (i = 2; i <= k; i++) {
        cin >> a[i];
        if (a[i] > max) {
            sec = max;
            max = a[i];
        }
        else if (a[i] < max, a[i] > sec) {
            sec = a[i];
        }
        else {
            max = max;
            sec = sec;
        }
    }
    cout << max << endl << sec;
    return 0;
}

