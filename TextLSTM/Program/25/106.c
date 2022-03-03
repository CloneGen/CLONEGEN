int result [101] = {0};
void yiwei (int);

int main () {
    int n;
    result[100] = 1;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        for (int j = 0;
        j < 101; j++) {
            result[j] = result[j] * 2;
        }
        if (i % 10 == 0) {
            yiwei (100);
        }
    }
    yiwei (100);
    int *p = result;
    while (*p == 0) {
        p++;
    }
    for (; p < result + 101; p++) {
        cout << *p;
    }
    cout << endl;
    return 0;
}

void yiwei (int n) {
    if (n == 0) {
        return;
    }
    if (result[n] >= 10) {
        int k = result[n] % 10;
        result[n - 1] += (int) (result[n] / 10);
        result[n] = k;
    }
    yiwei (n - 1);
    return;
}

