int sum = 0;

void count (int N, int i) {
    if (N == 1)
        sum++;
    while (i <= N) {
        if (N % i == 0)
            count (N / i, i);
        i++;
    }
    return;
}

int main () {
    int T = 0;
    cin >> T;
    while (T--) {
        int N = 0;
        cin >> N;
        int i = 2, total = 1;
        while (i <= N / 2) {
            if (N % i == 0) {
                sum = 0;
                count (N / i, i);
                total += sum;
            }
            i++;
        }
        cout << total << endl;
    }
    return 0;
}

