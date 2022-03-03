int main () {
    int n;
    cin >> n;
    double sour1 = 0, sour2 = 0;
    double sourper, per [1000];
    double patient [1000], healthy [1000];
    cin >> sour1 >> sour2;
    sourper = sour2 / sour1;
    for (int i = 0;
    i < n - 1; i++) {
        cin >> patient[i] >> healthy[i];
        per[i] = healthy[i] / patient[i];
    }
    for (int j = 0;
    j < n - 1; j++) {
        if (per[j] - sourper > 0.05)
            cout << "better" << endl;
        else if (sourper - per[j] > 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

