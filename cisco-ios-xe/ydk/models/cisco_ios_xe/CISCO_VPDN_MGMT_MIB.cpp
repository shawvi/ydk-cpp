
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VPDN_MGMT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VPDN_MGMT_MIB {

CISCOVPDNMGMTMIB::CISCOVPDNMGMTMIB()
    :
    ciscovpdnmgmtmibnotifs(std::make_shared<CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs>())
    , cvpdnsysteminfo(std::make_shared<CISCOVPDNMGMTMIB::CvpdnSystemInfo>())
    , cvpdnmultilinkinfo(std::make_shared<CISCOVPDNMGMTMIB::CvpdnMultilinkInfo>())
    , cvpdnsystemtable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnSystemTable>())
    , cvpdntunneltable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelTable>())
    , cvpdntunnelattrtable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable>())
    , cvpdntunnelsessiontable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable>())
    , cvpdnsessionattrtable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnSessionAttrTable>())
    , cvpdnusertofailhistinfotable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable>())
    , cvpdntemplatetable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnTemplateTable>())
    , cvpdnbundletable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnBundleTable>())
    , cvpdnbundlechildtable(std::make_shared<CISCOVPDNMGMTMIB::CvpdnBundleChildTable>())
{
    ciscovpdnmgmtmibnotifs->parent = this;
    cvpdnsysteminfo->parent = this;
    cvpdnmultilinkinfo->parent = this;
    cvpdnsystemtable->parent = this;
    cvpdntunneltable->parent = this;
    cvpdntunnelattrtable->parent = this;
    cvpdntunnelsessiontable->parent = this;
    cvpdnsessionattrtable->parent = this;
    cvpdnusertofailhistinfotable->parent = this;
    cvpdntemplatetable->parent = this;
    cvpdnbundletable->parent = this;
    cvpdnbundlechildtable->parent = this;

    yang_name = "CISCO-VPDN-MGMT-MIB"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::~CISCOVPDNMGMTMIB()
{
}

bool CISCOVPDNMGMTMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscovpdnmgmtmibnotifs !=  nullptr && ciscovpdnmgmtmibnotifs->has_data())
	|| (cvpdnsysteminfo !=  nullptr && cvpdnsysteminfo->has_data())
	|| (cvpdnmultilinkinfo !=  nullptr && cvpdnmultilinkinfo->has_data())
	|| (cvpdnsystemtable !=  nullptr && cvpdnsystemtable->has_data())
	|| (cvpdntunneltable !=  nullptr && cvpdntunneltable->has_data())
	|| (cvpdntunnelattrtable !=  nullptr && cvpdntunnelattrtable->has_data())
	|| (cvpdntunnelsessiontable !=  nullptr && cvpdntunnelsessiontable->has_data())
	|| (cvpdnsessionattrtable !=  nullptr && cvpdnsessionattrtable->has_data())
	|| (cvpdnusertofailhistinfotable !=  nullptr && cvpdnusertofailhistinfotable->has_data())
	|| (cvpdntemplatetable !=  nullptr && cvpdntemplatetable->has_data())
	|| (cvpdnbundletable !=  nullptr && cvpdnbundletable->has_data())
	|| (cvpdnbundlechildtable !=  nullptr && cvpdnbundlechildtable->has_data());
}

bool CISCOVPDNMGMTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscovpdnmgmtmibnotifs !=  nullptr && ciscovpdnmgmtmibnotifs->has_operation())
	|| (cvpdnsysteminfo !=  nullptr && cvpdnsysteminfo->has_operation())
	|| (cvpdnmultilinkinfo !=  nullptr && cvpdnmultilinkinfo->has_operation())
	|| (cvpdnsystemtable !=  nullptr && cvpdnsystemtable->has_operation())
	|| (cvpdntunneltable !=  nullptr && cvpdntunneltable->has_operation())
	|| (cvpdntunnelattrtable !=  nullptr && cvpdntunnelattrtable->has_operation())
	|| (cvpdntunnelsessiontable !=  nullptr && cvpdntunnelsessiontable->has_operation())
	|| (cvpdnsessionattrtable !=  nullptr && cvpdnsessionattrtable->has_operation())
	|| (cvpdnusertofailhistinfotable !=  nullptr && cvpdnusertofailhistinfotable->has_operation())
	|| (cvpdntemplatetable !=  nullptr && cvpdntemplatetable->has_operation())
	|| (cvpdnbundletable !=  nullptr && cvpdnbundletable->has_operation())
	|| (cvpdnbundlechildtable !=  nullptr && cvpdnbundlechildtable->has_operation());
}

std::string CISCOVPDNMGMTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoVpdnMgmtMIBNotifs")
    {
        if(ciscovpdnmgmtmibnotifs == nullptr)
        {
            ciscovpdnmgmtmibnotifs = std::make_shared<CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs>();
        }
        return ciscovpdnmgmtmibnotifs;
    }

    if(child_yang_name == "cvpdnSystemInfo")
    {
        if(cvpdnsysteminfo == nullptr)
        {
            cvpdnsysteminfo = std::make_shared<CISCOVPDNMGMTMIB::CvpdnSystemInfo>();
        }
        return cvpdnsysteminfo;
    }

    if(child_yang_name == "cvpdnMultilinkInfo")
    {
        if(cvpdnmultilinkinfo == nullptr)
        {
            cvpdnmultilinkinfo = std::make_shared<CISCOVPDNMGMTMIB::CvpdnMultilinkInfo>();
        }
        return cvpdnmultilinkinfo;
    }

    if(child_yang_name == "cvpdnSystemTable")
    {
        if(cvpdnsystemtable == nullptr)
        {
            cvpdnsystemtable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnSystemTable>();
        }
        return cvpdnsystemtable;
    }

    if(child_yang_name == "cvpdnTunnelTable")
    {
        if(cvpdntunneltable == nullptr)
        {
            cvpdntunneltable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelTable>();
        }
        return cvpdntunneltable;
    }

    if(child_yang_name == "cvpdnTunnelAttrTable")
    {
        if(cvpdntunnelattrtable == nullptr)
        {
            cvpdntunnelattrtable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable>();
        }
        return cvpdntunnelattrtable;
    }

    if(child_yang_name == "cvpdnTunnelSessionTable")
    {
        if(cvpdntunnelsessiontable == nullptr)
        {
            cvpdntunnelsessiontable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable>();
        }
        return cvpdntunnelsessiontable;
    }

    if(child_yang_name == "cvpdnSessionAttrTable")
    {
        if(cvpdnsessionattrtable == nullptr)
        {
            cvpdnsessionattrtable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnSessionAttrTable>();
        }
        return cvpdnsessionattrtable;
    }

    if(child_yang_name == "cvpdnUserToFailHistInfoTable")
    {
        if(cvpdnusertofailhistinfotable == nullptr)
        {
            cvpdnusertofailhistinfotable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable>();
        }
        return cvpdnusertofailhistinfotable;
    }

    if(child_yang_name == "cvpdnTemplateTable")
    {
        if(cvpdntemplatetable == nullptr)
        {
            cvpdntemplatetable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnTemplateTable>();
        }
        return cvpdntemplatetable;
    }

    if(child_yang_name == "cvpdnBundleTable")
    {
        if(cvpdnbundletable == nullptr)
        {
            cvpdnbundletable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnBundleTable>();
        }
        return cvpdnbundletable;
    }

    if(child_yang_name == "cvpdnBundleChildTable")
    {
        if(cvpdnbundlechildtable == nullptr)
        {
            cvpdnbundlechildtable = std::make_shared<CISCOVPDNMGMTMIB::CvpdnBundleChildTable>();
        }
        return cvpdnbundlechildtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ciscovpdnmgmtmibnotifs != nullptr)
    {
        _children["ciscoVpdnMgmtMIBNotifs"] = ciscovpdnmgmtmibnotifs;
    }

    if(cvpdnsysteminfo != nullptr)
    {
        _children["cvpdnSystemInfo"] = cvpdnsysteminfo;
    }

    if(cvpdnmultilinkinfo != nullptr)
    {
        _children["cvpdnMultilinkInfo"] = cvpdnmultilinkinfo;
    }

    if(cvpdnsystemtable != nullptr)
    {
        _children["cvpdnSystemTable"] = cvpdnsystemtable;
    }

    if(cvpdntunneltable != nullptr)
    {
        _children["cvpdnTunnelTable"] = cvpdntunneltable;
    }

    if(cvpdntunnelattrtable != nullptr)
    {
        _children["cvpdnTunnelAttrTable"] = cvpdntunnelattrtable;
    }

    if(cvpdntunnelsessiontable != nullptr)
    {
        _children["cvpdnTunnelSessionTable"] = cvpdntunnelsessiontable;
    }

    if(cvpdnsessionattrtable != nullptr)
    {
        _children["cvpdnSessionAttrTable"] = cvpdnsessionattrtable;
    }

    if(cvpdnusertofailhistinfotable != nullptr)
    {
        _children["cvpdnUserToFailHistInfoTable"] = cvpdnusertofailhistinfotable;
    }

    if(cvpdntemplatetable != nullptr)
    {
        _children["cvpdnTemplateTable"] = cvpdntemplatetable;
    }

    if(cvpdnbundletable != nullptr)
    {
        _children["cvpdnBundleTable"] = cvpdnbundletable;
    }

    if(cvpdnbundlechildtable != nullptr)
    {
        _children["cvpdnBundleChildTable"] = cvpdnbundlechildtable;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::clone_ptr() const
{
    return std::make_shared<CISCOVPDNMGMTMIB>();
}

std::string CISCOVPDNMGMTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOVPDNMGMTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOVPDNMGMTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOVPDNMGMTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOVPDNMGMTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoVpdnMgmtMIBNotifs" || name == "cvpdnSystemInfo" || name == "cvpdnMultilinkInfo" || name == "cvpdnSystemTable" || name == "cvpdnTunnelTable" || name == "cvpdnTunnelAttrTable" || name == "cvpdnTunnelSessionTable" || name == "cvpdnSessionAttrTable" || name == "cvpdnUserToFailHistInfoTable" || name == "cvpdnTemplateTable" || name == "cvpdnBundleTable" || name == "cvpdnBundleChildTable")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::CiscoVpdnMgmtMIBNotifs()
    :
    cvpdnnotifsessionid{YType::int32, "cvpdnNotifSessionID"},
    cvpdnnotifsessionevent{YType::enumeration, "cvpdnNotifSessionEvent"}
{

    yang_name = "ciscoVpdnMgmtMIBNotifs"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::~CiscoVpdnMgmtMIBNotifs()
{
}

bool CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::has_data() const
{
    if (is_presence_container) return true;
    return cvpdnnotifsessionid.is_set
	|| cvpdnnotifsessionevent.is_set;
}

bool CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnnotifsessionid.yfilter)
	|| ydk::is_set(cvpdnnotifsessionevent.yfilter);
}

