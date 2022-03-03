int main () {
    int num;
    cin >> num;
    while (num != 1) {
        if (num % 2 == 0) {
            cout << num << "/2=" << num / 2 << "\n";
            num = num / 2;
        }
        else {
            cout << num << "*3+1=" << num * 3 + 1 << "\n";
            num = num * 3 + 1;
        }
    }
    cout << "End" << "\n";
    return 0;
}

