#include <iostream>
using namespace std;

int main()
{
    int tryNum = 0;
    string wordList[10];
    string word = "";
    int length = 0;
    
    cin>>tryNum;
    for(int i=0;i<tryNum;i++)
    {
        cin>>word;
        wordList[i] = word;
    }
    
    for(int i=0; i<tryNum; i++)
    {
        int length = wordList[i].length();
        cout<<wordList[i][0]<<wordList[i][length-1]<<'\n';
    }
    
    return 0;
}