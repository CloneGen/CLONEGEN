int main () {
    char num [100], c;
    int s = 0, a, i, b = 0;
    cin.get (c);
    while (c != '\n') {
        num[s] = c;
        s++;
        cin.get (c);
    }
    if (s < 4) {
        if (s == 3)
            cout << (num[0] * 100 + (num[1] - '0') * 10 + num[2] - '0') / 13 << '\n' << (num[0] * 100 + (num[1] - '0') * 10 + num[2] - '0') % 13;
        else {
            if (s == 2)
                cout << ((num[0] - '0') * 10 + num[1] - '0') / 13 << '\n' << ((num[0] - '0') * 10 + num[1] - '0') % 13;
            else
                cout << (num[0] - '0') / 13 << '\n' << (num[0] - '0') % 13;
        }
    }
    else {
        a = num[0] - '0';
        for (i = 1; i < s - 2; i++) {
            if (b != 0 || (a * 10 + num[i] - '0') / 13 != 0) {
                b++;
                cout << (a * 10 + num[i] - '0') / 13;
            }
            a = (a * 10 + num[i] - '0') % 13;
        }
        if ((a * 100 + (num[s - 2] - '0') * 10 + num[s - 1] - '0') / 13 < 10)
            cout << 0;
        cout << (a * 100 + (num[s - 2] - '0') * 10 + num[s - 1] - '0') / 13 << endl;
        cout << (a * 100 + (num[s - 2] - '0') * 10 + num[s - 1] - '0') % 13;
    }
    return 0;
}

