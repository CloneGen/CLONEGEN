void jiaogu (int t);

int main () {
    int n;
    cin >> n;
    jiaogu (n);
    return 0;
}

void jiaogu (int t) {
    int p;
    if (t == 1)
        cout << "End" << endl;
    else {
        if (t % 2 == 0) {
            p = t;
            t = t / 2;
            cout << p << "/" << 2 << "=" << t << endl;
            jiaogu (t);
        }
        else {
            p = t;
            t = t * 3 + 1;
            cout << p << "*" << "3+1" << "=" << t << endl;
            jiaogu (t);
        }
    }
}

