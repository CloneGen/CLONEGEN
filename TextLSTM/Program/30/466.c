int main () {
    int n = 0, i = 0, sum = 0;
    do {
        cin >> n;
        if (n >= 100 || n <= 0) {
            cout << "wrong!again:" << endl;
            continue;
        }
        for (i = 1; i <= n; i++) {
            if (i < 10 && i != 7)
                sum = sum + i * i;
            else {
                if (i % 7 != 0 && i % 10 != 7 && i / 10 != 7)
                    sum = sum + i * i;
            }
        }
        break;
    }
    while (1);
    cout << sum;
    return 0;
}

