int a [1001];

int main () {
    int i, x, y, k = 1, j = 0, sum = 0;
    for (i = 1;; i++) {
        cin >> x;
        a[x]++;
        if (cin.get () != ',') {
            k = i;
            break;
        }
    }
    for (i = 1;; i++) {
        cin >> y;
        a[y]--;
        if (cin.get () != ',') {
            break;
        }
    }
    for (i = 0; i <= 1000; i++) {
        sum = sum + a[i];
        if (sum >= j) {
            j = sum;
        }
    }
    cout << k << " " << j << endl;
    return 0;
}

