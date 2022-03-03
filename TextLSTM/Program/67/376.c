double former;

void judge (double a, double b) {
    double improve;
    improve = b / a;
    if (improve - former > 0.05)
        cout << "better" << endl;
    else if (former - improve > 0.05)
        cout << "worse" << endl;
    else
        cout << "same" << endl;
}

int main (void) {
    int n;
    double Fa, Fb, Ia, Ib;
    cin >> n >> Fa >> Fb;
    former = Fb / Fa;
    while (n > 1) {
        cin >> Ia >> Ib;
        judge (Ia, Ib);
        n--;
    }
    return 0;
}