std::string CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoVpdnMgmtMIBNotifs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnnotifsessionid.is_set || is_set(cvpdnnotifsessionid.yfilter)) leaf_name_data.push_back(cvpdnnotifsessionid.get_name_leafdata());
    if (cvpdnnotifsessionevent.is_set || is_set(cvpdnnotifsessionevent.yfilter)) leaf_name_data.push_back(cvpdnnotifsessionevent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnNotifSessionID")
    {
        cvpdnnotifsessionid = value;
        cvpdnnotifsessionid.value_namespace = name_space;
        cvpdnnotifsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnNotifSessionEvent")
    {
        cvpdnnotifsessionevent = value;
        cvpdnnotifsessionevent.value_namespace = name_space;
        cvpdnnotifsessionevent.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnNotifSessionID")
    {
        cvpdnnotifsessionid.yfilter = yfilter;
    }
    if(value_path == "cvpdnNotifSessionEvent")
    {
        cvpdnnotifsessionevent.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnNotifSessionID" || name == "cvpdnNotifSessionEvent")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnSystemInfo::CvpdnSystemInfo()
    :
    cvpdntunneltotal{YType::uint32, "cvpdnTunnelTotal"},
    cvpdnsessiontotal{YType::uint32, "cvpdnSessionTotal"},
    cvpdndenieduserstotal{YType::uint32, "cvpdnDeniedUsersTotal"},
    cvpdnsystemnotifsessionenabled{YType::boolean, "cvpdnSystemNotifSessionEnabled"},
    cvpdnsystemclearsessions{YType::enumeration, "cvpdnSystemClearSessions"}
{

    yang_name = "cvpdnSystemInfo"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnSystemInfo::~CvpdnSystemInfo()
{
}

bool CISCOVPDNMGMTMIB::CvpdnSystemInfo::has_data() const
{
    if (is_presence_container) return true;
    return cvpdntunneltotal.is_set
	|| cvpdnsessiontotal.is_set
	|| cvpdndenieduserstotal.is_set
	|| cvpdnsystemnotifsessionenabled.is_set
	|| cvpdnsystemclearsessions.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnSystemInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdntunneltotal.yfilter)
	|| ydk::is_set(cvpdnsessiontotal.yfilter)
	|| ydk::is_set(cvpdndenieduserstotal.yfilter)
	|| ydk::is_set(cvpdnsystemnotifsessionenabled.yfilter)
	|| ydk::is_set(cvpdnsystemclearsessions.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnSystemInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnSystemInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemInfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnSystemInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntunneltotal.is_set || is_set(cvpdntunneltotal.yfilter)) leaf_name_data.push_back(cvpdntunneltotal.get_name_leafdata());
    if (cvpdnsessiontotal.is_set || is_set(cvpdnsessiontotal.yfilter)) leaf_name_data.push_back(cvpdnsessiontotal.get_name_leafdata());
    if (cvpdndenieduserstotal.is_set || is_set(cvpdndenieduserstotal.yfilter)) leaf_name_data.push_back(cvpdndenieduserstotal.get_name_leafdata());
    if (cvpdnsystemnotifsessionenabled.is_set || is_set(cvpdnsystemnotifsessionenabled.yfilter)) leaf_name_data.push_back(cvpdnsystemnotifsessionenabled.get_name_leafdata());
    if (cvpdnsystemclearsessions.is_set || is_set(cvpdnsystemclearsessions.yfilter)) leaf_name_data.push_back(cvpdnsystemclearsessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnSystemInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnSystemInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnSystemInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnTunnelTotal")
    {
        cvpdntunneltotal = value;
        cvpdntunneltotal.value_namespace = name_space;
        cvpdntunneltotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionTotal")
    {
        cvpdnsessiontotal = value;
        cvpdnsessiontotal.value_namespace = name_space;
        cvpdnsessiontotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnDeniedUsersTotal")
    {
        cvpdndenieduserstotal = value;
        cvpdndenieduserstotal.value_namespace = name_space;
        cvpdndenieduserstotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemNotifSessionEnabled")
    {
        cvpdnsystemnotifsessionenabled = value;
        cvpdnsystemnotifsessionenabled.value_namespace = name_space;
        cvpdnsystemnotifsessionenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemClearSessions")
    {
        cvpdnsystemclearsessions = value;
        cvpdnsystemclearsessions.value_namespace = name_space;
        cvpdnsystemclearsessions.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnSystemInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnTunnelTotal")
    {
        cvpdntunneltotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionTotal")
    {
        cvpdnsessiontotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnDeniedUsersTotal")
    {
        cvpdndenieduserstotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemNotifSessionEnabled")
    {
        cvpdnsystemnotifsessionenabled.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemClearSessions")
    {
        cvpdnsystemclearsessions.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnSystemInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelTotal" || name == "cvpdnSessionTotal" || name == "cvpdnDeniedUsersTotal" || name == "cvpdnSystemNotifSessionEnabled" || name == "cvpdnSystemClearSessions")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::CvpdnMultilinkInfo()
    :
    cvpdnbundleswithonelink{YType::uint32, "cvpdnBundlesWithOneLink"},
    cvpdnbundleswithtwolinks{YType::uint32, "cvpdnBundlesWithTwoLinks"},
    cvpdnbundleswithmorethantwolinks{YType::uint32, "cvpdnBundlesWithMoreThanTwoLinks"},
    cvpdnbundlelastchanged{YType::uint32, "cvpdnBundleLastChanged"}
{

    yang_name = "cvpdnMultilinkInfo"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::~CvpdnMultilinkInfo()
{
}

bool CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::has_data() const
{
    if (is_presence_container) return true;
    return cvpdnbundleswithonelink.is_set
	|| cvpdnbundleswithtwolinks.is_set
	|| cvpdnbundleswithmorethantwolinks.is_set
	|| cvpdnbundlelastchanged.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnbundleswithonelink.yfilter)
	|| ydk::is_set(cvpdnbundleswithtwolinks.yfilter)
	|| ydk::is_set(cvpdnbundleswithmorethantwolinks.yfilter)
	|| ydk::is_set(cvpdnbundlelastchanged.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnMultilinkInfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundleswithonelink.is_set || is_set(cvpdnbundleswithonelink.yfilter)) leaf_name_data.push_back(cvpdnbundleswithonelink.get_name_leafdata());
    if (cvpdnbundleswithtwolinks.is_set || is_set(cvpdnbundleswithtwolinks.yfilter)) leaf_name_data.push_back(cvpdnbundleswithtwolinks.get_name_leafdata());
    if (cvpdnbundleswithmorethantwolinks.is_set || is_set(cvpdnbundleswithmorethantwolinks.yfilter)) leaf_name_data.push_back(cvpdnbundleswithmorethantwolinks.get_name_leafdata());
    if (cvpdnbundlelastchanged.is_set || is_set(cvpdnbundlelastchanged.yfilter)) leaf_name_data.push_back(cvpdnbundlelastchanged.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnBundlesWithOneLink")
    {
        cvpdnbundleswithonelink = value;
        cvpdnbundleswithonelink.value_namespace = name_space;
        cvpdnbundleswithonelink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlesWithTwoLinks")
    {
        cvpdnbundleswithtwolinks = value;
        cvpdnbundleswithtwolinks.value_namespace = name_space;
        cvpdnbundleswithtwolinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlesWithMoreThanTwoLinks")
    {
        cvpdnbundleswithmorethantwolinks = value;
        cvpdnbundleswithmorethantwolinks.value_namespace = name_space;
        cvpdnbundleswithmorethantwolinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleLastChanged")
    {
        cvpdnbundlelastchanged = value;
        cvpdnbundlelastchanged.value_namespace = name_space;
        cvpdnbundlelastchanged.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnBundlesWithOneLink")
    {
        cvpdnbundleswithonelink.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlesWithTwoLinks")
    {
        cvpdnbundleswithtwolinks.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlesWithMoreThanTwoLinks")
    {
        cvpdnbundleswithmorethantwolinks.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleLastChanged")
    {
        cvpdnbundlelastchanged.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnMultilinkInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundlesWithOneLink" || name == "cvpdnBundlesWithTwoLinks" || name == "cvpdnBundlesWithMoreThanTwoLinks" || name == "cvpdnBundleLastChanged")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemTable()
    :
    cvpdnsystementry(this, {"cvpdnsystemtunneltype"})
{

    yang_name = "cvpdnSystemTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnSystemTable::~CvpdnSystemTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnSystemTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdnsystementry.len(); index++)
    {
        if(cvpdnsystementry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnSystemTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnsystementry.len(); index++)
    {
        if(cvpdnsystementry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnSystemTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnSystemTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnSystemTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnSystemTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnSystemEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry>();
        ent_->parent = this;
        cvpdnsystementry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnSystemTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdnsystementry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnSystemTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnSystemTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnSystemTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSystemEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::CvpdnSystemEntry()
    :
    cvpdnsystemtunneltype{YType::enumeration, "cvpdnSystemTunnelType"},
    cvpdnsystemtunneltotal{YType::uint32, "cvpdnSystemTunnelTotal"},
    cvpdnsystemsessiontotal{YType::uint32, "cvpdnSystemSessionTotal"},
    cvpdnsystemdenieduserstotal{YType::uint32, "cvpdnSystemDeniedUsersTotal"},
    cvpdnsysteminitialconnreq{YType::uint32, "cvpdnSystemInitialConnReq"},
    cvpdnsystemsuccessconnreq{YType::uint32, "cvpdnSystemSuccessConnReq"},
    cvpdnsystemfailedconnreq{YType::uint32, "cvpdnSystemFailedConnReq"}
{

    yang_name = "cvpdnSystemEntry"; yang_parent_name = "cvpdnSystemTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::~CvpdnSystemEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdnsystemtunneltype.is_set
	|| cvpdnsystemtunneltotal.is_set
	|| cvpdnsystemsessiontotal.is_set
	|| cvpdnsystemdenieduserstotal.is_set
	|| cvpdnsysteminitialconnreq.is_set
	|| cvpdnsystemsuccessconnreq.is_set
	|| cvpdnsystemfailedconnreq.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnsystemtunneltype.yfilter)
	|| ydk::is_set(cvpdnsystemtunneltotal.yfilter)
	|| ydk::is_set(cvpdnsystemsessiontotal.yfilter)
	|| ydk::is_set(cvpdnsystemdenieduserstotal.yfilter)
	|| ydk::is_set(cvpdnsysteminitialconnreq.yfilter)
	|| ydk::is_set(cvpdnsystemsuccessconnreq.yfilter)
	|| ydk::is_set(cvpdnsystemfailedconnreq.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnSystemTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemEntry";
    ADD_KEY_TOKEN(cvpdnsystemtunneltype, "cvpdnSystemTunnelType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.yfilter)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdnsystemtunneltotal.is_set || is_set(cvpdnsystemtunneltotal.yfilter)) leaf_name_data.push_back(cvpdnsystemtunneltotal.get_name_leafdata());
    if (cvpdnsystemsessiontotal.is_set || is_set(cvpdnsystemsessiontotal.yfilter)) leaf_name_data.push_back(cvpdnsystemsessiontotal.get_name_leafdata());
    if (cvpdnsystemdenieduserstotal.is_set || is_set(cvpdnsystemdenieduserstotal.yfilter)) leaf_name_data.push_back(cvpdnsystemdenieduserstotal.get_name_leafdata());
    if (cvpdnsysteminitialconnreq.is_set || is_set(cvpdnsysteminitialconnreq.yfilter)) leaf_name_data.push_back(cvpdnsysteminitialconnreq.get_name_leafdata());
    if (cvpdnsystemsuccessconnreq.is_set || is_set(cvpdnsystemsuccessconnreq.yfilter)) leaf_name_data.push_back(cvpdnsystemsuccessconnreq.get_name_leafdata());
    if (cvpdnsystemfailedconnreq.is_set || is_set(cvpdnsystemfailedconnreq.yfilter)) leaf_name_data.push_back(cvpdnsystemfailedconnreq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
        cvpdnsystemtunneltype.value_namespace = name_space;
        cvpdnsystemtunneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemTunnelTotal")
    {
        cvpdnsystemtunneltotal = value;
        cvpdnsystemtunneltotal.value_namespace = name_space;
        cvpdnsystemtunneltotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemSessionTotal")
    {
        cvpdnsystemsessiontotal = value;
        cvpdnsystemsessiontotal.value_namespace = name_space;
        cvpdnsystemsessiontotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemDeniedUsersTotal")
    {
        cvpdnsystemdenieduserstotal = value;
        cvpdnsystemdenieduserstotal.value_namespace = name_space;
        cvpdnsystemdenieduserstotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemInitialConnReq")
    {
        cvpdnsysteminitialconnreq = value;
        cvpdnsysteminitialconnreq.value_namespace = name_space;
        cvpdnsysteminitialconnreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemSuccessConnReq")
    {
        cvpdnsystemsuccessconnreq = value;
        cvpdnsystemsuccessconnreq.value_namespace = name_space;
        cvpdnsystemsuccessconnreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemFailedConnReq")
    {
        cvpdnsystemfailedconnreq = value;
        cvpdnsystemfailedconnreq.value_namespace = name_space;
        cvpdnsystemfailedconnreq.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemTunnelTotal")
    {
        cvpdnsystemtunneltotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemSessionTotal")
    {
        cvpdnsystemsessiontotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemDeniedUsersTotal")
    {
        cvpdnsystemdenieduserstotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemInitialConnReq")
    {
        cvpdnsysteminitialconnreq.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemSuccessConnReq")
    {
        cvpdnsystemsuccessconnreq.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemFailedConnReq")
    {
        cvpdnsystemfailedconnreq.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSystemTunnelType" || name == "cvpdnSystemTunnelTotal" || name == "cvpdnSystemSessionTotal" || name == "cvpdnSystemDeniedUsersTotal" || name == "cvpdnSystemInitialConnReq" || name == "cvpdnSystemSuccessConnReq" || name == "cvpdnSystemFailedConnReq")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelTable()
    :
    cvpdntunnelentry(this, {"cvpdntunneltunnelid"})
{

    yang_name = "cvpdnTunnelTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnTunnelTable::~CvpdnTunnelTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdntunnelentry.len(); index++)
    {
        if(cvpdntunnelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelentry.len(); index++)
    {
        if(cvpdntunnelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnTunnelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnTunnelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnTunnelEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry>();
        ent_->parent = this;
        cvpdntunnelentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnTunnelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdntunnelentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnTunnelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnTunnelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelEntry()
    :
    cvpdntunneltunnelid{YType::uint32, "cvpdnTunnelTunnelId"},
    cvpdntunnelremotetunnelid{YType::uint32, "cvpdnTunnelRemoteTunnelId"},
    cvpdntunnellocalname{YType::str, "cvpdnTunnelLocalName"},
    cvpdntunnelremotename{YType::str, "cvpdnTunnelRemoteName"},
    cvpdntunnelremoteendpointname{YType::str, "cvpdnTunnelRemoteEndpointName"},
    cvpdntunnellocalinitconnection{YType::boolean, "cvpdnTunnelLocalInitConnection"},
    cvpdntunnelorigcause{YType::enumeration, "cvpdnTunnelOrigCause"},
    cvpdntunnelstate{YType::enumeration, "cvpdnTunnelState"},
    cvpdntunnelactivesessions{YType::uint32, "cvpdnTunnelActiveSessions"},
    cvpdntunneldeniedusers{YType::uint32, "cvpdnTunnelDeniedUsers"},
    cvpdntunnelsoftshut{YType::boolean, "cvpdnTunnelSoftshut"},
    cvpdntunnelnetworkservicetype{YType::enumeration, "cvpdnTunnelNetworkServiceType"},
    cvpdntunnellocalipaddress{YType::str, "cvpdnTunnelLocalIpAddress"},
    cvpdntunnelsourceipaddress{YType::str, "cvpdnTunnelSourceIpAddress"},
    cvpdntunnelremoteipaddress{YType::str, "cvpdnTunnelRemoteIpAddress"}
{

    yang_name = "cvpdnTunnelEntry"; yang_parent_name = "cvpdnTunnelTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::~CvpdnTunnelEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdntunneltunnelid.is_set
	|| cvpdntunnelremotetunnelid.is_set
	|| cvpdntunnellocalname.is_set
	|| cvpdntunnelremotename.is_set
	|| cvpdntunnelremoteendpointname.is_set
	|| cvpdntunnellocalinitconnection.is_set
	|| cvpdntunnelorigcause.is_set
	|| cvpdntunnelstate.is_set
	|| cvpdntunnelactivesessions.is_set
	|| cvpdntunneldeniedusers.is_set
	|| cvpdntunnelsoftshut.is_set
	|| cvpdntunnelnetworkservicetype.is_set
	|| cvpdntunnellocalipaddress.is_set
	|| cvpdntunnelsourceipaddress.is_set
	|| cvpdntunnelremoteipaddress.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdntunneltunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelremotetunnelid.yfilter)
	|| ydk::is_set(cvpdntunnellocalname.yfilter)
	|| ydk::is_set(cvpdntunnelremotename.yfilter)
	|| ydk::is_set(cvpdntunnelremoteendpointname.yfilter)
	|| ydk::is_set(cvpdntunnellocalinitconnection.yfilter)
	|| ydk::is_set(cvpdntunnelorigcause.yfilter)
	|| ydk::is_set(cvpdntunnelstate.yfilter)
	|| ydk::is_set(cvpdntunnelactivesessions.yfilter)
	|| ydk::is_set(cvpdntunneldeniedusers.yfilter)
	|| ydk::is_set(cvpdntunnelsoftshut.yfilter)
	|| ydk::is_set(cvpdntunnelnetworkservicetype.yfilter)
	|| ydk::is_set(cvpdntunnellocalipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelsourceipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelremoteipaddress.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelEntry";
    ADD_KEY_TOKEN(cvpdntunneltunnelid, "cvpdnTunnelTunnelId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntunneltunnelid.is_set || is_set(cvpdntunneltunnelid.yfilter)) leaf_name_data.push_back(cvpdntunneltunnelid.get_name_leafdata());
    if (cvpdntunnelremotetunnelid.is_set || is_set(cvpdntunnelremotetunnelid.yfilter)) leaf_name_data.push_back(cvpdntunnelremotetunnelid.get_name_leafdata());
    if (cvpdntunnellocalname.is_set || is_set(cvpdntunnellocalname.yfilter)) leaf_name_data.push_back(cvpdntunnellocalname.get_name_leafdata());
    if (cvpdntunnelremotename.is_set || is_set(cvpdntunnelremotename.yfilter)) leaf_name_data.push_back(cvpdntunnelremotename.get_name_leafdata());
    if (cvpdntunnelremoteendpointname.is_set || is_set(cvpdntunnelremoteendpointname.yfilter)) leaf_name_data.push_back(cvpdntunnelremoteendpointname.get_name_leafdata());
    if (cvpdntunnellocalinitconnection.is_set || is_set(cvpdntunnellocalinitconnection.yfilter)) leaf_name_data.push_back(cvpdntunnellocalinitconnection.get_name_leafdata());
    if (cvpdntunnelorigcause.is_set || is_set(cvpdntunnelorigcause.yfilter)) leaf_name_data.push_back(cvpdntunnelorigcause.get_name_leafdata());
    if (cvpdntunnelstate.is_set || is_set(cvpdntunnelstate.yfilter)) leaf_name_data.push_back(cvpdntunnelstate.get_name_leafdata());
    if (cvpdntunnelactivesessions.is_set || is_set(cvpdntunnelactivesessions.yfilter)) leaf_name_data.push_back(cvpdntunnelactivesessions.get_name_leafdata());
    if (cvpdntunneldeniedusers.is_set || is_set(cvpdntunneldeniedusers.yfilter)) leaf_name_data.push_back(cvpdntunneldeniedusers.get_name_leafdata());
    if (cvpdntunnelsoftshut.is_set || is_set(cvpdntunnelsoftshut.yfilter)) leaf_name_data.push_back(cvpdntunnelsoftshut.get_name_leafdata());
    if (cvpdntunnelnetworkservicetype.is_set || is_set(cvpdntunnelnetworkservicetype.yfilter)) leaf_name_data.push_back(cvpdntunnelnetworkservicetype.get_name_leafdata());
    if (cvpdntunnellocalipaddress.is_set || is_set(cvpdntunnellocalipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnellocalipaddress.get_name_leafdata());
    if (cvpdntunnelsourceipaddress.is_set || is_set(cvpdntunnelsourceipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelsourceipaddress.get_name_leafdata());
    if (cvpdntunnelremoteipaddress.is_set || is_set(cvpdntunnelremoteipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelremoteipaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid = value;
        cvpdntunneltunnelid.value_namespace = name_space;
        cvpdntunneltunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelRemoteTunnelId")
    {
        cvpdntunnelremotetunnelid = value;
        cvpdntunnelremotetunnelid.value_namespace = name_space;
        cvpdntunnelremotetunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelLocalName")
    {
        cvpdntunnellocalname = value;
        cvpdntunnellocalname.value_namespace = name_space;
        cvpdntunnellocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelRemoteName")
    {
        cvpdntunnelremotename = value;
        cvpdntunnelremotename.value_namespace = name_space;
        cvpdntunnelremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelRemoteEndpointName")
    {
        cvpdntunnelremoteendpointname = value;
        cvpdntunnelremoteendpointname.value_namespace = name_space;
        cvpdntunnelremoteendpointname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelLocalInitConnection")
    {
        cvpdntunnellocalinitconnection = value;
        cvpdntunnellocalinitconnection.value_namespace = name_space;
        cvpdntunnellocalinitconnection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelOrigCause")
    {
        cvpdntunnelorigcause = value;
        cvpdntunnelorigcause.value_namespace = name_space;
        cvpdntunnelorigcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelState")
    {
        cvpdntunnelstate = value;
        cvpdntunnelstate.value_namespace = name_space;
        cvpdntunnelstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelActiveSessions")
    {
        cvpdntunnelactivesessions = value;
        cvpdntunnelactivesessions.value_namespace = name_space;
        cvpdntunnelactivesessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelDeniedUsers")
    {
        cvpdntunneldeniedusers = value;
        cvpdntunneldeniedusers.value_namespace = name_space;
        cvpdntunneldeniedusers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSoftshut")
    {
        cvpdntunnelsoftshut = value;
        cvpdntunnelsoftshut.value_namespace = name_space;
        cvpdntunnelsoftshut.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelNetworkServiceType")
    {
        cvpdntunnelnetworkservicetype = value;
        cvpdntunnelnetworkservicetype.value_namespace = name_space;
        cvpdntunnelnetworkservicetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelLocalIpAddress")
    {
        cvpdntunnellocalipaddress = value;
        cvpdntunnellocalipaddress.value_namespace = name_space;
        cvpdntunnellocalipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSourceIpAddress")
    {
        cvpdntunnelsourceipaddress = value;
        cvpdntunnelsourceipaddress.value_namespace = name_space;
        cvpdntunnelsourceipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelRemoteIpAddress")
    {
        cvpdntunnelremoteipaddress = value;
        cvpdntunnelremoteipaddress.value_namespace = name_space;
        cvpdntunnelremoteipaddress.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelRemoteTunnelId")
    {
        cvpdntunnelremotetunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelLocalName")
    {
        cvpdntunnellocalname.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelRemoteName")
    {
        cvpdntunnelremotename.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelRemoteEndpointName")
    {
        cvpdntunnelremoteendpointname.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelLocalInitConnection")
    {
        cvpdntunnellocalinitconnection.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelOrigCause")
    {
        cvpdntunnelorigcause.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelState")
    {
        cvpdntunnelstate.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelActiveSessions")
    {
        cvpdntunnelactivesessions.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelDeniedUsers")
    {
        cvpdntunneldeniedusers.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSoftshut")
    {
        cvpdntunnelsoftshut.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelNetworkServiceType")
    {
        cvpdntunnelnetworkservicetype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelLocalIpAddress")
    {
        cvpdntunnellocalipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSourceIpAddress")
    {
        cvpdntunnelsourceipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelRemoteIpAddress")
    {
        cvpdntunnelremoteipaddress.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelTunnelId" || name == "cvpdnTunnelRemoteTunnelId" || name == "cvpdnTunnelLocalName" || name == "cvpdnTunnelRemoteName" || name == "cvpdnTunnelRemoteEndpointName" || name == "cvpdnTunnelLocalInitConnection" || name == "cvpdnTunnelOrigCause" || name == "cvpdnTunnelState" || name == "cvpdnTunnelActiveSessions" || name == "cvpdnTunnelDeniedUsers" || name == "cvpdnTunnelSoftshut" || name == "cvpdnTunnelNetworkServiceType" || name == "cvpdnTunnelLocalIpAddress" || name == "cvpdnTunnelSourceIpAddress" || name == "cvpdnTunnelRemoteIpAddress")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrTable()
    :
    cvpdntunnelattrentry(this, {"cvpdnsystemtunneltype", "cvpdntunnelattrtunnelid"})
{

    yang_name = "cvpdnTunnelAttrTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::~CvpdnTunnelAttrTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdntunnelattrentry.len(); index++)
    {
        if(cvpdntunnelattrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelattrentry.len(); index++)
    {
        if(cvpdntunnelattrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelAttrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnTunnelAttrEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry>();
        ent_->parent = this;
        cvpdntunnelattrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdntunnelattrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelAttrEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrEntry()
    :
    cvpdnsystemtunneltype{YType::enumeration, "cvpdnSystemTunnelType"},
    cvpdntunnelattrtunnelid{YType::int32, "cvpdnTunnelAttrTunnelId"},
    cvpdntunnelattrremotetunnelid{YType::int32, "cvpdnTunnelAttrRemoteTunnelId"},
    cvpdntunnelattrlocalname{YType::str, "cvpdnTunnelAttrLocalName"},
    cvpdntunnelattrremotename{YType::str, "cvpdnTunnelAttrRemoteName"},
    cvpdntunnelattrremoteendpointname{YType::str, "cvpdnTunnelAttrRemoteEndpointName"},
    cvpdntunnelattrlocalinitconnection{YType::boolean, "cvpdnTunnelAttrLocalInitConnection"},
    cvpdntunnelattrorigcause{YType::enumeration, "cvpdnTunnelAttrOrigCause"},
    cvpdntunnelattrstate{YType::enumeration, "cvpdnTunnelAttrState"},
    cvpdntunnelattractivesessions{YType::uint32, "cvpdnTunnelAttrActiveSessions"},
    cvpdntunnelattrdeniedusers{YType::uint32, "cvpdnTunnelAttrDeniedUsers"},
    cvpdntunnelattrsoftshut{YType::boolean, "cvpdnTunnelAttrSoftshut"},
    cvpdntunnelattrnetworkservicetype{YType::enumeration, "cvpdnTunnelAttrNetworkServiceType"},
    cvpdntunnelattrlocalipaddress{YType::str, "cvpdnTunnelAttrLocalIpAddress"},
    cvpdntunnelattrsourceipaddress{YType::str, "cvpdnTunnelAttrSourceIpAddress"},
    cvpdntunnelattrremoteipaddress{YType::str, "cvpdnTunnelAttrRemoteIpAddress"},
    cvpdntunnelattrlocalinetaddresstype{YType::enumeration, "cvpdnTunnelAttrLocalInetAddressType"},
    cvpdntunnelattrlocalinetaddress{YType::str, "cvpdnTunnelAttrLocalInetAddress"},
    cvpdntunnelattrsourceinetaddresstype{YType::enumeration, "cvpdnTunnelAttrSourceInetAddressType"},
    cvpdntunnelattrsourceinetaddress{YType::str, "cvpdnTunnelAttrSourceInetAddress"},
    cvpdntunnelattrremoteinetaddresstype{YType::enumeration, "cvpdnTunnelAttrRemoteInetAddressType"},
    cvpdntunnelattrremoteinetaddress{YType::str, "cvpdnTunnelAttrRemoteInetAddress"}
{

    yang_name = "cvpdnTunnelAttrEntry"; yang_parent_name = "cvpdnTunnelAttrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::~CvpdnTunnelAttrEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdnsystemtunneltype.is_set
	|| cvpdntunnelattrtunnelid.is_set
	|| cvpdntunnelattrremotetunnelid.is_set
	|| cvpdntunnelattrlocalname.is_set
	|| cvpdntunnelattrremotename.is_set
	|| cvpdntunnelattrremoteendpointname.is_set
	|| cvpdntunnelattrlocalinitconnection.is_set
	|| cvpdntunnelattrorigcause.is_set
	|| cvpdntunnelattrstate.is_set
	|| cvpdntunnelattractivesessions.is_set
	|| cvpdntunnelattrdeniedusers.is_set
	|| cvpdntunnelattrsoftshut.is_set
	|| cvpdntunnelattrnetworkservicetype.is_set
	|| cvpdntunnelattrlocalipaddress.is_set
	|| cvpdntunnelattrsourceipaddress.is_set
	|| cvpdntunnelattrremoteipaddress.is_set
	|| cvpdntunnelattrlocalinetaddresstype.is_set
	|| cvpdntunnelattrlocalinetaddress.is_set
	|| cvpdntunnelattrsourceinetaddresstype.is_set
	|| cvpdntunnelattrsourceinetaddress.is_set
	|| cvpdntunnelattrremoteinetaddresstype.is_set
	|| cvpdntunnelattrremoteinetaddress.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnsystemtunneltype.yfilter)
	|| ydk::is_set(cvpdntunnelattrtunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelattrremotetunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalname.yfilter)
	|| ydk::is_set(cvpdntunnelattrremotename.yfilter)
	|| ydk::is_set(cvpdntunnelattrremoteendpointname.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalinitconnection.yfilter)
	|| ydk::is_set(cvpdntunnelattrorigcause.yfilter)
	|| ydk::is_set(cvpdntunnelattrstate.yfilter)
	|| ydk::is_set(cvpdntunnelattractivesessions.yfilter)
	|| ydk::is_set(cvpdntunnelattrdeniedusers.yfilter)
	|| ydk::is_set(cvpdntunnelattrsoftshut.yfilter)
	|| ydk::is_set(cvpdntunnelattrnetworkservicetype.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrsourceipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrremoteipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalinetaddresstype.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalinetaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrsourceinetaddresstype.yfilter)
	|| ydk::is_set(cvpdntunnelattrsourceinetaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrremoteinetaddresstype.yfilter)
	|| ydk::is_set(cvpdntunnelattrremoteinetaddress.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelAttrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelAttrEntry";
    ADD_KEY_TOKEN(cvpdnsystemtunneltype, "cvpdnSystemTunnelType");
    ADD_KEY_TOKEN(cvpdntunnelattrtunnelid, "cvpdnTunnelAttrTunnelId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.yfilter)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdntunnelattrtunnelid.is_set || is_set(cvpdntunnelattrtunnelid.yfilter)) leaf_name_data.push_back(cvpdntunnelattrtunnelid.get_name_leafdata());
    if (cvpdntunnelattrremotetunnelid.is_set || is_set(cvpdntunnelattrremotetunnelid.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremotetunnelid.get_name_leafdata());
    if (cvpdntunnelattrlocalname.is_set || is_set(cvpdntunnelattrlocalname.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalname.get_name_leafdata());
    if (cvpdntunnelattrremotename.is_set || is_set(cvpdntunnelattrremotename.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremotename.get_name_leafdata());
    if (cvpdntunnelattrremoteendpointname.is_set || is_set(cvpdntunnelattrremoteendpointname.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremoteendpointname.get_name_leafdata());
    if (cvpdntunnelattrlocalinitconnection.is_set || is_set(cvpdntunnelattrlocalinitconnection.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalinitconnection.get_name_leafdata());
    if (cvpdntunnelattrorigcause.is_set || is_set(cvpdntunnelattrorigcause.yfilter)) leaf_name_data.push_back(cvpdntunnelattrorigcause.get_name_leafdata());
    if (cvpdntunnelattrstate.is_set || is_set(cvpdntunnelattrstate.yfilter)) leaf_name_data.push_back(cvpdntunnelattrstate.get_name_leafdata());
    if (cvpdntunnelattractivesessions.is_set || is_set(cvpdntunnelattractivesessions.yfilter)) leaf_name_data.push_back(cvpdntunnelattractivesessions.get_name_leafdata());
    if (cvpdntunnelattrdeniedusers.is_set || is_set(cvpdntunnelattrdeniedusers.yfilter)) leaf_name_data.push_back(cvpdntunnelattrdeniedusers.get_name_leafdata());
    if (cvpdntunnelattrsoftshut.is_set || is_set(cvpdntunnelattrsoftshut.yfilter)) leaf_name_data.push_back(cvpdntunnelattrsoftshut.get_name_leafdata());
    if (cvpdntunnelattrnetworkservicetype.is_set || is_set(cvpdntunnelattrnetworkservicetype.yfilter)) leaf_name_data.push_back(cvpdntunnelattrnetworkservicetype.get_name_leafdata());
    if (cvpdntunnelattrlocalipaddress.is_set || is_set(cvpdntunnelattrlocalipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalipaddress.get_name_leafdata());
    if (cvpdntunnelattrsourceipaddress.is_set || is_set(cvpdntunnelattrsourceipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrsourceipaddress.get_name_leafdata());
    if (cvpdntunnelattrremoteipaddress.is_set || is_set(cvpdntunnelattrremoteipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremoteipaddress.get_name_leafdata());
    if (cvpdntunnelattrlocalinetaddresstype.is_set || is_set(cvpdntunnelattrlocalinetaddresstype.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrlocalinetaddress.is_set || is_set(cvpdntunnelattrlocalinetaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalinetaddress.get_name_leafdata());
    if (cvpdntunnelattrsourceinetaddresstype.is_set || is_set(cvpdntunnelattrsourceinetaddresstype.yfilter)) leaf_name_data.push_back(cvpdntunnelattrsourceinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrsourceinetaddress.is_set || is_set(cvpdntunnelattrsourceinetaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrsourceinetaddress.get_name_leafdata());
    if (cvpdntunnelattrremoteinetaddresstype.is_set || is_set(cvpdntunnelattrremoteinetaddresstype.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremoteinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrremoteinetaddress.is_set || is_set(cvpdntunnelattrremoteinetaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremoteinetaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
        cvpdnsystemtunneltype.value_namespace = name_space;
        cvpdnsystemtunneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid = value;
        cvpdntunnelattrtunnelid.value_namespace = name_space;
        cvpdntunnelattrtunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteTunnelId")
    {
        cvpdntunnelattrremotetunnelid = value;
        cvpdntunnelattrremotetunnelid.value_namespace = name_space;
        cvpdntunnelattrremotetunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalName")
    {
        cvpdntunnelattrlocalname = value;
        cvpdntunnelattrlocalname.value_namespace = name_space;
        cvpdntunnelattrlocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteName")
    {
        cvpdntunnelattrremotename = value;
        cvpdntunnelattrremotename.value_namespace = name_space;
        cvpdntunnelattrremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteEndpointName")
    {
        cvpdntunnelattrremoteendpointname = value;
        cvpdntunnelattrremoteendpointname.value_namespace = name_space;
        cvpdntunnelattrremoteendpointname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalInitConnection")
    {
        cvpdntunnelattrlocalinitconnection = value;
        cvpdntunnelattrlocalinitconnection.value_namespace = name_space;
        cvpdntunnelattrlocalinitconnection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrOrigCause")
    {
        cvpdntunnelattrorigcause = value;
        cvpdntunnelattrorigcause.value_namespace = name_space;
        cvpdntunnelattrorigcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrState")
    {
        cvpdntunnelattrstate = value;
        cvpdntunnelattrstate.value_namespace = name_space;
        cvpdntunnelattrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrActiveSessions")
    {
        cvpdntunnelattractivesessions = value;
        cvpdntunnelattractivesessions.value_namespace = name_space;
        cvpdntunnelattractivesessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrDeniedUsers")
    {
        cvpdntunnelattrdeniedusers = value;
        cvpdntunnelattrdeniedusers.value_namespace = name_space;
        cvpdntunnelattrdeniedusers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrSoftshut")
    {
        cvpdntunnelattrsoftshut = value;
        cvpdntunnelattrsoftshut.value_namespace = name_space;
        cvpdntunnelattrsoftshut.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrNetworkServiceType")
    {
        cvpdntunnelattrnetworkservicetype = value;
        cvpdntunnelattrnetworkservicetype.value_namespace = name_space;
        cvpdntunnelattrnetworkservicetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalIpAddress")
    {
        cvpdntunnelattrlocalipaddress = value;
        cvpdntunnelattrlocalipaddress.value_namespace = name_space;
        cvpdntunnelattrlocalipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrSourceIpAddress")
    {
        cvpdntunnelattrsourceipaddress = value;
        cvpdntunnelattrsourceipaddress.value_namespace = name_space;
        cvpdntunnelattrsourceipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteIpAddress")
    {
        cvpdntunnelattrremoteipaddress = value;
        cvpdntunnelattrremoteipaddress.value_namespace = name_space;
        cvpdntunnelattrremoteipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddressType")
    {
        cvpdntunnelattrlocalinetaddresstype = value;
        cvpdntunnelattrlocalinetaddresstype.value_namespace = name_space;
        cvpdntunnelattrlocalinetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddress")
    {
        cvpdntunnelattrlocalinetaddress = value;
        cvpdntunnelattrlocalinetaddress.value_namespace = name_space;
        cvpdntunnelattrlocalinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddressType")
    {
        cvpdntunnelattrsourceinetaddresstype = value;
        cvpdntunnelattrsourceinetaddresstype.value_namespace = name_space;
        cvpdntunnelattrsourceinetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddress")
    {
        cvpdntunnelattrsourceinetaddress = value;
        cvpdntunnelattrsourceinetaddress.value_namespace = name_space;
        cvpdntunnelattrsourceinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddressType")
    {
        cvpdntunnelattrremoteinetaddresstype = value;
        cvpdntunnelattrremoteinetaddresstype.value_namespace = name_space;
        cvpdntunnelattrremoteinetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddress")
    {
        cvpdntunnelattrremoteinetaddress = value;
        cvpdntunnelattrremoteinetaddress.value_namespace = name_space;
        cvpdntunnelattrremoteinetaddress.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteTunnelId")
    {
        cvpdntunnelattrremotetunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalName")
    {
        cvpdntunnelattrlocalname.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteName")
    {
        cvpdntunnelattrremotename.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteEndpointName")
    {
        cvpdntunnelattrremoteendpointname.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalInitConnection")
    {
        cvpdntunnelattrlocalinitconnection.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrOrigCause")
    {
        cvpdntunnelattrorigcause.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrState")
    {
        cvpdntunnelattrstate.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrActiveSessions")
    {
        cvpdntunnelattractivesessions.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrDeniedUsers")
    {
        cvpdntunnelattrdeniedusers.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrSoftshut")
    {
        cvpdntunnelattrsoftshut.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrNetworkServiceType")
    {
        cvpdntunnelattrnetworkservicetype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalIpAddress")
    {
        cvpdntunnelattrlocalipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrSourceIpAddress")
    {
        cvpdntunnelattrsourceipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteIpAddress")
    {
        cvpdntunnelattrremoteipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddressType")
    {
        cvpdntunnelattrlocalinetaddresstype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddress")
    {
        cvpdntunnelattrlocalinetaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddressType")
    {
        cvpdntunnelattrsourceinetaddresstype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddress")
    {
        cvpdntunnelattrsourceinetaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddressType")
    {
        cvpdntunnelattrremoteinetaddresstype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddress")
    {
        cvpdntunnelattrremoteinetaddress.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSystemTunnelType" || name == "cvpdnTunnelAttrTunnelId" || name == "cvpdnTunnelAttrRemoteTunnelId" || name == "cvpdnTunnelAttrLocalName" || name == "cvpdnTunnelAttrRemoteName" || name == "cvpdnTunnelAttrRemoteEndpointName" || name == "cvpdnTunnelAttrLocalInitConnection" || name == "cvpdnTunnelAttrOrigCause" || name == "cvpdnTunnelAttrState" || name == "cvpdnTunnelAttrActiveSessions" || name == "cvpdnTunnelAttrDeniedUsers" || name == "cvpdnTunnelAttrSoftshut" || name == "cvpdnTunnelAttrNetworkServiceType" || name == "cvpdnTunnelAttrLocalIpAddress" || name == "cvpdnTunnelAttrSourceIpAddress" || name == "cvpdnTunnelAttrRemoteIpAddress" || name == "cvpdnTunnelAttrLocalInetAddressType" || name == "cvpdnTunnelAttrLocalInetAddress" || name == "cvpdnTunnelAttrSourceInetAddressType" || name == "cvpdnTunnelAttrSourceInetAddress" || name == "cvpdnTunnelAttrRemoteInetAddressType" || name == "cvpdnTunnelAttrRemoteInetAddress")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionTable()
    :
    cvpdntunnelsessionentry(this, {"cvpdntunneltunnelid", "cvpdntunnelsessionid"})
{

    yang_name = "cvpdnTunnelSessionTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::~CvpdnTunnelSessionTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdntunnelsessionentry.len(); index++)
    {
        if(cvpdntunnelsessionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelsessionentry.len(); index++)
    {
        if(cvpdntunnelsessionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelSessionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnTunnelSessionEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry>();
        ent_->parent = this;
        cvpdntunnelsessionentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdntunnelsessionentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelSessionEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionEntry()
    :
    cvpdntunneltunnelid{YType::str, "cvpdnTunnelTunnelId"},
    cvpdntunnelsessionid{YType::uint32, "cvpdnTunnelSessionId"},
    cvpdntunnelsessionusername{YType::str, "cvpdnTunnelSessionUserName"},
    cvpdntunnelsessionstate{YType::enumeration, "cvpdnTunnelSessionState"},
    cvpdntunnelsessioncallduration{YType::uint32, "cvpdnTunnelSessionCallDuration"},
    cvpdntunnelsessionpacketsout{YType::uint32, "cvpdnTunnelSessionPacketsOut"},
    cvpdntunnelsessionbytesout{YType::uint32, "cvpdnTunnelSessionBytesOut"},
    cvpdntunnelsessionpacketsin{YType::uint32, "cvpdnTunnelSessionPacketsIn"},
    cvpdntunnelsessionbytesin{YType::uint32, "cvpdnTunnelSessionBytesIn"},
    cvpdntunnelsessiondevicetype{YType::enumeration, "cvpdnTunnelSessionDeviceType"},
    cvpdntunnelsessiondevicecallerid{YType::str, "cvpdnTunnelSessionDeviceCallerId"},
    cvpdntunnelsessiondevicephyid{YType::int32, "cvpdnTunnelSessionDevicePhyId"},
    cvpdntunnelsessionmultilink{YType::boolean, "cvpdnTunnelSessionMultilink"},
    cvpdntunnelsessionmodemslotindex{YType::uint32, "cvpdnTunnelSessionModemSlotIndex"},
    cvpdntunnelsessionmodemportindex{YType::uint32, "cvpdnTunnelSessionModemPortIndex"},
    cvpdntunnelsessionds1slotindex{YType::uint32, "cvpdnTunnelSessionDS1SlotIndex"},
    cvpdntunnelsessionds1portindex{YType::uint32, "cvpdnTunnelSessionDS1PortIndex"},
    cvpdntunnelsessionds1channelindex{YType::uint32, "cvpdnTunnelSessionDS1ChannelIndex"},
    cvpdntunnelsessionmodemcallstarttime{YType::uint32, "cvpdnTunnelSessionModemCallStartTime"},
    cvpdntunnelsessionmodemcallstartindex{YType::uint32, "cvpdnTunnelSessionModemCallStartIndex"}
{

    yang_name = "cvpdnTunnelSessionEntry"; yang_parent_name = "cvpdnTunnelSessionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::~CvpdnTunnelSessionEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdntunneltunnelid.is_set
	|| cvpdntunnelsessionid.is_set
	|| cvpdntunnelsessionusername.is_set
	|| cvpdntunnelsessionstate.is_set
	|| cvpdntunnelsessioncallduration.is_set
	|| cvpdntunnelsessionpacketsout.is_set
	|| cvpdntunnelsessionbytesout.is_set
	|| cvpdntunnelsessionpacketsin.is_set
	|| cvpdntunnelsessionbytesin.is_set
	|| cvpdntunnelsessiondevicetype.is_set
	|| cvpdntunnelsessiondevicecallerid.is_set
	|| cvpdntunnelsessiondevicephyid.is_set
	|| cvpdntunnelsessionmultilink.is_set
	|| cvpdntunnelsessionmodemslotindex.is_set
	|| cvpdntunnelsessionmodemportindex.is_set
	|| cvpdntunnelsessionds1slotindex.is_set
	|| cvpdntunnelsessionds1portindex.is_set
	|| cvpdntunnelsessionds1channelindex.is_set
	|| cvpdntunnelsessionmodemcallstarttime.is_set
	|| cvpdntunnelsessionmodemcallstartindex.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdntunneltunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelsessionid.yfilter)
	|| ydk::is_set(cvpdntunnelsessionusername.yfilter)
	|| ydk::is_set(cvpdntunnelsessionstate.yfilter)
	|| ydk::is_set(cvpdntunnelsessioncallduration.yfilter)
	|| ydk::is_set(cvpdntunnelsessionpacketsout.yfilter)
	|| ydk::is_set(cvpdntunnelsessionbytesout.yfilter)
	|| ydk::is_set(cvpdntunnelsessionpacketsin.yfilter)
	|| ydk::is_set(cvpdntunnelsessionbytesin.yfilter)
	|| ydk::is_set(cvpdntunnelsessiondevicetype.yfilter)
	|| ydk::is_set(cvpdntunnelsessiondevicecallerid.yfilter)
	|| ydk::is_set(cvpdntunnelsessiondevicephyid.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmultilink.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmodemslotindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmodemportindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionds1slotindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionds1portindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionds1channelindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmodemcallstarttime.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmodemcallstartindex.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelSessionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelSessionEntry";
    ADD_KEY_TOKEN(cvpdntunneltunnelid, "cvpdnTunnelTunnelId");
    ADD_KEY_TOKEN(cvpdntunnelsessionid, "cvpdnTunnelSessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntunneltunnelid.is_set || is_set(cvpdntunneltunnelid.yfilter)) leaf_name_data.push_back(cvpdntunneltunnelid.get_name_leafdata());
    if (cvpdntunnelsessionid.is_set || is_set(cvpdntunnelsessionid.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionid.get_name_leafdata());
    if (cvpdntunnelsessionusername.is_set || is_set(cvpdntunnelsessionusername.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionusername.get_name_leafdata());
    if (cvpdntunnelsessionstate.is_set || is_set(cvpdntunnelsessionstate.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionstate.get_name_leafdata());
    if (cvpdntunnelsessioncallduration.is_set || is_set(cvpdntunnelsessioncallduration.yfilter)) leaf_name_data.push_back(cvpdntunnelsessioncallduration.get_name_leafdata());
    if (cvpdntunnelsessionpacketsout.is_set || is_set(cvpdntunnelsessionpacketsout.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionpacketsout.get_name_leafdata());
    if (cvpdntunnelsessionbytesout.is_set || is_set(cvpdntunnelsessionbytesout.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionbytesout.get_name_leafdata());
    if (cvpdntunnelsessionpacketsin.is_set || is_set(cvpdntunnelsessionpacketsin.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionpacketsin.get_name_leafdata());
    if (cvpdntunnelsessionbytesin.is_set || is_set(cvpdntunnelsessionbytesin.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionbytesin.get_name_leafdata());
    if (cvpdntunnelsessiondevicetype.is_set || is_set(cvpdntunnelsessiondevicetype.yfilter)) leaf_name_data.push_back(cvpdntunnelsessiondevicetype.get_name_leafdata());
    if (cvpdntunnelsessiondevicecallerid.is_set || is_set(cvpdntunnelsessiondevicecallerid.yfilter)) leaf_name_data.push_back(cvpdntunnelsessiondevicecallerid.get_name_leafdata());
    if (cvpdntunnelsessiondevicephyid.is_set || is_set(cvpdntunnelsessiondevicephyid.yfilter)) leaf_name_data.push_back(cvpdntunnelsessiondevicephyid.get_name_leafdata());
    if (cvpdntunnelsessionmultilink.is_set || is_set(cvpdntunnelsessionmultilink.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmultilink.get_name_leafdata());
    if (cvpdntunnelsessionmodemslotindex.is_set || is_set(cvpdntunnelsessionmodemslotindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmodemslotindex.get_name_leafdata());
    if (cvpdntunnelsessionmodemportindex.is_set || is_set(cvpdntunnelsessionmodemportindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmodemportindex.get_name_leafdata());
    if (cvpdntunnelsessionds1slotindex.is_set || is_set(cvpdntunnelsessionds1slotindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionds1slotindex.get_name_leafdata());
    if (cvpdntunnelsessionds1portindex.is_set || is_set(cvpdntunnelsessionds1portindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionds1portindex.get_name_leafdata());
    if (cvpdntunnelsessionds1channelindex.is_set || is_set(cvpdntunnelsessionds1channelindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionds1channelindex.get_name_leafdata());
    if (cvpdntunnelsessionmodemcallstarttime.is_set || is_set(cvpdntunnelsessionmodemcallstarttime.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmodemcallstarttime.get_name_leafdata());
    if (cvpdntunnelsessionmodemcallstartindex.is_set || is_set(cvpdntunnelsessionmodemcallstartindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmodemcallstartindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid = value;
        cvpdntunneltunnelid.value_namespace = name_space;
        cvpdntunneltunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionId")
    {
        cvpdntunnelsessionid = value;
        cvpdntunnelsessionid.value_namespace = name_space;
        cvpdntunnelsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionUserName")
    {
        cvpdntunnelsessionusername = value;
        cvpdntunnelsessionusername.value_namespace = name_space;
        cvpdntunnelsessionusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionState")
    {
        cvpdntunnelsessionstate = value;
        cvpdntunnelsessionstate.value_namespace = name_space;
        cvpdntunnelsessionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionCallDuration")
    {
        cvpdntunnelsessioncallduration = value;
        cvpdntunnelsessioncallduration.value_namespace = name_space;
        cvpdntunnelsessioncallduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionPacketsOut")
    {
        cvpdntunnelsessionpacketsout = value;
        cvpdntunnelsessionpacketsout.value_namespace = name_space;
        cvpdntunnelsessionpacketsout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionBytesOut")
    {
        cvpdntunnelsessionbytesout = value;
        cvpdntunnelsessionbytesout.value_namespace = name_space;
        cvpdntunnelsessionbytesout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionPacketsIn")
    {
        cvpdntunnelsessionpacketsin = value;
        cvpdntunnelsessionpacketsin.value_namespace = name_space;
        cvpdntunnelsessionpacketsin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionBytesIn")
    {
        cvpdntunnelsessionbytesin = value;
        cvpdntunnelsessionbytesin.value_namespace = name_space;
        cvpdntunnelsessionbytesin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDeviceType")
    {
        cvpdntunnelsessiondevicetype = value;
        cvpdntunnelsessiondevicetype.value_namespace = name_space;
        cvpdntunnelsessiondevicetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDeviceCallerId")
    {
        cvpdntunnelsessiondevicecallerid = value;
        cvpdntunnelsessiondevicecallerid.value_namespace = name_space;
        cvpdntunnelsessiondevicecallerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDevicePhyId")
    {
        cvpdntunnelsessiondevicephyid = value;
        cvpdntunnelsessiondevicephyid.value_namespace = name_space;
        cvpdntunnelsessiondevicephyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionMultilink")
    {
        cvpdntunnelsessionmultilink = value;
        cvpdntunnelsessionmultilink.value_namespace = name_space;
        cvpdntunnelsessionmultilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionModemSlotIndex")
    {
        cvpdntunnelsessionmodemslotindex = value;
        cvpdntunnelsessionmodemslotindex.value_namespace = name_space;
        cvpdntunnelsessionmodemslotindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionModemPortIndex")
    {
        cvpdntunnelsessionmodemportindex = value;
        cvpdntunnelsessionmodemportindex.value_namespace = name_space;
        cvpdntunnelsessionmodemportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDS1SlotIndex")
    {
        cvpdntunnelsessionds1slotindex = value;
        cvpdntunnelsessionds1slotindex.value_namespace = name_space;
        cvpdntunnelsessionds1slotindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDS1PortIndex")
    {
        cvpdntunnelsessionds1portindex = value;
        cvpdntunnelsessionds1portindex.value_namespace = name_space;
        cvpdntunnelsessionds1portindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDS1ChannelIndex")
    {
        cvpdntunnelsessionds1channelindex = value;
        cvpdntunnelsessionds1channelindex.value_namespace = name_space;
        cvpdntunnelsessionds1channelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartTime")
    {
        cvpdntunnelsessionmodemcallstarttime = value;
        cvpdntunnelsessionmodemcallstarttime.value_namespace = name_space;
        cvpdntunnelsessionmodemcallstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartIndex")
    {
        cvpdntunnelsessionmodemcallstartindex = value;
        cvpdntunnelsessionmodemcallstartindex.value_namespace = name_space;
        cvpdntunnelsessionmodemcallstartindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionId")
    {
        cvpdntunnelsessionid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionUserName")
    {
        cvpdntunnelsessionusername.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionState")
    {
        cvpdntunnelsessionstate.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionCallDuration")
    {
        cvpdntunnelsessioncallduration.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionPacketsOut")
    {
        cvpdntunnelsessionpacketsout.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionBytesOut")
    {
        cvpdntunnelsessionbytesout.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionPacketsIn")
    {
        cvpdntunnelsessionpacketsin.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionBytesIn")
    {
        cvpdntunnelsessionbytesin.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDeviceType")
    {
        cvpdntunnelsessiondevicetype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDeviceCallerId")
    {
        cvpdntunnelsessiondevicecallerid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDevicePhyId")
    {
        cvpdntunnelsessiondevicephyid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionMultilink")
    {
        cvpdntunnelsessionmultilink.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionModemSlotIndex")
    {
        cvpdntunnelsessionmodemslotindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionModemPortIndex")
    {
        cvpdntunnelsessionmodemportindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDS1SlotIndex")
    {
        cvpdntunnelsessionds1slotindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDS1PortIndex")
    {
        cvpdntunnelsessionds1portindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDS1ChannelIndex")
    {
        cvpdntunnelsessionds1channelindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartTime")
    {
        cvpdntunnelsessionmodemcallstarttime.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartIndex")
    {
        cvpdntunnelsessionmodemcallstartindex.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelTunnelId" || name == "cvpdnTunnelSessionId" || name == "cvpdnTunnelSessionUserName" || name == "cvpdnTunnelSessionState" || name == "cvpdnTunnelSessionCallDuration" || name == "cvpdnTunnelSessionPacketsOut" || name == "cvpdnTunnelSessionBytesOut" || name == "cvpdnTunnelSessionPacketsIn" || name == "cvpdnTunnelSessionBytesIn" || name == "cvpdnTunnelSessionDeviceType" || name == "cvpdnTunnelSessionDeviceCallerId" || name == "cvpdnTunnelSessionDevicePhyId" || name == "cvpdnTunnelSessionMultilink" || name == "cvpdnTunnelSessionModemSlotIndex" || name == "cvpdnTunnelSessionModemPortIndex" || name == "cvpdnTunnelSessionDS1SlotIndex" || name == "cvpdnTunnelSessionDS1PortIndex" || name == "cvpdnTunnelSessionDS1ChannelIndex" || name == "cvpdnTunnelSessionModemCallStartTime" || name == "cvpdnTunnelSessionModemCallStartIndex")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrTable()
    :
    cvpdnsessionattrentry(this, {"cvpdnsystemtunneltype", "cvpdntunnelattrtunnelid", "cvpdnsessionattrsessionid"})
{

    yang_name = "cvpdnSessionAttrTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::~CvpdnSessionAttrTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdnsessionattrentry.len(); index++)
    {
        if(cvpdnsessionattrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnsessionattrentry.len(); index++)
    {
        if(cvpdnsessionattrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSessionAttrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnSessionAttrEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry>();
        ent_->parent = this;
        cvpdnsessionattrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdnsessionattrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSessionAttrEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrEntry()
    :
    cvpdnsystemtunneltype{YType::enumeration, "cvpdnSystemTunnelType"},
    cvpdntunnelattrtunnelid{YType::str, "cvpdnTunnelAttrTunnelId"},
    cvpdnsessionattrsessionid{YType::int32, "cvpdnSessionAttrSessionId"},
    cvpdnsessionattrusername{YType::str, "cvpdnSessionAttrUserName"},
    cvpdnsessionattrstate{YType::enumeration, "cvpdnSessionAttrState"},
    cvpdnsessionattrcallduration{YType::uint32, "cvpdnSessionAttrCallDuration"},
    cvpdnsessionattrpacketsout{YType::uint32, "cvpdnSessionAttrPacketsOut"},
    cvpdnsessionattrbytesout{YType::uint32, "cvpdnSessionAttrBytesOut"},
    cvpdnsessionattrpacketsin{YType::uint32, "cvpdnSessionAttrPacketsIn"},
    cvpdnsessionattrbytesin{YType::uint32, "cvpdnSessionAttrBytesIn"},
    cvpdnsessionattrdevicetype{YType::enumeration, "cvpdnSessionAttrDeviceType"},
    cvpdnsessionattrdevicecallerid{YType::str, "cvpdnSessionAttrDeviceCallerId"},
    cvpdnsessionattrdevicephyid{YType::int32, "cvpdnSessionAttrDevicePhyId"},
    cvpdnsessionattrmultilink{YType::boolean, "cvpdnSessionAttrMultilink"},
    cvpdnsessionattrmodemslotindex{YType::uint32, "cvpdnSessionAttrModemSlotIndex"},
    cvpdnsessionattrmodemportindex{YType::uint32, "cvpdnSessionAttrModemPortIndex"},
    cvpdnsessionattrds1slotindex{YType::uint32, "cvpdnSessionAttrDS1SlotIndex"},
    cvpdnsessionattrds1portindex{YType::uint32, "cvpdnSessionAttrDS1PortIndex"},
    cvpdnsessionattrds1channelindex{YType::uint32, "cvpdnSessionAttrDS1ChannelIndex"},
    cvpdnsessionattrmodemcallstarttime{YType::uint32, "cvpdnSessionAttrModemCallStartTime"},
    cvpdnsessionattrmodemcallstartindex{YType::uint32, "cvpdnSessionAttrModemCallStartIndex"},
    cvpdnsessionattrvirtualcircuitid{YType::uint32, "cvpdnSessionAttrVirtualCircuitID"},
    cvpdnsessionattrsentpktsdropped{YType::uint32, "cvpdnSessionAttrSentPktsDropped"},
    cvpdnsessionattrrecvpktsdropped{YType::uint32, "cvpdnSessionAttrRecvPktsDropped"},
    cvpdnsessionattrmultilinkbundle{YType::str, "cvpdnSessionAttrMultilinkBundle"},
    cvpdnsessionattrmultilinkifindex{YType::int32, "cvpdnSessionAttrMultilinkIfIndex"}
{

    yang_name = "cvpdnSessionAttrEntry"; yang_parent_name = "cvpdnSessionAttrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::~CvpdnSessionAttrEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdnsystemtunneltype.is_set
	|| cvpdntunnelattrtunnelid.is_set
	|| cvpdnsessionattrsessionid.is_set
	|| cvpdnsessionattrusername.is_set
	|| cvpdnsessionattrstate.is_set
	|| cvpdnsessionattrcallduration.is_set
	|| cvpdnsessionattrpacketsout.is_set
	|| cvpdnsessionattrbytesout.is_set
	|| cvpdnsessionattrpacketsin.is_set
	|| cvpdnsessionattrbytesin.is_set
	|| cvpdnsessionattrdevicetype.is_set
	|| cvpdnsessionattrdevicecallerid.is_set
	|| cvpdnsessionattrdevicephyid.is_set
	|| cvpdnsessionattrmultilink.is_set
	|| cvpdnsessionattrmodemslotindex.is_set
	|| cvpdnsessionattrmodemportindex.is_set
	|| cvpdnsessionattrds1slotindex.is_set
	|| cvpdnsessionattrds1portindex.is_set
	|| cvpdnsessionattrds1channelindex.is_set
	|| cvpdnsessionattrmodemcallstarttime.is_set
	|| cvpdnsessionattrmodemcallstartindex.is_set
	|| cvpdnsessionattrvirtualcircuitid.is_set
	|| cvpdnsessionattrsentpktsdropped.is_set
	|| cvpdnsessionattrrecvpktsdropped.is_set
	|| cvpdnsessionattrmultilinkbundle.is_set
	|| cvpdnsessionattrmultilinkifindex.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnsystemtunneltype.yfilter)
	|| ydk::is_set(cvpdntunnelattrtunnelid.yfilter)
	|| ydk::is_set(cvpdnsessionattrsessionid.yfilter)
	|| ydk::is_set(cvpdnsessionattrusername.yfilter)
	|| ydk::is_set(cvpdnsessionattrstate.yfilter)
	|| ydk::is_set(cvpdnsessionattrcallduration.yfilter)
	|| ydk::is_set(cvpdnsessionattrpacketsout.yfilter)
	|| ydk::is_set(cvpdnsessionattrbytesout.yfilter)
	|| ydk::is_set(cvpdnsessionattrpacketsin.yfilter)
	|| ydk::is_set(cvpdnsessionattrbytesin.yfilter)
	|| ydk::is_set(cvpdnsessionattrdevicetype.yfilter)
	|| ydk::is_set(cvpdnsessionattrdevicecallerid.yfilter)
	|| ydk::is_set(cvpdnsessionattrdevicephyid.yfilter)
	|| ydk::is_set(cvpdnsessionattrmultilink.yfilter)
	|| ydk::is_set(cvpdnsessionattrmodemslotindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrmodemportindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrds1slotindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrds1portindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrds1channelindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrmodemcallstarttime.yfilter)
	|| ydk::is_set(cvpdnsessionattrmodemcallstartindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrvirtualcircuitid.yfilter)
	|| ydk::is_set(cvpdnsessionattrsentpktsdropped.yfilter)
	|| ydk::is_set(cvpdnsessionattrrecvpktsdropped.yfilter)
	|| ydk::is_set(cvpdnsessionattrmultilinkbundle.yfilter)
	|| ydk::is_set(cvpdnsessionattrmultilinkifindex.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnSessionAttrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSessionAttrEntry";
    ADD_KEY_TOKEN(cvpdnsystemtunneltype, "cvpdnSystemTunnelType");
    ADD_KEY_TOKEN(cvpdntunnelattrtunnelid, "cvpdnTunnelAttrTunnelId");
    ADD_KEY_TOKEN(cvpdnsessionattrsessionid, "cvpdnSessionAttrSessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.yfilter)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdntunnelattrtunnelid.is_set || is_set(cvpdntunnelattrtunnelid.yfilter)) leaf_name_data.push_back(cvpdntunnelattrtunnelid.get_name_leafdata());
    if (cvpdnsessionattrsessionid.is_set || is_set(cvpdnsessionattrsessionid.yfilter)) leaf_name_data.push_back(cvpdnsessionattrsessionid.get_name_leafdata());
    if (cvpdnsessionattrusername.is_set || is_set(cvpdnsessionattrusername.yfilter)) leaf_name_data.push_back(cvpdnsessionattrusername.get_name_leafdata());
    if (cvpdnsessionattrstate.is_set || is_set(cvpdnsessionattrstate.yfilter)) leaf_name_data.push_back(cvpdnsessionattrstate.get_name_leafdata());
    if (cvpdnsessionattrcallduration.is_set || is_set(cvpdnsessionattrcallduration.yfilter)) leaf_name_data.push_back(cvpdnsessionattrcallduration.get_name_leafdata());
    if (cvpdnsessionattrpacketsout.is_set || is_set(cvpdnsessionattrpacketsout.yfilter)) leaf_name_data.push_back(cvpdnsessionattrpacketsout.get_name_leafdata());
    if (cvpdnsessionattrbytesout.is_set || is_set(cvpdnsessionattrbytesout.yfilter)) leaf_name_data.push_back(cvpdnsessionattrbytesout.get_name_leafdata());
    if (cvpdnsessionattrpacketsin.is_set || is_set(cvpdnsessionattrpacketsin.yfilter)) leaf_name_data.push_back(cvpdnsessionattrpacketsin.get_name_leafdata());
    if (cvpdnsessionattrbytesin.is_set || is_set(cvpdnsessionattrbytesin.yfilter)) leaf_name_data.push_back(cvpdnsessionattrbytesin.get_name_leafdata());
    if (cvpdnsessionattrdevicetype.is_set || is_set(cvpdnsessionattrdevicetype.yfilter)) leaf_name_data.push_back(cvpdnsessionattrdevicetype.get_name_leafdata());
    if (cvpdnsessionattrdevicecallerid.is_set || is_set(cvpdnsessionattrdevicecallerid.yfilter)) leaf_name_data.push_back(cvpdnsessionattrdevicecallerid.get_name_leafdata());
    if (cvpdnsessionattrdevicephyid.is_set || is_set(cvpdnsessionattrdevicephyid.yfilter)) leaf_name_data.push_back(cvpdnsessionattrdevicephyid.get_name_leafdata());
    if (cvpdnsessionattrmultilink.is_set || is_set(cvpdnsessionattrmultilink.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmultilink.get_name_leafdata());
    if (cvpdnsessionattrmodemslotindex.is_set || is_set(cvpdnsessionattrmodemslotindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmodemslotindex.get_name_leafdata());
    if (cvpdnsessionattrmodemportindex.is_set || is_set(cvpdnsessionattrmodemportindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmodemportindex.get_name_leafdata());
    if (cvpdnsessionattrds1slotindex.is_set || is_set(cvpdnsessionattrds1slotindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrds1slotindex.get_name_leafdata());
    if (cvpdnsessionattrds1portindex.is_set || is_set(cvpdnsessionattrds1portindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrds1portindex.get_name_leafdata());
    if (cvpdnsessionattrds1channelindex.is_set || is_set(cvpdnsessionattrds1channelindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrds1channelindex.get_name_leafdata());
    if (cvpdnsessionattrmodemcallstarttime.is_set || is_set(cvpdnsessionattrmodemcallstarttime.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmodemcallstarttime.get_name_leafdata());
    if (cvpdnsessionattrmodemcallstartindex.is_set || is_set(cvpdnsessionattrmodemcallstartindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmodemcallstartindex.get_name_leafdata());
    if (cvpdnsessionattrvirtualcircuitid.is_set || is_set(cvpdnsessionattrvirtualcircuitid.yfilter)) leaf_name_data.push_back(cvpdnsessionattrvirtualcircuitid.get_name_leafdata());
    if (cvpdnsessionattrsentpktsdropped.is_set || is_set(cvpdnsessionattrsentpktsdropped.yfilter)) leaf_name_data.push_back(cvpdnsessionattrsentpktsdropped.get_name_leafdata());
    if (cvpdnsessionattrrecvpktsdropped.is_set || is_set(cvpdnsessionattrrecvpktsdropped.yfilter)) leaf_name_data.push_back(cvpdnsessionattrrecvpktsdropped.get_name_leafdata());
    if (cvpdnsessionattrmultilinkbundle.is_set || is_set(cvpdnsessionattrmultilinkbundle.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmultilinkbundle.get_name_leafdata());
    if (cvpdnsessionattrmultilinkifindex.is_set || is_set(cvpdnsessionattrmultilinkifindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmultilinkifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
        cvpdnsystemtunneltype.value_namespace = name_space;
        cvpdnsystemtunneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid = value;
        cvpdntunnelattrtunnelid.value_namespace = name_space;
        cvpdntunnelattrtunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrSessionId")
    {
        cvpdnsessionattrsessionid = value;
        cvpdnsessionattrsessionid.value_namespace = name_space;
        cvpdnsessionattrsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrUserName")
    {
        cvpdnsessionattrusername = value;
        cvpdnsessionattrusername.value_namespace = name_space;
        cvpdnsessionattrusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrState")
    {
        cvpdnsessionattrstate = value;
        cvpdnsessionattrstate.value_namespace = name_space;
        cvpdnsessionattrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrCallDuration")
    {
        cvpdnsessionattrcallduration = value;
        cvpdnsessionattrcallduration.value_namespace = name_space;
        cvpdnsessionattrcallduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrPacketsOut")
    {
        cvpdnsessionattrpacketsout = value;
        cvpdnsessionattrpacketsout.value_namespace = name_space;
        cvpdnsessionattrpacketsout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrBytesOut")
    {
        cvpdnsessionattrbytesout = value;
        cvpdnsessionattrbytesout.value_namespace = name_space;
        cvpdnsessionattrbytesout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrPacketsIn")
    {
        cvpdnsessionattrpacketsin = value;
        cvpdnsessionattrpacketsin.value_namespace = name_space;
        cvpdnsessionattrpacketsin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrBytesIn")
    {
        cvpdnsessionattrbytesin = value;
        cvpdnsessionattrbytesin.value_namespace = name_space;
        cvpdnsessionattrbytesin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDeviceType")
    {
        cvpdnsessionattrdevicetype = value;
        cvpdnsessionattrdevicetype.value_namespace = name_space;
        cvpdnsessionattrdevicetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDeviceCallerId")
    {
        cvpdnsessionattrdevicecallerid = value;
        cvpdnsessionattrdevicecallerid.value_namespace = name_space;
        cvpdnsessionattrdevicecallerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDevicePhyId")
    {
        cvpdnsessionattrdevicephyid = value;
        cvpdnsessionattrdevicephyid.value_namespace = name_space;
        cvpdnsessionattrdevicephyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrMultilink")
    {
        cvpdnsessionattrmultilink = value;
        cvpdnsessionattrmultilink.value_namespace = name_space;
        cvpdnsessionattrmultilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrModemSlotIndex")
    {
        cvpdnsessionattrmodemslotindex = value;
        cvpdnsessionattrmodemslotindex.value_namespace = name_space;
        cvpdnsessionattrmodemslotindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrModemPortIndex")
    {
        cvpdnsessionattrmodemportindex = value;
        cvpdnsessionattrmodemportindex.value_namespace = name_space;
        cvpdnsessionattrmodemportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDS1SlotIndex")
    {
        cvpdnsessionattrds1slotindex = value;
        cvpdnsessionattrds1slotindex.value_namespace = name_space;
        cvpdnsessionattrds1slotindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDS1PortIndex")
    {
        cvpdnsessionattrds1portindex = value;
        cvpdnsessionattrds1portindex.value_namespace = name_space;
        cvpdnsessionattrds1portindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDS1ChannelIndex")
    {
        cvpdnsessionattrds1channelindex = value;
        cvpdnsessionattrds1channelindex.value_namespace = name_space;
        cvpdnsessionattrds1channelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartTime")
    {
        cvpdnsessionattrmodemcallstarttime = value;
        cvpdnsessionattrmodemcallstarttime.value_namespace = name_space;
        cvpdnsessionattrmodemcallstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartIndex")
    {
        cvpdnsessionattrmodemcallstartindex = value;
        cvpdnsessionattrmodemcallstartindex.value_namespace = name_space;
        cvpdnsessionattrmodemcallstartindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrVirtualCircuitID")
    {
        cvpdnsessionattrvirtualcircuitid = value;
        cvpdnsessionattrvirtualcircuitid.value_namespace = name_space;
        cvpdnsessionattrvirtualcircuitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrSentPktsDropped")
    {
        cvpdnsessionattrsentpktsdropped = value;
        cvpdnsessionattrsentpktsdropped.value_namespace = name_space;
        cvpdnsessionattrsentpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrRecvPktsDropped")
    {
        cvpdnsessionattrrecvpktsdropped = value;
        cvpdnsessionattrrecvpktsdropped.value_namespace = name_space;
        cvpdnsessionattrrecvpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrMultilinkBundle")
    {
        cvpdnsessionattrmultilinkbundle = value;
        cvpdnsessionattrmultilinkbundle.value_namespace = name_space;
        cvpdnsessionattrmultilinkbundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrMultilinkIfIndex")
    {
        cvpdnsessionattrmultilinkifindex = value;
        cvpdnsessionattrmultilinkifindex.value_namespace = name_space;
        cvpdnsessionattrmultilinkifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrSessionId")
    {
        cvpdnsessionattrsessionid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrUserName")
    {
        cvpdnsessionattrusername.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrState")
    {
        cvpdnsessionattrstate.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrCallDuration")
    {
        cvpdnsessionattrcallduration.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrPacketsOut")
    {
        cvpdnsessionattrpacketsout.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrBytesOut")
    {
        cvpdnsessionattrbytesout.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrPacketsIn")
    {
        cvpdnsessionattrpacketsin.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrBytesIn")
    {
        cvpdnsessionattrbytesin.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDeviceType")
    {
        cvpdnsessionattrdevicetype.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDeviceCallerId")
    {
        cvpdnsessionattrdevicecallerid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDevicePhyId")
    {
        cvpdnsessionattrdevicephyid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrMultilink")
    {
        cvpdnsessionattrmultilink.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrModemSlotIndex")
    {
        cvpdnsessionattrmodemslotindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrModemPortIndex")
    {
        cvpdnsessionattrmodemportindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDS1SlotIndex")
    {
        cvpdnsessionattrds1slotindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDS1PortIndex")
    {
        cvpdnsessionattrds1portindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDS1ChannelIndex")
    {
        cvpdnsessionattrds1channelindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartTime")
    {
        cvpdnsessionattrmodemcallstarttime.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartIndex")
    {
        cvpdnsessionattrmodemcallstartindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrVirtualCircuitID")
    {
        cvpdnsessionattrvirtualcircuitid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrSentPktsDropped")
    {
        cvpdnsessionattrsentpktsdropped.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrRecvPktsDropped")
    {
        cvpdnsessionattrrecvpktsdropped.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrMultilinkBundle")
    {
        cvpdnsessionattrmultilinkbundle.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrMultilinkIfIndex")
    {
        cvpdnsessionattrmultilinkifindex.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSystemTunnelType" || name == "cvpdnTunnelAttrTunnelId" || name == "cvpdnSessionAttrSessionId" || name == "cvpdnSessionAttrUserName" || name == "cvpdnSessionAttrState" || name == "cvpdnSessionAttrCallDuration" || name == "cvpdnSessionAttrPacketsOut" || name == "cvpdnSessionAttrBytesOut" || name == "cvpdnSessionAttrPacketsIn" || name == "cvpdnSessionAttrBytesIn" || name == "cvpdnSessionAttrDeviceType" || name == "cvpdnSessionAttrDeviceCallerId" || name == "cvpdnSessionAttrDevicePhyId" || name == "cvpdnSessionAttrMultilink" || name == "cvpdnSessionAttrModemSlotIndex" || name == "cvpdnSessionAttrModemPortIndex" || name == "cvpdnSessionAttrDS1SlotIndex" || name == "cvpdnSessionAttrDS1PortIndex" || name == "cvpdnSessionAttrDS1ChannelIndex" || name == "cvpdnSessionAttrModemCallStartTime" || name == "cvpdnSessionAttrModemCallStartIndex" || name == "cvpdnSessionAttrVirtualCircuitID" || name == "cvpdnSessionAttrSentPktsDropped" || name == "cvpdnSessionAttrRecvPktsDropped" || name == "cvpdnSessionAttrMultilinkBundle" || name == "cvpdnSessionAttrMultilinkIfIndex")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoTable()
    :
    cvpdnusertofailhistinfoentry(this, {"cvpdnunametofailhistuname", "cvpdnunametofailhisttunnelid"})
{

    yang_name = "cvpdnUserToFailHistInfoTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::~CvpdnUserToFailHistInfoTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdnusertofailhistinfoentry.len(); index++)
    {
        if(cvpdnusertofailhistinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnusertofailhistinfoentry.len(); index++)
    {
        if(cvpdnusertofailhistinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnUserToFailHistInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnUserToFailHistInfoEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry>();
        ent_->parent = this;
        cvpdnusertofailhistinfoentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdnusertofailhistinfoentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnUserToFailHistInfoEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::CvpdnUserToFailHistInfoEntry()
    :
    cvpdnunametofailhistuname{YType::str, "cvpdnUnameToFailHistUname"},
    cvpdnunametofailhisttunnelid{YType::uint32, "cvpdnUnameToFailHistTunnelId"},
    cvpdnunametofailhistuserid{YType::uint32, "cvpdnUnameToFailHistUserId"},
    cvpdnunametofailhistlocalinitconn{YType::boolean, "cvpdnUnameToFailHistLocalInitConn"},
    cvpdnunametofailhistlocalname{YType::str, "cvpdnUnameToFailHistLocalName"},
    cvpdnunametofailhistremotename{YType::str, "cvpdnUnameToFailHistRemoteName"},
    cvpdnunametofailhistsourceip{YType::str, "cvpdnUnameToFailHistSourceIp"},
    cvpdnunametofailhistdestip{YType::str, "cvpdnUnameToFailHistDestIp"},
    cvpdnunametofailhistcount{YType::uint32, "cvpdnUnameToFailHistCount"},
    cvpdnunametofailhistfailtime{YType::uint32, "cvpdnUnameToFailHistFailTime"},
    cvpdnunametofailhistfailtype{YType::str, "cvpdnUnameToFailHistFailType"},
    cvpdnunametofailhistfailreason{YType::str, "cvpdnUnameToFailHistFailReason"},
    cvpdnunametofailhistsourceinettype{YType::enumeration, "cvpdnUnameToFailHistSourceInetType"},
    cvpdnunametofailhistsourceinetaddr{YType::str, "cvpdnUnameToFailHistSourceInetAddr"},
    cvpdnunametofailhistdestinettype{YType::enumeration, "cvpdnUnameToFailHistDestInetType"},
    cvpdnunametofailhistdestinetaddr{YType::str, "cvpdnUnameToFailHistDestInetAddr"}
{

    yang_name = "cvpdnUserToFailHistInfoEntry"; yang_parent_name = "cvpdnUserToFailHistInfoTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::~CvpdnUserToFailHistInfoEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdnunametofailhistuname.is_set
	|| cvpdnunametofailhisttunnelid.is_set
	|| cvpdnunametofailhistuserid.is_set
	|| cvpdnunametofailhistlocalinitconn.is_set
	|| cvpdnunametofailhistlocalname.is_set
	|| cvpdnunametofailhistremotename.is_set
	|| cvpdnunametofailhistsourceip.is_set
	|| cvpdnunametofailhistdestip.is_set
	|| cvpdnunametofailhistcount.is_set
	|| cvpdnunametofailhistfailtime.is_set
	|| cvpdnunametofailhistfailtype.is_set
	|| cvpdnunametofailhistfailreason.is_set
	|| cvpdnunametofailhistsourceinettype.is_set
	|| cvpdnunametofailhistsourceinetaddr.is_set
	|| cvpdnunametofailhistdestinettype.is_set
	|| cvpdnunametofailhistdestinetaddr.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnunametofailhistuname.yfilter)
	|| ydk::is_set(cvpdnunametofailhisttunnelid.yfilter)
	|| ydk::is_set(cvpdnunametofailhistuserid.yfilter)
	|| ydk::is_set(cvpdnunametofailhistlocalinitconn.yfilter)
	|| ydk::is_set(cvpdnunametofailhistlocalname.yfilter)
	|| ydk::is_set(cvpdnunametofailhistremotename.yfilter)
	|| ydk::is_set(cvpdnunametofailhistsourceip.yfilter)
	|| ydk::is_set(cvpdnunametofailhistdestip.yfilter)
	|| ydk::is_set(cvpdnunametofailhistcount.yfilter)
	|| ydk::is_set(cvpdnunametofailhistfailtime.yfilter)
	|| ydk::is_set(cvpdnunametofailhistfailtype.yfilter)
	|| ydk::is_set(cvpdnunametofailhistfailreason.yfilter)
	|| ydk::is_set(cvpdnunametofailhistsourceinettype.yfilter)
	|| ydk::is_set(cvpdnunametofailhistsourceinetaddr.yfilter)
	|| ydk::is_set(cvpdnunametofailhistdestinettype.yfilter)
	|| ydk::is_set(cvpdnunametofailhistdestinetaddr.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnUserToFailHistInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnUserToFailHistInfoEntry";
    ADD_KEY_TOKEN(cvpdnunametofailhistuname, "cvpdnUnameToFailHistUname");
    ADD_KEY_TOKEN(cvpdnunametofailhisttunnelid, "cvpdnUnameToFailHistTunnelId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnunametofailhistuname.is_set || is_set(cvpdnunametofailhistuname.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistuname.get_name_leafdata());
    if (cvpdnunametofailhisttunnelid.is_set || is_set(cvpdnunametofailhisttunnelid.yfilter)) leaf_name_data.push_back(cvpdnunametofailhisttunnelid.get_name_leafdata());
    if (cvpdnunametofailhistuserid.is_set || is_set(cvpdnunametofailhistuserid.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistuserid.get_name_leafdata());
    if (cvpdnunametofailhistlocalinitconn.is_set || is_set(cvpdnunametofailhistlocalinitconn.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistlocalinitconn.get_name_leafdata());
    if (cvpdnunametofailhistlocalname.is_set || is_set(cvpdnunametofailhistlocalname.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistlocalname.get_name_leafdata());
    if (cvpdnunametofailhistremotename.is_set || is_set(cvpdnunametofailhistremotename.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistremotename.get_name_leafdata());
    if (cvpdnunametofailhistsourceip.is_set || is_set(cvpdnunametofailhistsourceip.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistsourceip.get_name_leafdata());
    if (cvpdnunametofailhistdestip.is_set || is_set(cvpdnunametofailhistdestip.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistdestip.get_name_leafdata());
    if (cvpdnunametofailhistcount.is_set || is_set(cvpdnunametofailhistcount.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistcount.get_name_leafdata());
    if (cvpdnunametofailhistfailtime.is_set || is_set(cvpdnunametofailhistfailtime.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistfailtime.get_name_leafdata());
    if (cvpdnunametofailhistfailtype.is_set || is_set(cvpdnunametofailhistfailtype.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistfailtype.get_name_leafdata());
    if (cvpdnunametofailhistfailreason.is_set || is_set(cvpdnunametofailhistfailreason.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistfailreason.get_name_leafdata());
    if (cvpdnunametofailhistsourceinettype.is_set || is_set(cvpdnunametofailhistsourceinettype.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistsourceinettype.get_name_leafdata());
    if (cvpdnunametofailhistsourceinetaddr.is_set || is_set(cvpdnunametofailhistsourceinetaddr.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistsourceinetaddr.get_name_leafdata());
    if (cvpdnunametofailhistdestinettype.is_set || is_set(cvpdnunametofailhistdestinettype.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistdestinettype.get_name_leafdata());
    if (cvpdnunametofailhistdestinetaddr.is_set || is_set(cvpdnunametofailhistdestinetaddr.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistdestinetaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnUnameToFailHistUname")
    {
        cvpdnunametofailhistuname = value;
        cvpdnunametofailhistuname.value_namespace = name_space;
        cvpdnunametofailhistuname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistTunnelId")
    {
        cvpdnunametofailhisttunnelid = value;
        cvpdnunametofailhisttunnelid.value_namespace = name_space;
        cvpdnunametofailhisttunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistUserId")
    {
        cvpdnunametofailhistuserid = value;
        cvpdnunametofailhistuserid.value_namespace = name_space;
        cvpdnunametofailhistuserid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistLocalInitConn")
    {
        cvpdnunametofailhistlocalinitconn = value;
        cvpdnunametofailhistlocalinitconn.value_namespace = name_space;
        cvpdnunametofailhistlocalinitconn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistLocalName")
    {
        cvpdnunametofailhistlocalname = value;
        cvpdnunametofailhistlocalname.value_namespace = name_space;
        cvpdnunametofailhistlocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistRemoteName")
    {
        cvpdnunametofailhistremotename = value;
        cvpdnunametofailhistremotename.value_namespace = name_space;
        cvpdnunametofailhistremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistSourceIp")
    {
        cvpdnunametofailhistsourceip = value;
        cvpdnunametofailhistsourceip.value_namespace = name_space;
        cvpdnunametofailhistsourceip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistDestIp")
    {
        cvpdnunametofailhistdestip = value;
        cvpdnunametofailhistdestip.value_namespace = name_space;
        cvpdnunametofailhistdestip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistCount")
    {
        cvpdnunametofailhistcount = value;
        cvpdnunametofailhistcount.value_namespace = name_space;
        cvpdnunametofailhistcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistFailTime")
    {
        cvpdnunametofailhistfailtime = value;
        cvpdnunametofailhistfailtime.value_namespace = name_space;
        cvpdnunametofailhistfailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistFailType")
    {
        cvpdnunametofailhistfailtype = value;
        cvpdnunametofailhistfailtype.value_namespace = name_space;
        cvpdnunametofailhistfailtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistFailReason")
    {
        cvpdnunametofailhistfailreason = value;
        cvpdnunametofailhistfailreason.value_namespace = name_space;
        cvpdnunametofailhistfailreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetType")
    {
        cvpdnunametofailhistsourceinettype = value;
        cvpdnunametofailhistsourceinettype.value_namespace = name_space;
        cvpdnunametofailhistsourceinettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetAddr")
    {
        cvpdnunametofailhistsourceinetaddr = value;
        cvpdnunametofailhistsourceinetaddr.value_namespace = name_space;
        cvpdnunametofailhistsourceinetaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetType")
    {
        cvpdnunametofailhistdestinettype = value;
        cvpdnunametofailhistdestinettype.value_namespace = name_space;
        cvpdnunametofailhistdestinettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetAddr")
    {
        cvpdnunametofailhistdestinetaddr = value;
        cvpdnunametofailhistdestinetaddr.value_namespace = name_space;
        cvpdnunametofailhistdestinetaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnUnameToFailHistUname")
    {
        cvpdnunametofailhistuname.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistTunnelId")
    {
        cvpdnunametofailhisttunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistUserId")
    {
        cvpdnunametofailhistuserid.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistLocalInitConn")
    {
        cvpdnunametofailhistlocalinitconn.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistLocalName")
    {
        cvpdnunametofailhistlocalname.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistRemoteName")
    {
        cvpdnunametofailhistremotename.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistSourceIp")
    {
        cvpdnunametofailhistsourceip.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistDestIp")
    {
        cvpdnunametofailhistdestip.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistCount")
    {
        cvpdnunametofailhistcount.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistFailTime")
    {
        cvpdnunametofailhistfailtime.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistFailType")
    {
        cvpdnunametofailhistfailtype.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistFailReason")
    {
        cvpdnunametofailhistfailreason.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetType")
    {
        cvpdnunametofailhistsourceinettype.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetAddr")
    {
        cvpdnunametofailhistsourceinetaddr.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetType")
    {
        cvpdnunametofailhistdestinettype.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetAddr")
    {
        cvpdnunametofailhistdestinetaddr.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnUnameToFailHistUname" || name == "cvpdnUnameToFailHistTunnelId" || name == "cvpdnUnameToFailHistUserId" || name == "cvpdnUnameToFailHistLocalInitConn" || name == "cvpdnUnameToFailHistLocalName" || name == "cvpdnUnameToFailHistRemoteName" || name == "cvpdnUnameToFailHistSourceIp" || name == "cvpdnUnameToFailHistDestIp" || name == "cvpdnUnameToFailHistCount" || name == "cvpdnUnameToFailHistFailTime" || name == "cvpdnUnameToFailHistFailType" || name == "cvpdnUnameToFailHistFailReason" || name == "cvpdnUnameToFailHistSourceInetType" || name == "cvpdnUnameToFailHistSourceInetAddr" || name == "cvpdnUnameToFailHistDestInetType" || name == "cvpdnUnameToFailHistDestInetAddr")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateTable()
    :
    cvpdntemplateentry(this, {"cvpdntemplatename"})
{

    yang_name = "cvpdnTemplateTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnTemplateTable::~CvpdnTemplateTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnTemplateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdntemplateentry.len(); index++)
    {
        if(cvpdntemplateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnTemplateTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntemplateentry.len(); index++)
    {
        if(cvpdntemplateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnTemplateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnTemplateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTemplateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnTemplateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnTemplateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnTemplateEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry>();
        ent_->parent = this;
        cvpdntemplateentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnTemplateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdntemplateentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnTemplateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnTemplateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnTemplateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTemplateEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::CvpdnTemplateEntry()
    :
    cvpdntemplatename{YType::str, "cvpdnTemplateName"},
    cvpdntemplateactivesessions{YType::uint32, "cvpdnTemplateActiveSessions"}
{

    yang_name = "cvpdnTemplateEntry"; yang_parent_name = "cvpdnTemplateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::~CvpdnTemplateEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdntemplatename.is_set
	|| cvpdntemplateactivesessions.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdntemplatename.yfilter)
	|| ydk::is_set(cvpdntemplateactivesessions.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTemplateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTemplateEntry";
    ADD_KEY_TOKEN(cvpdntemplatename, "cvpdnTemplateName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntemplatename.is_set || is_set(cvpdntemplatename.yfilter)) leaf_name_data.push_back(cvpdntemplatename.get_name_leafdata());
    if (cvpdntemplateactivesessions.is_set || is_set(cvpdntemplateactivesessions.yfilter)) leaf_name_data.push_back(cvpdntemplateactivesessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnTemplateName")
    {
        cvpdntemplatename = value;
        cvpdntemplatename.value_namespace = name_space;
        cvpdntemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTemplateActiveSessions")
    {
        cvpdntemplateactivesessions = value;
        cvpdntemplateactivesessions.value_namespace = name_space;
        cvpdntemplateactivesessions.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnTemplateName")
    {
        cvpdntemplatename.yfilter = yfilter;
    }
    if(value_path == "cvpdnTemplateActiveSessions")
    {
        cvpdntemplateactivesessions.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTemplateName" || name == "cvpdnTemplateActiveSessions")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleTable()
    :
    cvpdnbundleentry(this, {"cvpdnbundlename"})
{

    yang_name = "cvpdnBundleTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnBundleTable::~CvpdnBundleTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnBundleTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdnbundleentry.len(); index++)
    {
        if(cvpdnbundleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnBundleTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnbundleentry.len(); index++)
    {
        if(cvpdnbundleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnBundleTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnBundleTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnBundleTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnBundleTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnBundleEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry>();
        ent_->parent = this;
        cvpdnbundleentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnBundleTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdnbundleentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnBundleTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnBundleTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnBundleTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEntry()
    :
    cvpdnbundlename{YType::str, "cvpdnBundleName"},
    cvpdnbundlelinkcount{YType::uint32, "cvpdnBundleLinkCount"},
    cvpdnbundleendpointtype{YType::enumeration, "cvpdnBundleEndpointType"},
    cvpdnbundleendpoint{YType::str, "cvpdnBundleEndpoint"},
    cvpdnbundlepeeripaddrtype{YType::enumeration, "cvpdnBundlePeerIpAddrType"},
    cvpdnbundlepeeripaddr{YType::str, "cvpdnBundlePeerIpAddr"},
    cvpdnbundleendpointclass{YType::enumeration, "cvpdnBundleEndpointClass"}
{

    yang_name = "cvpdnBundleEntry"; yang_parent_name = "cvpdnBundleTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::~CvpdnBundleEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdnbundlename.is_set
	|| cvpdnbundlelinkcount.is_set
	|| cvpdnbundleendpointtype.is_set
	|| cvpdnbundleendpoint.is_set
	|| cvpdnbundlepeeripaddrtype.is_set
	|| cvpdnbundlepeeripaddr.is_set
	|| cvpdnbundleendpointclass.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnbundlename.yfilter)
	|| ydk::is_set(cvpdnbundlelinkcount.yfilter)
	|| ydk::is_set(cvpdnbundleendpointtype.yfilter)
	|| ydk::is_set(cvpdnbundleendpoint.yfilter)
	|| ydk::is_set(cvpdnbundlepeeripaddrtype.yfilter)
	|| ydk::is_set(cvpdnbundlepeeripaddr.yfilter)
	|| ydk::is_set(cvpdnbundleendpointclass.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnBundleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleEntry";
    ADD_KEY_TOKEN(cvpdnbundlename, "cvpdnBundleName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundlename.is_set || is_set(cvpdnbundlename.yfilter)) leaf_name_data.push_back(cvpdnbundlename.get_name_leafdata());
    if (cvpdnbundlelinkcount.is_set || is_set(cvpdnbundlelinkcount.yfilter)) leaf_name_data.push_back(cvpdnbundlelinkcount.get_name_leafdata());
    if (cvpdnbundleendpointtype.is_set || is_set(cvpdnbundleendpointtype.yfilter)) leaf_name_data.push_back(cvpdnbundleendpointtype.get_name_leafdata());
    if (cvpdnbundleendpoint.is_set || is_set(cvpdnbundleendpoint.yfilter)) leaf_name_data.push_back(cvpdnbundleendpoint.get_name_leafdata());
    if (cvpdnbundlepeeripaddrtype.is_set || is_set(cvpdnbundlepeeripaddrtype.yfilter)) leaf_name_data.push_back(cvpdnbundlepeeripaddrtype.get_name_leafdata());
    if (cvpdnbundlepeeripaddr.is_set || is_set(cvpdnbundlepeeripaddr.yfilter)) leaf_name_data.push_back(cvpdnbundlepeeripaddr.get_name_leafdata());
    if (cvpdnbundleendpointclass.is_set || is_set(cvpdnbundleendpointclass.yfilter)) leaf_name_data.push_back(cvpdnbundleendpointclass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename = value;
        cvpdnbundlename.value_namespace = name_space;
        cvpdnbundlename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleLinkCount")
    {
        cvpdnbundlelinkcount = value;
        cvpdnbundlelinkcount.value_namespace = name_space;
        cvpdnbundlelinkcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleEndpointType")
    {
        cvpdnbundleendpointtype = value;
        cvpdnbundleendpointtype.value_namespace = name_space;
        cvpdnbundleendpointtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleEndpoint")
    {
        cvpdnbundleendpoint = value;
        cvpdnbundleendpoint.value_namespace = name_space;
        cvpdnbundleendpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlePeerIpAddrType")
    {
        cvpdnbundlepeeripaddrtype = value;
        cvpdnbundlepeeripaddrtype.value_namespace = name_space;
        cvpdnbundlepeeripaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlePeerIpAddr")
    {
        cvpdnbundlepeeripaddr = value;
        cvpdnbundlepeeripaddr.value_namespace = name_space;
        cvpdnbundlepeeripaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleEndpointClass")
    {
        cvpdnbundleendpointclass = value;
        cvpdnbundleendpointclass.value_namespace = name_space;
        cvpdnbundleendpointclass.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleLinkCount")
    {
        cvpdnbundlelinkcount.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleEndpointType")
    {
        cvpdnbundleendpointtype.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleEndpoint")
    {
        cvpdnbundleendpoint.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlePeerIpAddrType")
    {
        cvpdnbundlepeeripaddrtype.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlePeerIpAddr")
    {
        cvpdnbundlepeeripaddr.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleEndpointClass")
    {
        cvpdnbundleendpointclass.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleName" || name == "cvpdnBundleLinkCount" || name == "cvpdnBundleEndpointType" || name == "cvpdnBundleEndpoint" || name == "cvpdnBundlePeerIpAddrType" || name == "cvpdnBundlePeerIpAddr" || name == "cvpdnBundleEndpointClass")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildTable()
    :
    cvpdnbundlechildentry(this, {"cvpdnbundlename", "cvpdnbundlechildtunneltype", "cvpdnbundlechildtunnelid", "cvpdnbundlechildsessionid"})
{

    yang_name = "cvpdnBundleChildTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnBundleChildTable::~CvpdnBundleChildTable()
{
}

bool CISCOVPDNMGMTMIB::CvpdnBundleChildTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvpdnbundlechildentry.len(); index++)
    {
        if(cvpdnbundlechildentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::CvpdnBundleChildTable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnbundlechildentry.len(); index++)
    {
        if(cvpdnbundlechildentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnBundleChildTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnBundleChildTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleChildTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnBundleChildTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnBundleChildTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnBundleChildEntry")
    {
        auto ent_ = std::make_shared<CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry>();
        ent_->parent = this;
        cvpdnbundlechildentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnBundleChildTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvpdnbundlechildentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnBundleChildTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::CvpdnBundleChildTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::CvpdnBundleChildTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleChildEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::CvpdnBundleChildEntry()
    :
    cvpdnbundlename{YType::str, "cvpdnBundleName"},
    cvpdnbundlechildtunneltype{YType::enumeration, "cvpdnBundleChildTunnelType"},
    cvpdnbundlechildtunnelid{YType::uint32, "cvpdnBundleChildTunnelId"},
    cvpdnbundlechildsessionid{YType::uint32, "cvpdnBundleChildSessionId"}
{

    yang_name = "cvpdnBundleChildEntry"; yang_parent_name = "cvpdnBundleChildTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::~CvpdnBundleChildEntry()
{
}

bool CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvpdnbundlename.is_set
	|| cvpdnbundlechildtunneltype.is_set
	|| cvpdnbundlechildtunnelid.is_set
	|| cvpdnbundlechildsessionid.is_set;
}

bool CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnbundlename.yfilter)
	|| ydk::is_set(cvpdnbundlechildtunneltype.yfilter)
	|| ydk::is_set(cvpdnbundlechildtunnelid.yfilter)
	|| ydk::is_set(cvpdnbundlechildsessionid.yfilter);
}

std::string CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnBundleChildTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleChildEntry";
    ADD_KEY_TOKEN(cvpdnbundlename, "cvpdnBundleName");
    ADD_KEY_TOKEN(cvpdnbundlechildtunneltype, "cvpdnBundleChildTunnelType");
    ADD_KEY_TOKEN(cvpdnbundlechildtunnelid, "cvpdnBundleChildTunnelId");
    ADD_KEY_TOKEN(cvpdnbundlechildsessionid, "cvpdnBundleChildSessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundlename.is_set || is_set(cvpdnbundlename.yfilter)) leaf_name_data.push_back(cvpdnbundlename.get_name_leafdata());
    if (cvpdnbundlechildtunneltype.is_set || is_set(cvpdnbundlechildtunneltype.yfilter)) leaf_name_data.push_back(cvpdnbundlechildtunneltype.get_name_leafdata());
    if (cvpdnbundlechildtunnelid.is_set || is_set(cvpdnbundlechildtunnelid.yfilter)) leaf_name_data.push_back(cvpdnbundlechildtunnelid.get_name_leafdata());
    if (cvpdnbundlechildsessionid.is_set || is_set(cvpdnbundlechildsessionid.yfilter)) leaf_name_data.push_back(cvpdnbundlechildsessionid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename = value;
        cvpdnbundlename.value_namespace = name_space;
        cvpdnbundlename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleChildTunnelType")
    {
        cvpdnbundlechildtunneltype = value;
        cvpdnbundlechildtunneltype.value_namespace = name_space;
        cvpdnbundlechildtunneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleChildTunnelId")
    {
        cvpdnbundlechildtunnelid = value;
        cvpdnbundlechildtunnelid.value_namespace = name_space;
        cvpdnbundlechildtunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleChildSessionId")
    {
        cvpdnbundlechildsessionid = value;
        cvpdnbundlechildsessionid.value_namespace = name_space;
        cvpdnbundlechildsessionid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleChildTunnelType")
    {
        cvpdnbundlechildtunneltype.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleChildTunnelId")
    {
        cvpdnbundlechildtunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleChildSessionId")
    {
        cvpdnbundlechildsessionid.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleName" || name == "cvpdnBundleChildTunnelType" || name == "cvpdnBundleChildTunnelId" || name == "cvpdnBundleChildSessionId")
        return true;
    return false;
}

const Enum::YLeaf EndpointClass::none {1, "none"};
const Enum::YLeaf EndpointClass::local {2, "local"};
const Enum::YLeaf EndpointClass::ipV4Address {3, "ipV4Address"};
const Enum::YLeaf EndpointClass::macAddress {4, "macAddress"};
const Enum::YLeaf EndpointClass::magicNumber {5, "magicNumber"};
const Enum::YLeaf EndpointClass::phone {6, "phone"};

const Enum::YLeaf TunnelType::l2f {1, "l2f"};
const Enum::YLeaf TunnelType::l2tp {2, "l2tp"};
const Enum::YLeaf TunnelType::pptp {3, "pptp"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::CvpdnNotifSessionEvent::up {1, "up"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::CvpdnNotifSessionEvent::down {2, "down"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::CvpdnNotifSessionEvent::pwUp {3, "pwUp"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::CvpdnNotifSessionEvent::pwDown {4, "pwDown"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSystemInfo::CvpdnSystemClearSessions::none {1, "none"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSystemInfo::CvpdnSystemClearSessions::all {2, "all"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSystemInfo::CvpdnSystemClearSessions::l2f {3, "l2f"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSystemInfo::CvpdnSystemClearSessions::l2tp {4, "l2tp"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSystemInfo::CvpdnSystemClearSessions::pptp {5, "pptp"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelOrigCause::domain {1, "domain"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelOrigCause::dnis {2, "dnis"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelOrigCause::stack {3, "stack"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelState::unknown {1, "unknown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelState::opening {2, "opening"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelState::open {3, "open"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelState::closing {4, "closing"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelNetworkServiceType::ip {1, "ip"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrOrigCause::domain {1, "domain"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrOrigCause::dnis {2, "dnis"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrOrigCause::stack {3, "stack"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrOrigCause::xconnect {4, "xconnect"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::unknown {1, "unknown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2fOpening {2, "l2fOpening"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2fOpenWait {3, "l2fOpenWait"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2fOpen {4, "l2fOpen"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2fClosing {5, "l2fClosing"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2fCloseWait {6, "l2fCloseWait"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2tpIdle {7, "l2tpIdle"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2tpWaitCtlReply {8, "l2tpWaitCtlReply"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2tpEstablished {9, "l2tpEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2tpShuttingDown {10, "l2tpShuttingDown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::l2tpNoSessionLeft {11, "l2tpNoSessionLeft"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::pptpIdle {12, "pptpIdle"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::pptpWaitConnect {13, "pptpWaitConnect"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::pptpWaitCtlRequest {14, "pptpWaitCtlRequest"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::pptpWaitCtlReply {15, "pptpWaitCtlReply"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::pptpEstablished {16, "pptpEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::pptpWaitStopReply {17, "pptpWaitStopReply"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState::pptpTerminal {18, "pptpTerminal"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrNetworkServiceType::ip {1, "ip"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionState::unknown {1, "unknown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionState::opening {2, "opening"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionState::open {3, "open"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionState::closing {4, "closing"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionState::waitingForTunnel {5, "waitingForTunnel"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType::other {1, "other"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType::asyncInternalModem {2, "asyncInternalModem"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType::async {3, "async"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType::bchan {4, "bchan"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType::sync {5, "sync"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType::virtualAccess {6, "virtualAccess"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType::xdsl {7, "xdsl"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType::cable {8, "cable"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::unknown {1, "unknown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2fOpening {2, "l2fOpening"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2fOpen {3, "l2fOpen"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2fCloseWait {4, "l2fCloseWait"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2fWaitingForTunnel {5, "l2fWaitingForTunnel"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2tpIdle {6, "l2tpIdle"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2tpWaitingTunnel {7, "l2tpWaitingTunnel"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2tpWaitReply {8, "l2tpWaitReply"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2tpWaitConnect {9, "l2tpWaitConnect"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2tpEstablished {10, "l2tpEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::l2tpShuttingDown {11, "l2tpShuttingDown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::pptpWaitVAccess {12, "pptpWaitVAccess"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::pptpPacEstablished {13, "pptpPacEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::pptpWaitTunnel {14, "pptpWaitTunnel"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::pptpWaitOCRP {15, "pptpWaitOCRP"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::pptpPnsEstablished {16, "pptpPnsEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::pptpWaitCallDisc {17, "pptpWaitCallDisc"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState::pptpTerminal {18, "pptpTerminal"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType::other {1, "other"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType::asyncInternalModem {2, "asyncInternalModem"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType::async {3, "async"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType::bchan {4, "bchan"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType::sync {5, "sync"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType::virtualAccess {6, "virtualAccess"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType::xdsl {7, "xdsl"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType::cable {8, "cable"};

const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType::none {1, "none"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType::hostname {2, "hostname"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType::string {3, "string"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType::macAddress {4, "macAddress"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType::ipV4Address {5, "ipV4Address"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType::ipV6Address {6, "ipV6Address"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType::phone {7, "phone"};
const Enum::YLeaf CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType::magicNumber {8, "magicNumber"};


}
}

