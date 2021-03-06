#ifndef _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_
#define _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_link_oam_cfg {

class EtherLinkOamEventActionEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf error_disable;
        static const ydk::Enum::YLeaf log;

};

class EtherLinkOamEventActionPrimEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf log;

};

class EtherLinkOamRequireModeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf dont_care;

};

class EtherLinkOamWindowUnitsSymbolsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf symbols;

};

class EtherLinkOamThresholdUnitsFramesEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frames;
        static const ydk::Enum::YLeaf ppm;

};

class EtherLinkOamThresholdUnitsSymbolsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symbols;
        static const ydk::Enum::YLeaf ppm;

};

class EtherLinkOamHelloIntervalEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1s;
        static const ydk::Enum::YLeaf Y_100ms;

};

class EtherLinkOamModeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf active;

};

class EtherLinkOamEventActionEnumEfd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf error_disable;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf efd;

};

class EtherLinkOamWindowUnitsFramesEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf frames;

};

class EtherLinkOamThresholdWindowMultiplierEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf thousand;
        static const ydk::Enum::YLeaf million;
        static const ydk::Enum::YLeaf billion;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_ */

