int main () {
    int num;
    cin >> num;
    int sum = 0;
    if (num % 3 == 0) {
        cout << "3";
        sum++;
    }
    if (num % 5 == 0) {
        if (sum)
            cout << " ";
        cout << "5";
        sum++;
    }
    if (num % 7 == 0) {
        if (sum)
            cout << " ";
        cout << "7";
        sum++;
    }
    if (!sum)
        cout << "n";
    return 0;
}

