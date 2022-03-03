int main () {
    int m;
    cin >> m;
    if ((m % 3 == 0) && (m % 5 == 0) && (m % 7 == 0))
        cout << "3 5 7" << endl;
    else if (m % 3 == 0)
        if (m % 5 == 0)
            cout << "3 5" << endl;
        else if (m % 7 == 0)
            cout << "3 7" << endl;
        else
            cout << "3" << endl;
    else if (m % 5 == 0)
        if (m % 7 == 0)
            cout << "5 7" << endl;
        else
            cout << "5" << endl;
    else if (m % 7 == 0)
        cout << "7" << endl;
    else
        cout << "n" << endl;
    return 0;
}

