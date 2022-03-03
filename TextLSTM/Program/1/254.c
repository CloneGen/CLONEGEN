int means (int, int);

int main () {
    int n, i = 0;
    cin >> n;
    while (i < n) {
        int a;
        cin >> a;
        cout << means (a, a) << endl;
        i++;
    }
    return 0;
}

int means (int a, int b) {
    int i, sum = 0;
    if (a != 1) {
        for (i = b; i >= 2; i--) {
            if (a % i == 0) {
                sum = sum + means (a / i, i);
            }
        }
        return sum;
    }
    else {
        return 1;
    }
}

