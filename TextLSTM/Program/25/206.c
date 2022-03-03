int sum [1000] = {1};
int len = 1;

void cheng (void) {
    int i = 0;
    for (i = 0; i < len; i++)
        sum[i] = sum[i] * 2;
    for (i = 0; i < len - 1; i++) {
        if (sum[i] >= 10) {
            sum[i] = sum[i] - 10;
            sum[i + 1]++;
        }
    }
    if (sum[len - 1] >= 10) {
        sum[i] = sum[i] - 10;
        sum[i + 1]++;
        len++;
    }
    return;
}

int main () {
    int n, i = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cheng ();
    for (i = len - 1; i >= 0; i--)
        cout << sum[i];
    return 0;
}

