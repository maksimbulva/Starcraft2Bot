#include <iostream>

#include <sc2api/sc2_api.h>

#include "Bot.h"

using namespace Starcraft2Bot;

int main(int argc, char* argv[]) {
    sc2::Coordinator coordinator;
    coordinator.LoadSettings(argc, argv);

    Bot bot;

    std::vector<sc2::PlayerSetup> participants;
    participants.push_back(
        sc2::CreateParticipant(sc2::Race::Protoss, &bot)
    );
    participants.push_back(
        sc2::CreateComputer(sc2::Race::Zerg, sc2::Difficulty::VeryEasy)
    );

    coordinator.SetParticipants(participants);
    coordinator.LaunchStarcraft();
    coordinator.StartGame(sc2::kMapBelShirVestigeLE);

    while (coordinator.Update()) {
        // No op
    }

    return 0;
}
