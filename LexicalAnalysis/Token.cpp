#include "Token.h"

Token::Token(std::string& type)
: type(type) { }

std::string Token::getType() { return type; }
std::string Token::getLexeme() { return lexeme; }
