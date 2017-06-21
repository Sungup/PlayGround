//
// Created by 文盛業 on 2017/06/21.
//

#ifndef __PLAYGROUND__FactoryException__
#define __PLAYGROUND__FactoryException__

#include <exception>
#include <cstdint>

#include <playground/CommonConst.h>

namespace PLAYGROUND {
  class FactoryException : public std::exception {
  public:
    typedef enum : uint8_t {
      NO_ITEM,
      DUPLICATED_NAME
    } ErrorCode;

  private:
    const ErrorCode code_;

  public:
    FactoryException(const ErrorCode code);
    ~FactoryException();

    const char* what() const throw();
  };

  inline
  FactoryException::FactoryException(const ErrorCode code)
    : code_(code)
  { }

  inline
  FactoryException::~FactoryException()
  { }

  inline const char*
  FactoryException::what() const throw()
  {
    switch (code_) {
      case NO_ITEM:         return "No items in this factory.";
      case DUPLICATED_NAME: return "That name is already exist.";
      default:              return "Unknown exception.";
    }
  }
}

#endif //__PLAYGROUND__FactoryException__
