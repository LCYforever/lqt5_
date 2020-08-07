
#include "lqt_common.hpp"
#include "test_slot.hpp"


void lqt_create_enums_test (lua_State *);
void lqt_create_globals_test (lua_State *);
extern "C" LQT_EXPORT int luaopen_test (lua_State *L) {
	lua_newtable(L);
	lqt_create_enums_test(L);
	lqt_create_globals_test(L);
	int top = lua_gettop(L);
	lqtL_register_super(L);
	lqtSlotAcceptor_test = new LqtSlotAcceptor(L);
	lua_settop(L, top);
	return 1;
}
