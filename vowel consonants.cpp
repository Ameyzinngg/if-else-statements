#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character:";
    cin>> ch;
    if (ch=='a'|| ch=='A' || ch=='e'|| ch=='E'|| ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'|| ch=='u'|| ch=='U')
    {
        cout<<ch<<" is a vowel!";
    }
    else
    {
        cout<<ch<<" is a consonant!";
    }
}