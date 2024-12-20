/*
* File:     names.h
* Purpose:  Provide player names for CSE 13S, Fall 2023, Assignment 1
*/

/*
* DO NOT EDIT THIS FILE
*/

const char *player_name[] = {
    "Ada Lovelace",
    "Margaret Hamilton",
    "Katherine Johnson",
    "Joy Buolamwini",
    "Grace Hopper",
    "Adele Goldberg",
    "Annie Easley",
    "Jeannette Wing",
    "Mary Kenneth Keller",
    "Megan Smith",
    "Radia Perlman"
};

#define MAX_PLAYERS ((int) (sizeof(player_name) / sizeof(player_name[0])))
