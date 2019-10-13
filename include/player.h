#ifndef PLAYER_H
#define PLAYER_H

#include <card.h>
#include <vector>

namespace DMAG {


class Player
{
private:
    std::vector<Card> cardsHand;
    std::vector<Card> cardsPlayed;
    int score;
    int victory_points;
    int victory_tokens; // conflict victory
    int defeat_tokens;  // conflict defeat
    int coins;
    int shields;
    bool wonder_built;
    // board?
    // wonder?

public:
    Player();
    void CalculateScore();
    int GetScore();
    void Discard(Card c);
    void Battle(Player p);
    int CalculateScientificScore(int gear, int tablet, int compass);

};
}
#endif // PLAYER_H
