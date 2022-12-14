//
// Created by Antoine Guespin on 14/12/2022.
//

#ifndef ANT_SIMULATION_ANTSCOUT_H
#define ANT_SIMULATION_ANTSCOUT_H

#include "Ant.h"

namespace AntEntities {

    class AntScout: public Ant {
        AntType getAntType() override;
        void update() override;
        std::vector<AntSimulator::AntAction *> * getActionList() override;

    public:
        AntScout();

        AntWorld::Direction chooseRandomDirection();
    };

} // Ant

#endif //ANT_SIMULATION_ANTSCOUT_H
