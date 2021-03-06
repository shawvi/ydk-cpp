#ifndef _CISCO_IOS_XE_BGP_ROUTE_OPER_
#define _CISCO_IOS_XE_BGP_ROUTE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bgp_route_oper {

class BgpRpkiStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rpki_valid;
        static const ydk::Enum::YLeaf rpki_invalid;
        static const ydk::Enum::YLeaf rpki_not_found;
        static const ydk::Enum::YLeaf rpki_not_enabled;
        static const ydk::Enum::YLeaf rpki_illegal;

};

class BgpRouteFilters : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_rf_all;
        static const ydk::Enum::YLeaf bgp_rf_cidr_only;
        static const ydk::Enum::YLeaf bgp_rf_label;
        static const ydk::Enum::YLeaf bgp_rf_rib_failure;
        static const ydk::Enum::YLeaf bgp_rf_injected;
        static const ydk::Enum::YLeaf bgp_rf_inconsistent;
        static const ydk::Enum::YLeaf bgp_rf_community;
        static const ydk::Enum::YLeaf bgp_rf_extcommunity;
        static const ydk::Enum::YLeaf bgp_rf_oer_controlled;
        static const ydk::Enum::YLeaf bgp_rf_pending;

};

class BgpNeighborRouteFilters : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_nrf_post_received;
        static const ydk::Enum::YLeaf bgp_nrf_pre_received;
        static const ydk::Enum::YLeaf bgp_nrf_pre_advertised;
        static const ydk::Enum::YLeaf bgp_nrf_post_advertised;

};

class BgpOriginCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf origin_igp;
        static const ydk::Enum::YLeaf origin_egp;
        static const ydk::Enum::YLeaf origin_incomplete;

};


}
}

#endif /* _CISCO_IOS_XE_BGP_ROUTE_OPER_ */

