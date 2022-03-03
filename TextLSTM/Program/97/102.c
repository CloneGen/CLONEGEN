int main () {
    int total, counter = 0;
    cin >> total;
    while (total >= 100) {
        total = total - 100;
        counter++;
    }
    cout << counter << endl;
    counter = 0;
    while (total >= 50) {
        total = total - 50;
        counter++;
    }
    cout << counter << endl;
    counter = 0;
    while (total >= 20) {
        total = total - 20;
        counter++;
    }
    cout << counter << endl;
    counter = 0;
    while (total >= 10) {
        total = total - 10;
        counter++;
    }
    cout << counter << endl;
    counter = 0;
    while (total >= 5) {
        total = total - 5;
        counter++;
    }
    cout << counter << endl;
    cout << total << endl;
    return 0;
}

