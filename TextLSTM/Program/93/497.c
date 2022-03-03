int main () {
    int num, a, b, c;
    cin >> num;
    a = num % 3;
    b = num % 5;
    c = num % 7;
    if (a && b && c)
        cout << "n" << endl;
    else if (a == 0)
        if (b == 0)
            if (c == 0)
                cout << "3 5 7" << endl;
            else
                cout << "3 5" << endl;
        else if (c == 0)
            cout << "3 7" << endl;
        else
            cout << "3" << endl;
    else if (b == 0)
        if (c == 0)
            cout << "5 7" << endl;
        else
            cout << "5" << endl;
    else if (c == 0)
        cout << "7" << endl;
    return 0;
}

