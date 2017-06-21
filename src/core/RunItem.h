//
// Created by 文盛業 on 2017/06/21.
//

#ifndef __PLAYGROUND__RunItem__
#define __PLAYGROUND__RunItem__

#include <iostream>
#include <memory>

#include <playground/CommonConst.h>

namespace PLAYGROUND {
#define SIGNUP_ITEM(ITEM) ITEM item;

  class RunItem;

  typedef std::shared_ptr<RunItem> RunItemPtr;

  class RunItem {
  protected:
    std::ostream& out;
    std::ostream& err;

    RunItem(const char* name);
  public:
    virtual ~RunItem();

    virtual int run(int argc, char* argv[]) = 0;
  };
}

#endif //__PLAYGROUND__RunItem__
