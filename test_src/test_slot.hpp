#ifndef LQT_SLOT_test
#define LQT_SLOT_test
#include "lqt_common.hpp"
#include "lqt_qt.hpp"


class LqtSlotAcceptor : public QObject {
  Q_OBJECT
  lua_State *L;
  public:
  LqtSlotAcceptor(lua_State *l, QObject *p=NULL) : QObject(p), L(l) { setObjectName("test"); lqtL_register(L, this, NULL); }
  virtual ~LqtSlotAcceptor() { lqtL_unregister(L, this, NULL); }
  public slots:
};


extern LqtSlotAcceptor *lqtSlotAcceptor_test;
#endif
