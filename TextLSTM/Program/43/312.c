int main () {
    int m;
    cin >> m;
    int n1 = 0, n2 = 0;
    for (n1 = 3; n1 <= (m / 2); n1 += 2) {
        int k = 0;
        for (k = 2; k <= sqrt (n1); k++) {
            if (n1 % k == 0)
                break;
        }
        if (k > sqrt (n1))
            n2 = m - n1;
        else
            continue;
        for (k = 2; k <= sqrt (n2); k++) {
            if (n2 % k == 0)
                break;
        }
        if (k > sqrt (n2))
            cout << n1 << " " << n2 << endl;
    }
    return 0;
}

