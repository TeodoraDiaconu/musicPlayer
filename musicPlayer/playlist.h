#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "song.h"
#include <string>
#include <vector>

using namespace std;


class playlist
{
private:
    vector<song> songs; //lista cu melodii din playlist-ul creat
    string PlaylistName;
public:
    playlist(string);

    //geters
    string getPlaylistName();
    vector<song> getSongs();

    void addSong(song);
    void deleteSong(song);
    void playSong(song);

};

#endif // PLAYLIST_H
