int main () {
    int i, num;
    cin >> num;
    if (num != 1) {
        for (i = 0; num != 1; i++) {
            if (num % 2 == 0) {
                cout << num << "/2=" << num / 2 << endl;
                num = num / 2;
            }
            else {
                cout << num << "*3+1=" << num * 3 + 1 << endl;
                num = num * 3 + 1;
            }
        }
        cout << "End";
    }
    else
        cout << "End" << endl;
    return 0;
}

