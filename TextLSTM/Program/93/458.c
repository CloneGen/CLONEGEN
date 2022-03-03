int main () {
    int n, s;
    cin >> n;
    s = 0;
    if (n % 3 == 0) {
        s = s + 3;
    }
    if (n % 5 == 0) {
        s = s + 5;
    }
    if (n % 7 == 0) {
        s = s + 7;
    }
    switch (s) {
    case 15 :
        cout << "3 5 7" << endl;
        break;
    case 12 :
        cout << "5 7" << endl;
        break;
    case 10 :
        cout << "3 7" << endl;
        break;
    case 8 :
        cout << "3 5" << endl;
        break;
    case 7 :
        cout << "7" << endl;
        break;
    case 5 :
        cout << "5" << endl;
        break;
    case 3 :
        cout << "3" << endl;
        break;
    default :
        cout << "n" << endl;
        break;
    }
    return 0;
}

