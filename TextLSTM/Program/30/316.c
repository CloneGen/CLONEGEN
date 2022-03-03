int main () {
    int n = 0;
    cin >> n;
    int sum = 0;
    for (int i = 1;
    i <= n; i++) {
        int k = i;
        int sign = (k % 7 == 0) ? 1 : 0;
        while (k > 0) {
            sign += (k % 10 == 7);
            k = k / 10;
        }
        if (sign == 0) {
            sum += i * i;
        }
    }
    cout << sum;
}

