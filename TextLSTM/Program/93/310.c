int main () {
    int k, a, b, c, m;
    cin >> k;
    if (k % 3 == 0)
        a = 0;
    else
        a = 1;
    if (k % 5 == 0)
        b = 0;
    else
        b = 2;
    if (k % 7 == 0)
        c = 0;
    else
        c = 4;
    m = a + b + c;
    switch (m) {
    case 0 :
        cout << "3" << " " << "5" << " " << "7" << endl;
        break;
    case 1 :
        cout << "5" << " " << "7" << endl;
        break;
    case 2 :
        cout << "3" << " " << "7" << endl;
        break;
    case 3 :
        cout << "7" << endl;
        break;
    case 4 :
        cout << "3" << " " << "5" << endl;
        break;
    case 5 :
        cout << "5" << endl;
        break;
    case 6 :
        cout << "3" << endl;
        break;
    default :
        cout << 'n' << endl;
        break;
    }
    return 0;
}

