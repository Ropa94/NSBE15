#include <iostream>
#include <queue>
#include <string>


using namespace std;

int main ()

{
    queue <string> username;        //declare the queue
    while (!=NULL)
    {
        cout << "What are the names you want in the queue?" <<endl;
        string what;
        cin >> what;
        username.push(what);
    }
    cout << "There are currently " << username.size() << "people in the queue" <<endl;
    while (!username.empty())
    {
        username.pop();
    }
    return 0;
}
