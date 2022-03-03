int main () {
    int n, i;
    double sum;
    sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            sum = sum;
        }
        else if ((i - 7) % 10 == 0) {
            sum = sum;
        }
        else if (i / 10 == 7) {
            sum = sum;
        }
        else {
            sum = sum + i * i;
        }
    }
    cout << sum << endl;
}

