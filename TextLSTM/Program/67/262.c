int main () {
    int n;
    cin >> n;
    double all0, p0;
    double x;
    cin >> all0 >> p0;
    x = 100 * p0 / all0;
    for (int i = 1;
    i <= n - 1; i++) {
        double all, p;
        cin >> all >> p;
        double y;
        y = 100 * p / all;
        if (y - x > 5) {
            cout << "better" << endl;
        }
        else if (x - y > 5) {
            cout << "worse" << endl;
        }
        else {
            cout << "same" << endl;
        }
    }
    return 0;
}

