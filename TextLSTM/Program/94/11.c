int N = 0, i = 0, j = 0, shuru [500], jishu [500], mid = 0, p = 0;

int main () {
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> shuru[i];
    }
    j = 0;
    p = 0;
    for (i = 0; i < N; i++) {
        if ((shuru[i] % 2) == 1) {
            jishu[j] = shuru[i];
            j++;
            p++;
        }
        else
            continue;
    }
    for (i = 0; i < p - 1; i++) {
        for (j = 0; j < p - i - 1; j++) {
            if (jishu[j] >= jishu[j + 1]) {
                mid = jishu[j];
                jishu[j] = jishu[j + 1];
                jishu[j + 1] = mid;
            }
        }
    }
    cout << jishu[0];
    for (i = 1; i < p; i++)
        cout << ',' << jishu[i];
    return 0;
}

