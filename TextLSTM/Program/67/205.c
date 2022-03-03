int main () {
    int n;
    cin >> n;
    int total, eff;
    cin >> total >> eff;
    double e1;
    e1 = ((double) (eff)) / ((double) (total));
    int total2, eff2;
    double e2;
    for (int i = 0;
    i < n - 1; i++) {
        cin >> total2 >> eff2;
        e2 = ((double) (eff2) / (double) (total2));
        if (e2 - e1 > 0.05)
            cout << "better" << endl;
        else {
            if (e1 - e2 > 0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
        }
    }
    return 0;
}

