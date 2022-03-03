int f (int a, int b) {
    if (a == b)
        return a;
    if (a > b) {
        return f (a % 2 == 0 ? a / 2 : (a - 1) / 2, b);
    }
    else {
        return f (a, b % 2 == 0 ? b / 2 : (b - 1) / 2);
    }
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << f (a, b) << endl;
    return 0;
}

