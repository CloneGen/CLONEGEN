int main () {
    int a, a3, a5, a7;
    cin >> a;
    a3 = a % 3;
    a5 = a % 5;
    a7 = a % 7;
    if (a3 == 0)
        if (a5 == 0)
            if (a7 == 0)
                cout << "3 5 7" << endl;
            else
                cout << "3 5" << endl;
        else if (a7 == 0)
            cout << "3 7" << endl;
        else
            cout << "3" << endl;
    else if (a5 == 0)
        if (a7 == 0)
            cout << "5 7" << endl;
        else
            cout << "5" << endl;
    else if (a7 == 0)
        cout << "7" << endl;
    else
        cout << "n" << endl;
    return 0;
}

