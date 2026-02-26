#include <iostream>
#include <string>
using namespace std;

struct Player {
    string name;
    int runs;
    int wickets;
    double strikeRate;
};

int main() {
    Player players[3];
cout<<"2410997187\n";
cout<<"khushi\n";
    // Accept details for 3 players
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Player " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> players[i].name;
        cout << "Runs scored: ";
        cin >> players[i].runs;
        cout << "Wickets taken: ";
        cin >> players[i].wickets;
        cout << "Strike rate: ";
        cin >> players[i].strikeRate;
    }

    // Find the player with the highest strike rate
    int highestStrikeRateIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (players[i].strikeRate > players[highestStrikeRateIndex].strikeRate) {
            highestStrikeRateIndex = i;
        }
    }

    // Display the player with the highest strike rate
    cout << "\nPlayer with the highest strike rate:\n";
    cout << "Name: " << players[highestStrikeRateIndex].name << "\n";
    cout << "Runs scored: " << players[highestStrikeRateIndex].runs << "\n";
    cout << "Wickets taken: " << players[highestStrikeRateIndex].wickets << "\n";
    cout << "Strike rate: " << players[highestStrikeRateIndex].strikeRate << "\n";

    return 0;
}

