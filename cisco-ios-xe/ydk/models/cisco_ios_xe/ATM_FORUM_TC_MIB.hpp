#ifndef _ATM_FORUM_TC_MIB_
#define _ATM_FORUM_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ATM_FORUM_TC_MIB {

class TruthValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

};

class AtmServiceCategory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf rtVbr;
        static const ydk::Enum::YLeaf nrtVbr;
        static const ydk::Enum::YLeaf abr;
        static const ydk::Enum::YLeaf ubr;

};


}
}

#endif /* _ATM_FORUM_TC_MIB_ */

