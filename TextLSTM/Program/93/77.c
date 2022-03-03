int main () {
    int a, a1, a2, a3;
    cin >> a;
    a1 = a % 3;
    a2 = a % 5;
    a3 = a % 7;
    {
        if (a1 == 0) {
            if (a2 == 0) {
                if (a3 == 0)
                    cout << "3 5 7" << endl;
                else
                    cout << "3 5" << endl;
            }
            else {
                if (a3 == 0)
                    cout << "3 7" << endl;
                else
                    cout << "3" << endl;
            }
        }
        else if (a2 == 0) {
            if (a3 == 0)
                cout << "5 7" << endl;
            else
                cout << "5" << endl;
        }
        else if (a3 == 0)
            cout << "7" << endl;
        else
            cout << "n" << endl;
    }
    return 0;
}

