int main () {
    int num;
    cin >> num;
    if (num == 1)
        cout << "End" << endl;
    else if (num != 1) {
        do {
            if (num % 2 == 0) {
                num = num / 2;
                cout << num * 2 << "/2=" << num << endl;
            }
            else if (num % 2 == 1) {
                num = num * 3 + 1;
                cout << (num - 1) / 3 << "*3+1=" << num << endl;
            }
        }
        while (num != 1);
        cout << "End" << endl;
    }
    return 0;
}

