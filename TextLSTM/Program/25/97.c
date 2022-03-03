int main () {
    int N;
    int num [10000] = {0};
    int result;
    int k;
    cin >> N;
    if (N == 0)
        cout << 1;
    else {
        k = 0;
        num[0] = 1;
        for (int i = 1;
        i <= N; i++) {
            for (int j = 0;
            j <= k; j++) {
                num[j] *= 2;
            }
            for (int j = 0;
            j <= k; j++) {
                if (num[j] >= 10) {
                    num[j] -= 10;
                    num[j + 1]++;
                }
            }
            if (num[k + 1] != 0)
                k++;
        }
        for (int j = k;
        j >= 0; j--)
            cout << num[j];
    }
    return 0;
}

