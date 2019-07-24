#ifndef SONG_H
#define SONG_H
#include <string>
using namespace std;


class song
{
private:
    string title;
    string singer;
    string link;
public:
    song(string, string, string);

    //getters
    string getTitle();
    string getSinger();
    string getLink();


    //setters
    void setTitle(string);
    void setSinger(string);
    void setLink(string);
};

#endif // SONG_H
