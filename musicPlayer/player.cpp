#include "player.h"

player::player()
{

}

void player::addPlaylist(playlist p) { //aici playlistul trebuie sa aiba nume; relatie e de asociere
    this->allPlaylists.push_back(p);
}

void player::deletePlaylist(playlist p) {
    for (int i=0;i<(int) this->allPlaylists.size();i++)
        if(p.getPlaylistName() == this->allPlaylists[i].getPlaylistName())
            this->allPlaylists.erase(this->allPlaylists.begin()+i);
}

vector<song> player::searchByTitle(string title) { //functia returneaza un vector cu songs ce au acelasi titlu
    vector<song> v;
    for (int i=0;i<(int)this->allPlaylists.size();i++)
        for(int j=0;j<(int)this->allPlaylists[i].getSongs().size();j++)
            if(this->allPlaylists[i].getSongs()[j].getTitle()==title)
                v.push_back(allPlaylists[i].getSongs()[j]);

     return v;
}
