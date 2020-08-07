#include "lqt_common.hpp"
#include "test_slot.hpp"


static luaL_Reg lqt_globals_test[] = {
  { 0, 0 },
};

void lqt_create_globals_test (lua_State *L) {
  lqtL_createglobals(L, lqt_globals_test);  return;
}

