int main () {
    int i;
    cin >> i;
    if (i % 3 == 0) {
        if (i % 5 == 0) {
            if (i % 7 == 0) {
                cout << "3 5 7" << endl;
            }
            else
                cout << "3 5" << endl;
        }
        else if (i % 7 == 0)
            cout << "3 7" << endl;
        else
            cout << "3" << endl;
    }
    else if (i % 5 == 0) {
        if (i % 7 == 0) {
            cout << "5 7" << endl;
        }
        else
            cout << "5" << endl;
    }
    else if (i % 7 == 0)
        cout << "7" << endl;
    else
        cout << "n" << endl;
    return 0;
}

