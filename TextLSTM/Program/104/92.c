int f (int x) {
    return x / 2;
}

int main () {
    int a, b;
    cin >> a >> b;
    while (1) {
        if (a > b)
            a = f (a);
        else if (b > a)
            b = f (b);
        else if (a == b) {
            cout << a << endl;
            break;
        }
    }
    return 0;
}

