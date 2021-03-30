// Inmports
#include <iostream>

// Set up name spaces
using namespace std;

// Main function
int main(){
    char ch;
    int lineCnt=0, charCnt=0, tabCnt=0, blankCnt=0;

    while(cin.get(ch)){
        switch(ch){
            case '\t':
                ++tabCnt;
                break;
            case ' ':
                ++blankCnt;
                break;
            case '\n':
                ++lineCnt;
                break;
            default:
                ++charCnt;
                break;
        }
    } 

    cout << "# of Lines: " << lineCnt 
         << "\n# of Characters: " << charCnt
         << "\n# of Tabs: " << tabCnt
         << "\n# of Blanks: " << blankCnt << endl;
    return 0;
}