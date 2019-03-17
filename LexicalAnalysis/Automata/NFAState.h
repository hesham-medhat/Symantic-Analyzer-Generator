#ifndef OUR_JAVA_COMPILER_NFASTATE_H
#define OUR_JAVA_COMPILER_NFASTATE_H


#include "State.h"

class NFAState : public State {
public:
    NFAState(Token& acceptedToken);
private:
    std::unordered_map<char, std::unordered_set<State&>> transitions;
};


#endif