#include "SemanticAction.h"

SemanticAction::SemanticAction()
: GrammarSymbol(RESERVED_ACTION_NAME){}


GrammarSymbol::Type SemanticAction::getType() {
    return GrammarSymbol::Type::SemanticAction;
}

void SemanticAction::setSemanticAnalyzer(std::shared_ptr<SemanticAnalyzer>
        semanticAnalyzerIn) {
    semanticAnalyzer = std::move(semanticAnalyzerIn);
}

void SemanticAction::execute(std::string input) {
    semanticAnalyzer->execute(std::move(input));
}
