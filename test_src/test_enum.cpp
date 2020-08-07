#include "lqt_common.hpp"
#include "lqt_qt.hpp"


static lqt_Enumlist lqt_enum_list[] = {
  { 0, 0 },
};
void lqt_create_enums_test (lua_State *L) {
  lqtL_createenumlist(L, lqt_enum_list);  return;
}

