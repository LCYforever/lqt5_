//typedef int* p_int;
QCborValue(QCborArray &&a);
void prepend(int &value) const & {}
void prepend(QCborValue &&value) { insert(0, std::move(value)); }
