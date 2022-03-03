int sol (int apple, int plate) {
    int solution;
    if (plate == 1 || apple == 0)
        solution = 1;
    else if (apple >= plate) {
        solution = sol (apple - plate, plate) + sol (apple, plate - 1);
    }
    else if (apple < plate)
        solution = sol (apple, plate - 1);
    return solution;
}

int main () {
    int n, apple, plate, solution;
    cin >> n;
    for (; n > 0; n--) {
        cin >> apple >> plate;
        solution = sol (apple, plate);
        cout << solution << endl;
    }
    return 0;
}

