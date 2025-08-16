#include <iostream>
#include <string>
using namespace std;

int main() {
    string cardHolder;
    double amount;
    string status, otp;
    char refund;

    cout << "=== VISA & Mastercard Transaction Testing ===" << endl;

    // Input user
    cout << "Enter Cardholder Name: ";
    getline(cin, cardHolder);

    cout << "Enter Transaction Amount: $";
    cin >> amount;
    cin.ignore(); // clear input buffer

    // Authorization
    cout << "\n[Step 1] Authorization..." << endl;
    status = "Approved"; // bisa diubah "Rejected"
    cout << "Authorization Status: " << status << endl;

    if(status == "Approved") {
        // Optional 3D Secure Authentication
        cout << "\n[Step 2] 3D Secure Authentication (OTP testing 1234)" << endl;
        cout << "Enter OTP: ";
        cin >> otp;

        if(otp == "1234") {
            cout << "OTP Verified ✅" << endl;

            // Settlement
            cout << "\n[Step 3] Settlement in progress..." << endl;
            cout << "Funds transferred to Merchant." << endl;
            cout << "Payment Completed ✅" << endl;

            // Optional Refund
            cout << "\nDo you want to refund this payment? (y/n): ";
            cin >> refund;

            if(refund == 'y' || refund == 'Y') {
                cout << "Processing Refund..." << endl;
                cout << "Funds returned to Cardholder." << endl;
                cout << "Refund Completed ✅" << endl;
            } else {
                cout << "No refund processed." << endl;
            }

        } else {
            cout << "OTP Invalid ❌" << endl;
            cout << "Payment Failed ❌" << endl;
        }

    } else {
        cout << "Payment Failed ❌" << endl;
    }

    cout << "\n=== Transaction Testing End ===" << endl;
    return 0;
}
