#ifndef _CISCO_NX_OS_DEVICE_4_
#define _CISCO_NX_OS_DEVICE_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_3.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attrtype; //type: BgpLsNlriType
        ydk::YLeaf nodeattrflags; //type: string
        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf pfxattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems : public ydk::Entity
{
    public:
        LsrtItems();
        ~LsrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList

        ydk::YList lnkstroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList : public ydk::Entity
{
    public:
        LnkStRouteList();
        ~LnkStRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf nlritype; //type: BgpLsNlriType
        ydk::YLeaf protoid; //type: BgpLsProtoId
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attrtype; //type: BgpLsNlriType
        ydk::YLeaf nodeattrflags; //type: string
        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf pfxattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems : public ydk::Entity
{
    public:
        EvpnrtItems();
        ~EvpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList

        ydk::YList evpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList : public ydk::Entity
{
    public:
        EvpnRouteList();
        ~EvpnRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rttype; //type: BgpEvpnRtType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attrtype; //type: BgpLsNlriType
        ydk::YLeaf nodeattrflags; //type: string
        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf pfxattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems : public ydk::Entity
{
    public:
        MvpnrtItems();
        ~MvpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList

        ydk::YList mvpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList : public ydk::Entity
{
    public:
        MvpnRouteList();
        ~MvpnRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rttype; //type: BgpMvpnRtType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attrtype; //type: BgpLsNlriType
        ydk::YLeaf nodeattrflags; //type: string
        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf pfxattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems::FltrListRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems : public ydk::Entity
{
    public:
        PfxlistItems();
        ~PfxlistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxListRoutesList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList

        ydk::YList pfxlistroutes_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList : public ydk::Entity
{
    public:
        PfxListRoutesList();
        ~PfxListRoutesList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems_; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_ : public ydk::Entity
{
    public:
        RtItems_();
        ~RtItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attrtype; //type: BgpLsNlriType
        ydk::YLeaf nodeattrflags; //type: string
        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf pfxattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems::PfxListRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems : public ydk::Entity
{
    public:
        DamppathsrtItems();
        ~DamppathsrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems
        class VpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems
        class LblrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems
        class LsrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LsrtItems
        class EvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::EvpnrtItems
        class MvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::MvpnrtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems> vpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems> lblrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LsrtItems> lsrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::EvpnrtItems> evpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::MvpnrtItems> mvpnrt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems_; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_ : public ydk::Entity
{
    public:
        RtItems_();
        ~RtItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attrtype; //type: BgpLsNlriType
        ydk::YLeaf nodeattrflags; //type: string
        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf pfxattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems : public ydk::Entity
{
    public:
        VpnrtItems();
        ~VpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList

        ydk::YList vpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList : public ydk::Entity
{
    public:
        VpnRouteList();
        ~VpnRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attrtype; //type: BgpLsNlriType
        ydk::YLeaf nodeattrflags; //type: string
        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf pfxattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems : public ydk::Entity
{
    public:
        LblrtItems();
        ~LblrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LblRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList

        ydk::YList lblroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList : public ydk::Entity
{
    public:
        LblRouteList();
        ~LblRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rtlblafflags; //type: string
        ydk::YLeaf rtlblafver; //type: uint32
        ydk::YLeaf loclbl; //type: uint32
        ydk::YLeaf pfxlblholddowndelts; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_4_ */
