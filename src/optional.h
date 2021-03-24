#ifndef _OPTIONAL_H_
#define _OPTIONAL_H_

template<class T>
class Optional {
  bool has;
  T value;

public:
  Optional() : has(false), value() {
  }

  Optional(const T& val) : has(true), value(val) {
  }

  const T& operator*() const {
    return this->value;
  }
  T& operator*() {
    return this->value;
  }
  T* operator->() {
    return &this->value;
  }
  void operator=(const T& value) {
    this->value = value;
    this->has = true;
  }

  bool has_value() const {
    return has;
  }

  void reset() {
    this->value = T();
    this->has= false;
  }
};

#endif // _OPTIONAL_H_
