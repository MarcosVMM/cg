#ifndef GAMEDATA_HPP_
#define GAMEDATA_HPP_

#include <bitset>
#include "user.hpp"

enum class Input { Right, Left, Down, Up, Fire };
enum class State { Playing, GameOver, Win,Menu};

struct GameData {
  State m_state{State::Menu};
  std::bitset<5> m_input;  // [fire, up, down, left, right]

};


#endif