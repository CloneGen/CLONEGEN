int main () {
    int n, i;
    double a, b, per, per0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a >> b;
        if (i == 1) {
            per = b / a;
        }
        else {
            per0 = b / a;
        }
        if (i >= 2) {
            if (per - per0 > 0.05) {
                cout << "worse" << endl;
            }
            else {
                if (per - per0 < -0.05) {
                    cout << "better" << endl;
                }
                else {
                    cout << "same" << endl;
                }
            }
        }
    }
    return 0;
}

