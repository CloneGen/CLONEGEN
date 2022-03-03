int kind (int num, int min);

int main () {
    int n;
    int i;
    int num;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> num;
        cout << kind (num, 2) << endl;
    }
    return 0;
}

int kind (int num, int min) {
    if (num < min) {
        return 0;
    }
    int k = 1;
    int i;
    for (i = min; i <= num; i++) {
        if (num % i == 0) {
            k = k + kind (num / i, i);
        }
    }
    return k;
}

