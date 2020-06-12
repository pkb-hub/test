#include <iostream>
#include <vector>
#include <string>
#include<thread>
using namespace std;

class functor{
public:
void operator()(){
    cout<<"Printing from thread: "<<this_thread::get_id()<<endl;
    cout<<"  this is function object"<<endl;
}
};

int main()
{
    functor f;
    thread t1(f);
    t1.join();
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};
    cout<<"Printing from thread: "<<this_thread::get_id()<<endl;
    for (const string& word : msg)
    {

        cout << word << " ";
    }
    cout << endl;
    return 0;
}
