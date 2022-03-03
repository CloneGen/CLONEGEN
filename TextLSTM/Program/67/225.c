double Rate (int tot, int eff) {
    double rate;
    rate = (double) eff / (double) tot;
    return (rate);
}

int main () {
    int n, i, tot, eff;
    double rate, rate0;
    cin >> n;
    cin >> tot >> eff;
    rate0 = Rate (tot, eff);
    for (i = 1; i < n; i++) {
        cin >> tot >> eff;
        rate = Rate (tot, eff);
        if (rate > rate0 + 0.05)
            cout << "better" << endl;
        else if (rate < rate0 - 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

