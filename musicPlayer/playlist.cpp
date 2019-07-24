#include "playlist.h"

playlist::playlist(string n)
{
    this->PlaylistName=n;
}

//functions

string playlist::getPlaylistName(){
    return this->PlaylistName;
}

vector<song> playlist::getSongs() {
    vector<song> v;
    for (int i=0;i<(int)songs.size();i++) {
        v.push_back(this->songs[i]);
    }
    return v;
}

void playlist::addSong(song s) {
    this->songs.push_back(s);
}

void playlist::deleteSong(song s) {
    for (int i=0;i<(int)songs.size();i++)
        if (this->songs[i].getTitle()== s.getTitle() and this->songs[i].getSinger()== s.getSinger() and this->songs[i].getLink()== s.getLink())
            this->songs.erase(this->songs.begin()+i);

}

void playlist::playSong(song s) {  //asta o sa trebuiasca sa fie pusa cand apesi pe melodia din lista sa porneasca, in locul unde te duce cand dai addToSlots
    system(string("start " + s.getLink()).c_str());
}
