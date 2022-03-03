int n, sum;

int fenjie (int min, int max) {
    int i;
    for (i = min; i <= sqrt (max); i++) {
        if (max % i == 0 && i <= max / i) {
            sum++;
            fenjie (i, max / i);
        }
        if (i > max / i)
            break;
    }
    return sum;
}

int main () {
    int i, k;
    cin >> k;
    for (i = 0; i < k; i++) {
        cin >> n;
        sum = 1;
        sum = fenjie (2, n);
        cout << sum << endl;
    }
    return 0;
}

