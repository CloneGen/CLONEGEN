int arr [100000];

int main () {
    int n, i;
    int current_pos = 0;
    int what_to_delect;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cin >> what_to_delect;
    for (i = 0; i < n; i++) {
        if (arr[i] != what_to_delect) {
            arr[current_pos] = arr[i];
            current_pos++;
        }
    }
    for (i = 0; i < current_pos - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[current_pos - 1] << endl;
    return 0;
}

