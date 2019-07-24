#ifndef PLAYER_H
#define PLAYER_H
#include "playlist.h"


class player
{
private:
    vector<playlist> allPlaylists;
public:
    player();

    void addPlaylist(playlist);
    void deletePlaylist(playlist);
    vector<song> searchByTitle(string);
};

#endif // PLAYER_H
