int main () {
    int n, i;
    cin >> n;
    struct  Test {
        double total;
        double eff;
        double rate;
    }
    test [100];
    for (i = 0; i < n; i++) {
        cin >> test[i].total >> test[i].eff;
        test[i].rate = test[i].eff / test[i].total;
    }
    for (i = 1; i < n; i++) {
        if (test[i].rate - test[0].rate > 0.05)
            cout << "better" << endl;
        else if (test[0].rate - test[i].rate > 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

