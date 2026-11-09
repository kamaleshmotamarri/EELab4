#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){

    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <string>" << endl;
        return 1;
    }

    string s = argv[1];
    char temp;

    if (s.length() > 1){
        temp = s[0];
        s[0] = s[s.length() - 1];
        s[s.length() - 1] = temp;
    }
    cout << s << endl;
    
    return 0;

}
