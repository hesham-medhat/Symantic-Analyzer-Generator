#include "NonTerminalSymbol.h"

NonTerminalSymbol::NonTerminalSymbol(std::string name) : GrammarSymbol
(std::move(name)) {}


GrammarSymbol::Type NonTerminalSymbol::getType() {
    return GrammarSymbol::Type::NonTerminal;
}

void NonTerminalSymbol::addProduction(std::shared_ptr<TerminalSymbol> input,
                                      GrammarSymbol::Production newProduction) {
    /* Update hasEpsilonProduction if epsilon */
    if (newProduction.size() == 1) {
        std::shared_ptr<GrammarSymbol> singleTerminal = *newProduction.begin();
        std::string name = singleTerminal->getName();
        if (name.empty()) {// Epsilon transition
            hasEpsilonProduction = true;
        }
    }

    productions[input] = newProduction;// Add production to map
}
