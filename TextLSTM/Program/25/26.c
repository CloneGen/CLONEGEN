int main () {
    int N, i = 1;
    int result [40] = {0};
    cin >> N;
    result[0] = 1;
    while (i <= N) {
        for (int j = 0;
        j < 39; j++) {
            result[j] *= 2;
        }
        for (int k = 0;
        k < 39; k++) {
            if (result[k] >= 10) {
                result[k + 1] += result[k] / 10;
                result[k] %= 10;
            }
        }
        i++;
    }
    i = 39;
    while (result[i] == 0) {
        i--;
    }
    for (int k = i;
    k >= 0; k--)
        cout << result[k];
    return 0;
}

