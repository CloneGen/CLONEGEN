int main () {
    int x, a, b, c;
    cin >> x;
    if (x % 105 == 0)
        cout << "3 5 7";
    else if (x % 15 == 0)
        cout << "3 5";
    else if (x % 35 == 0)
        cout << "5 7";
    else if (x % 21 == 0)
        cout << "3 7";
    else if (x % 3 == 0)
        cout << "3";
    else if (x % 5 == 0)
        cout << "5";
    else if (x % 7 == 0)
        cout << "7";
    else
        cout << "n";
    return 0;
}

