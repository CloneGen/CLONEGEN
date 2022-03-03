int main () {
    int a, b, c, z;
    cin >> z;
    a = z % 3 == 0;
    b = z % 5 == 0;
    c = z % 7 == 0;
    if (a && b && c)
        cout << "3 5 7" << endl;
    else if (a && b)
        cout << "3 5" << endl;
    else if (a && c)
        cout << "3 7" << endl;
    else if (b && c)
        cout << "5 7" << endl;
    else if (a)
        cout << "3" << endl;
    else if (b)
        cout << "5" << endl;
    else if (c)
        cout << "7" << endl;
    else
        cout << "n" << endl;
    return 0;
}

