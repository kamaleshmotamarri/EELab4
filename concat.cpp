#include <iostream>
using namespace std;

void append(char first[], int length1, char second[], int length2, char result[]) {

    for (int i = 0; i < length1; i++) {
    result[i] = first[i];
    }

    for (int i = 0; i < length2; i++) {
    result[length1 + i] = second[i];
    }

    result[length1 + length2] = '\0';
}

int main(){
    char first[] = "I am ";
    char second[] = {'i', 'r', 'o', 'n', 'm', 'a', 'n', '\0'}; 
    // Remember c-strings end in a '\0' (NULL) character so the above 
    // c-strings are 6 and 8 characters in length, respectively.
    char result[200];
    append(first, 5, second, 7, result); 
    cout << result << endl;
    return 0;
}
