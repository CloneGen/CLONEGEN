int main () {
    int k;
    cin >> k;
    if (k % 3 == 0 && k % 5 == 0 && k % 7 == 0)
        cout << "3" << " " << "5" << " " << "7" << endl;
    else if (k % 3 == 0 && k % 5 == 0 && k % 7 != 0)
        cout << "3" << " " << "5" << endl;
    else if (k % 3 == 0 && k % 5 != 0 && k % 7 == 0)
        cout << "3" << " " << "7" << endl;
    else if (k % 3 != 0 && k % 5 == 0 && k % 7 == 0)
        cout << "5" << " " << "7" << endl;
    else if (k % 3 == 0 && k % 5 != 0 && k % 7 != 0)
        cout << "3" << endl;
    else if (k % 3 != 0 && k % 5 == 0 && k % 7 != 0)
        cout << "5" << endl;
    else if (k % 3 != 0 && k % 5 != 0 && k % 7 == 0)
        cout << "7" << endl;
    else
        cout << "n" << endl;
    return 0;
}

