#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Nhap so dinh cua do thi: ";
    cin >> n;

    //  Tao seed cho rand()
    srand(time(NULL));

    // Mo file Graph.TXT de ghi
    ofstream outfile("Graph.TXT");

    // Ghi so dinh vao dong dau tien
    outfile << n << endl;

    // Tao du lieu ngau nhien va ghi vao file
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Tao trong so ngau nhien trong khoang tu 1 den 10
            double weight = (double) rand() /RAND_MAX;

            // Ghi trong so vao file
            outfile <<fixed<<setprecision(2)<< weight << " ";
        }
        outfile << endl;
    }

    // Dong file sau khi ghi xong
    outfile.close();

    cout << "Da ghi du lieu vao tap tin Graph.TXT" << endl;

    return 0;
}