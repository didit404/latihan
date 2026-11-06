#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nilai_siswa = {60, 85, 40, 90, 75, 50, 95};

    // Mencari nilai 85
    auto it = find(nilai_siswa.begin(), nilai_siswa.end(), 85);

    if (it != nilai_siswa.end()) {
        int posisi_85 = distance(nilai_siswa.begin(), it);
        cout << "Index nilai 85 adalah: " << posisi_85 << endl;
    }

    // Memfilter nilai yang lebih dari 75
    vector<int> hasil_filter;

    for (int x : nilai_siswa) {
        if (x > 75) {
            hasil_filter.push_back(x);
        }
    }

    cout << "Hasil filter (nilai > 75): ";

    for (int x : hasil_filter) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}