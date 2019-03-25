/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2019 03:12:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PLAYLISTNODE_INC__
#define  PLAYLISTNODE_INC__
typedef struct PlaylistNode
{
    char uniqueID[50];
    char songName[50];
    char artistName[50];
    int songLength;
    struct PlaylistNode* nextNodePtr;



}PlaylistNode;

void CreatePlaylistNode(PlaylistNode* node, char ID[], char name[],
        char artist[], int length, PlaylistNode* next);

void InsertPlaylistNodeAfter(PlaylistNode* node, PlaylistNode* next);

void SetNextPlaylistNode(PlaylistNode* node, PlaylistNode* next);

PlaylistNode* GetNextPlaylistNode(PlaylistNode* node);

void PrintPlaylistNode(PlaylistNode* node);


#endif /* ----- #ifndef PLAYLISTNODE__INC__ ----- */

