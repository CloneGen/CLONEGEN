int main () {
    int m;
    cin >> m;
    if (m % 3 == 0 && m % 5 == 0 && m % 7 == 0)
        cout << "3" << " 5 " << "7" << endl;
    else if (m % 3 == 0 && m % 5 == 0 && m % 7 != 0)
        cout << "3" << " 5" << endl;
    else if (m % 3 == 0 && m % 5 != 0 && m % 7 == 0)
        cout << "3" << " 7" << endl;
    else if (m % 3 != 0 && m % 5 == 0 && m % 7 == 0)
        cout << "5" << " 7" << endl;
    else if (m % 3 == 0 && m % 5 != 0 && m % 7 != 0)
        cout << "3" << endl;
    else if (m % 3 != 0 && m % 5 == 0 && m % 7 != 0)
        cout << "5" << endl;
    else if (m % 3 != 0 && m % 5 != 0 && m % 7 == 0)
        cout << "7" << endl;
    else if (m % 3 != 0 && m % 5 != 0 && m % 7 != 0)
        cout << "n" << endl;
    return 0;
}

