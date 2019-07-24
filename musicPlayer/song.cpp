#include "song.h"

song::song(string t, string s, string l)
{
    this->title=t;
    this->singer=s;
    this->link=l;
}

//getters
string song::getTitle() {
    return this->title;
}

string song::getSinger() {
    return this->singer;
}

//setters
void song::setTitle(string t) {
    this->title=t;
}

void song::setSinger(string s) {
    this->singer=s;
}

void song::setLink(string l) {
    this->link=l;
}
