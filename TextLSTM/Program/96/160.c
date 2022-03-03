int main () {
    char a;
    int k, cnt = 0, flag = 1;
    while (cin >> a) {
        cnt = cnt * 10 + (a - '0');
        k = cnt / 13;
        if (k) {
            cout << k;
            flag = 0;
        }
        else if (!flag)
            cout << "0";
        cnt = cnt % 13;
    }
    if (flag)
        cout << "0";
    cout << endl << cnt;
    return 0;
}

