// Consider an example of book shop which sells books and video tapes. These two classes are inherited from base class called media. The media class has command data members such  as  title  and  publication.  The  book  class  has  data  members  for  storing  number  of pages in a book and tape class has playing time in a tape. Each class will have member functions  such  as  read  ()  and  show  ().  In  the  base  class,  these  members  have  to  be defined  as virtual  functions.  Write  a  program  to  models  the  class  hierarchy  for  book 
// shop and processes objects of these classes using pointers to base class.  Write the rules of virtual functions.9.Create two objects of class string s1and s2 as shown below:String S1= "Amity"String S2= "University"Implement the following operations and write the output of each operation:Copy the content of S1 to S3Find the substring Univ in S2Compare S1 and S210.Write a program to implement stack functions using templates.Open ended Question1.Write a program that input a file, which determines its length. Also count the number of word occurrence. For example:” that person is going to town to meet other person”. Here “to” and “person”-2times.2.Write a program to demonstrate exception handling.3.Write a program to implement a singleton class.

// C++ Programming Assignment Help
#include <iostream>
using namespace std;


class media{
    private:
        string title;
        string publication;
    public:
        virtual void read(){}
        virtual void show(){}
};

class books: public media{
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

class videoTape: public media{
    private:
        struct time{
            int hours;
            int minutes;
        };
        struct time playing_time;
    public:
        void read(){
            cout << "Reading a video tape" << endl;
        }
        
        void show(){
            cout << "Showing a video tape" << endl;
        }
};

