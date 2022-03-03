int main () {
    int n, shou, shu, x, t = 0, y = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> shou >> shu;
        if ((shou >= 90) && (shou <= 140) && (shu >= 60) && (shu <= 90))
            t = t + 1;
        if ((shou < 90) || (shou > 140) || (shu < 60) || (shu > 90)) {
            x = t;
            t = 0;
            if (x > y)
                y = x;
        }
    }
    if (t > y)
        cout << t << endl;
    else
        cout << y << endl;
    return 0;
}

