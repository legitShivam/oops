#include <iostream>
using namespace std;

struct time{
    int hours;
    int minutes;
};

class Media{
    private:
        string title;
        string publication;
    public:
        virtual void read(){}
        virtual void show(){}
};
class Books: public Media{
    private:
        int pages;
    public:
        void read(){
            cout << "Reading a book" << endl;
        }

        void show(){
            cout << "Showing a book" << endl;
        }
};
class VideoTapes: public Media{
    private:
        struct time playing_time;
    public:
        void read(){
            cout << "Reading a video tape" << endl;
        }
        
        void show(){
            cout << "Showing a video tape" << endl;
        }
};
