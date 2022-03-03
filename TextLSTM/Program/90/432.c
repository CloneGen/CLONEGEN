int main () {
    int n = 0, plate = 0, apple = 0;
    int putapple (int, int);
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> apple >> plate;
        if (plate <= 0) {
            cout << "Error!" << endl;
            continue;
        }
        cout << putapple (apple, plate) << endl;
    }
    return 0;
}

int putapple (int apple, int plate) {
    if (apple < 0)
        return 0;
    else if (plate == 1)
        return 1;
    else
        return putapple (apple - plate, plate) + putapple (apple, plate - 1);
}

