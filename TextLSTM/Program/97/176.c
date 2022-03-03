int main () {
    int i, n, count = 0;
    cin >> n;
    while (n - 100 >= 0) {
        n -= 100;
        count++;
    }
    cout << count << endl;
    count = 0;
    while (n - 50 >= 0) {
        n -= 50;
        count++;
    }
    cout << count << endl;
    count = 0;
    while (n - 20 >= 0) {
        n -= 20;
        count++;
    }
    cout << count << endl;
    count = 0;
    while (n - 10 >= 0) {
        n -= 10;
        count++;
    }
    cout << count << endl;
    count = 0;
    while (n - 5 >= 0) {
        n -= 5;
        count++;
    }
    cout << count << endl;
    count = 0;
    while (n - 1 >= 0) {
        n -= 1;
        count++;
    }
    cout << count << endl;
    return 0;
}

