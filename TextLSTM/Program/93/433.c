int main () {
    int a, i = 0, b [3] = {3, 5, 7};
    cin >> a;
    if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0)
        cout << "3" << " " << "5" << " " << "7";
    else if (a % 3 == 0 && a % 7 == 0 && a % 5 != 0)
        cout << "3" << " " << "7";
    else if (a % 3 != 0 && a % 5 == 0 && a % 7 == 0)
        cout << "5" << " " << "7";
    else if (a % 3 == 0 && a % 5 == 0 && a % 7 != 0)
        cout << "3" << " " << "5";
    else if (a % 3 == 0 && a % 5 != 0 && a % 7 != 0)
        cout << "3";
    else if (a % 3 != 0 && a % 5 == 0 && a % 7 != 0)
        cout << "5";
    else if (a % 3 != 0 && a % 5 != 0 && a % 7 == 0)
        cout << "7";
    else if (a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
        cout << "n";
    return 0;
}

