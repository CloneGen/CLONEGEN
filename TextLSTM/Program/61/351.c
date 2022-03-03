int fab (int num);

int main () {
    int n, i;
    int num;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> num;
        cout << fab (num) << endl;
    }
    return 0;
}

int fab (int num) {
    if (num == 1) {
        return 1;
    }
    if (num == 2) {
        return 1;
    }
    if (num != 1 && num != 2) {
        return fab (num - 1) + fab (num - 2);
    }
}

