int main () {
    int N;
    cin >> N;
    if (N % 3 == 0 && N % 5 == 0 && N % 7 == 0) {
        cout << "3" << " " << "5" << " " << "7" << endl;
    }
    else if (N % 3 != 0 && N % 5 == 0 && N % 7 == 0) {
        cout << "5" << " " << "7" << endl;
    }
    else if (N % 3 == 0 && N % 5 != 0 && N % 7 == 0) {
        cout << "3" << " " << "7" << endl;
    }
    else if (N % 3 == 0 && N % 5 == 0 && N % 7 != 0) {
        cout << "3" << " " << "5" << endl;
    }
    else if (N % 3 == 0 && N % 5 != 0 && N % 7 != 0) {
        cout << "3" << endl;
    }
    else if (N % 3 != 0 && N % 5 == 0 && N % 7 != 0) {
        cout << "5" << endl;
    }
    else if (N % 3 != 0 && N % 5 != 0 && N % 7 == 0) {
        cout << "7" << endl;
    }
    else {
        cout << "n" << endl;
    }
    return 0;
}

