#include <iostream>
#include <string>
using namespace std;

int main()
{
   
    string input{};
    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "vfxblitzjrphdknowsguyqmaceVFXBLITZJRPHDKNOWSGUYQMACE" };

    cout << "Enter Message: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); ++i) {
        for (int c = 0; c < alphabet.length(); ++c) {
            if (input.at(i) == alphabet.at(c)) {
                input.at(i) = key.at(c);
                break;

            }
        }
    }

cout << "Encrypted Message: " << input << endl;
  
}