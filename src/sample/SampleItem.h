//
// Created by 文盛業 on 2017/06/21.
//

#ifndef __PLAYGROUND__SampleItem__
#define __PLAYGROUND__SampleItem__

#include <playground/RunItem.h>

namespace PLAYGROUND {
  class SampleItem : public RunItem {
  public:
    SampleItem();
    virtual ~SampleItem() final;

    virtual int run(int argc, char* argv[]) final;
  };
}
#endif //__PLAYGROUND__SampleItem__
