//
// Created by Antoine Guespin on 13/12/2022.
//

#ifndef ANT_SIMULATION_LARVASTATE_H
#define ANT_SIMULATION_LARVASTATE_H


#include "../Ant.h"

namespace AntState {

    class LarvaState : public AntState  {
    public:
        EnumAntState getState() final;
        void update() final;

    };

} // AntState

#endif //ANT_SIMULATION_LARVASTATE_H
