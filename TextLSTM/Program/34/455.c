void Try (int x) {
    if (x != 1) {
        if (x % 2 == 0) {
            cout << x << "/2=" << x / 2 << endl;
            x /= 2;
        }
        else if (x % 2 != 0) {
            cout << x << "*3+1=" << x * 3 + 1 << endl;
            x *= 3;
            x++;
        }
        Try (x);
    }
    else if (x == 1) {
        cout << "End" << endl;
        return;
    }
}

int main () {
    int x;
    cin >> x;
    Try (x);
    return 0;
}

