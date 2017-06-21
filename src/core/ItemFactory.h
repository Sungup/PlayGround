//
// Created by 文盛業 on 2017/06/21.
//

#ifndef __PLAYGROUND__ItemFactory__
#define __PLAYGROUND__ItemFactory__

#include <memory>
#include <unordered_map>
#include <vector>

#include <playground/RunItem.h>

namespace PLAYGROUND {
  class ItemFactory {
    typedef std::unordered_map<std::string, RunItem&> RunItems;
    typedef std::pair<std::string, RunItem&>          RunItemPair;
    typedef std::vector<std::string>                  Keys;

  private:
    static ItemFactory INSTANCE_;

    Keys     keys_;
    RunItems items_;

  public:
    static ItemFactory& GET_INSTANCE();

    ItemFactory();
    ~ItemFactory();

    RunItem& item(const char* name) throw();
    void assign(const char* name, RunItem& item) throw();
    const Keys& keys() const;
  };
}

#endif //__PLAYGROUND__ItemFactory__
