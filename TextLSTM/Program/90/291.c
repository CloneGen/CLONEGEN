int num;
int make (int M, int N);
int work (int M, int j);

int main () {
    int M, N, t, k, i;
    cin >> t;
    for (i = 1; i <= t; i++) {
        k = 0;
        num = 0;
        cin >> M >> N;
        k = make (M, N);
        cout << k << endl;
    }
    return 0;
}

int make (int M, int N) {
    int j, k;
    if (M < N) {
        num = num + 1;
        return make (M, M -1);
    }
    else {
        for (j = N; j >= 1; j--) {
            num = work (M, j);
        }
        return num;
    }
}

int work (int M, int j) {
    if (j == 1) {
        num = num + 1;
        return num;
    }
    else
        return make (M -j, j);
}

