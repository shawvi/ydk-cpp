#ifndef _CISCO_NX_OS_DEVICE_31_
#define _CISCO_NX_OS_DEVICE_31_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_30.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::NpvItems::InstItems::SrvifItems::SrvIfList : public ydk::Entity
{
    public:
        SrvIfList();
        ~SrvIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf defaultvsan; //type: uint32
        ydk::YLeaf defaultextif; //type: string
        ydk::YLeaf fcid; //type: uint32
        ydk::YLeaf fsmst; //type: NpvSrvIfFsmSt
        ydk::YLeaf wwpn; //type: string
        ydk::YLeaf wwnn; //type: string
        class TargetifItems; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems
        class VsanItems; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems
        class SrvifItems_; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems> targetif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems> vsan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_> srvif_items;
        
}; // System::NpvItems::InstItems::SrvifItems::SrvIfList


class System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems : public ydk::Entity
{
    public:
        TargetifItems();
        ~TargetifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetIfList; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList

        ydk::YList targetif_list;
        
}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems


class System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList : public ydk::Entity
{
    public:
        TargetIfList();
        ~TargetIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string

}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList


class System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems : public ydk::Entity
{
    public:
        VsanItems();
        ~VsanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrvVsanList; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList

        ydk::YList srvvsan_list;
        
}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems


class System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList : public ydk::Entity
{
    public:
        SrvVsanList();
        ~SrvVsanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32

}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList


class System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_ : public ydk::Entity
{
    public:
        SrvifItems_();
        ~SrvifItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrvIfFlogiList; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList

        ydk::YList srvifflogi_list;
        
}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_


class System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList : public ydk::Entity
{
    public:
        SrvIfFlogiList();
        ~SrvIfFlogiList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fcid; //type: uint32
        ydk::YLeaf wwpn; //type: string
        ydk::YLeaf wwnn; //type: string
        ydk::YLeaf defaultvsan; //type: uint32
        ydk::YLeaf defaultextif; //type: string

}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList


class System::NpvItems::InstItems::ExtifItems : public ydk::Entity
{
    public:
        ExtifItems();
        ~ExtifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExtIfList; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList

        ydk::YList extif_list;
        
}; // System::NpvItems::InstItems::ExtifItems


class System::NpvItems::InstItems::ExtifItems::ExtIfList : public ydk::Entity
{
    public:
        ExtIfList();
        ~ExtIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf fsmst; //type: NpvExtIfFsmSt
        ydk::YLeaf numvsan; //type: uint32
        ydk::YLeaf defaultvsan; //type: uint32
        ydk::YLeaf flogivsan; //type: uint32
        ydk::YLeaf operportmode; //type: string
        ydk::YLeaf logifindex; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf fcid; //type: uint32
        ydk::YLeaf wwpn; //type: string
        ydk::YLeaf wwnn; //type: string
        class TargetifItems; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems
        class VsanItems; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems> targetif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems> vsan_items;
        
}; // System::NpvItems::InstItems::ExtifItems::ExtIfList


class System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems : public ydk::Entity
{
    public:
        TargetifItems();
        ~TargetifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetIfList; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList

        ydk::YList targetif_list;
        
}; // System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems


class System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList : public ydk::Entity
{
    public:
        TargetIfList();
        ~TargetIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string

}; // System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList


class System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems : public ydk::Entity
{
    public:
        VsanItems();
        ~VsanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtVsanList; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList

        ydk::YList extvsan_list;
        
}; // System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems


class System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList : public ydk::Entity
{
    public:
        ExtVsanList();
        ~ExtVsanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf fsmst; //type: NpvExtIfFsmSt

}; // System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList


class System::VsanmgrItems : public ydk::Entity
{
    public:
        VsanmgrItems();
        ~VsanmgrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class VsanItems; //type: System::VsanmgrItems::VsanItems
        class BdvsancfgItems; //type: System::VsanmgrItems::BdvsancfgItems
        class InstItems; //type: System::VsanmgrItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::VsanItems> vsan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::BdvsancfgItems> bdvsancfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::InstItems> inst_items;
        
}; // System::VsanmgrItems


class System::VsanmgrItems::VsanItems : public ydk::Entity
{
    public:
        VsanItems();
        ~VsanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VsanList; //type: System::VsanmgrItems::VsanItems::VsanList

        ydk::YList vsan_list;
        
}; // System::VsanmgrItems::VsanItems


class System::VsanmgrItems::VsanItems::VsanList : public ydk::Entity
{
    public:
        VsanList();
        ~VsanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf adminst; //type: VsanAdminSt
        ydk::YLeaf operst; //type: VsanOperSt
        ydk::YLeaf lbtype; //type: VsanLbType
        ydk::YLeaf vsanname; //type: string
        ydk::YLeaf interop; //type: uint16
        ydk::YLeaf name; //type: string
        class RtBdVsanMapItems; //type: System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems
        class RsvsanIfMapItems; //type: System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems
        class RsvsanPathAttItems; //type: System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems> rtbdvsanmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems> rsvsanifmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems> rsvsanpathatt_items;
        
}; // System::VsanmgrItems::VsanItems::VsanList


class System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems : public ydk::Entity
{
    public:
        RtBdVsanMapItems();
        ~RtBdVsanMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems


class System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems : public ydk::Entity
{
    public:
        RsvsanIfMapItems();
        ~RsvsanIfMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVsanIfMapList; //type: System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList

        ydk::YList rsvsanifmap_list;
        
}; // System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems


class System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList : public ydk::Entity
{
    public:
        RsVsanIfMapList();
        ~RsVsanIfMapList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList


class System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems : public ydk::Entity
{
    public:
        RsvsanPathAttItems();
        ~RsvsanPathAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVsanPathAttList; //type: System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList

        ydk::YList rsvsanpathatt_list;
        
}; // System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems


class System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList : public ydk::Entity
{
    public:
        RsVsanPathAttList();
        ~RsVsanPathAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean
        ydk::YLeaf type; //type: L2NativeT

}; // System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList


class System::VsanmgrItems::BdvsancfgItems : public ydk::Entity
{
    public:
        BdvsancfgItems();
        ~BdvsancfgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf createflag; //type: FcCreateState
        ydk::YLeaf name; //type: string

}; // System::VsanmgrItems::BdvsancfgItems


class System::VsanmgrItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf numconfiguredvsan; //type: uint32
        ydk::YLeaf numcreatedvsan; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class VsanmbrItems; //type: System::VsanmgrItems::InstItems::VsanmbrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::InstItems::VsanmbrItems> vsanmbr_items;
        
}; // System::VsanmgrItems::InstItems


class System::VsanmgrItems::InstItems::VsanmbrItems : public ydk::Entity
{
    public:
        VsanmbrItems();
        ~VsanmbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VsanMbrIfList; //type: System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList

        ydk::YList vsanmbrif_list;
        
}; // System::VsanmgrItems::InstItems::VsanmbrItems


class System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList : public ydk::Entity
{
    public:
        VsanMbrIfList();
        ~VsanMbrIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf staticvsan; //type: uint32
        ydk::YLeaf allowedvsanbmp; //type: string
        ydk::YLeaf name; //type: string

}; // System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList


class System::FmItems : public ydk::Entity
{
    public:
        FmItems();
        ~FmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MplsstaticItems; //type: System::FmItems::MplsstaticItems
        class MplsoamItems; //type: System::FmItems::MplsoamItems
        class SrteItems; //type: System::FmItems::SrteItems
        class MplssgmntrtgItems; //type: System::FmItems::MplssgmntrtgItems
        class MplsldpItems; //type: System::FmItems::MplsldpItems
        class Mplsl3vpnItems; //type: System::FmItems::Mplsl3vpnItems
        class MplsevpnItems; //type: System::FmItems::MplsevpnItems
        class BgpItems; //type: System::FmItems::BgpItems
        class HmmItems; //type: System::FmItems::HmmItems
        class EvpnItems; //type: System::FmItems::EvpnItems
        class NgoamItems; //type: System::FmItems::NgoamItems
        class PoeItems; //type: System::FmItems::PoeItems
        class MsdpItems; //type: System::FmItems::MsdpItems
        class DhcpItems; //type: System::FmItems::DhcpItems
        class IfvlanItems; //type: System::FmItems::IfvlanItems
        class BashshellItems; //type: System::FmItems::BashshellItems
        class ScpserverItems; //type: System::FmItems::ScpserverItems
        class LldpItems; //type: System::FmItems::LldpItems
        class LacpItems; //type: System::FmItems::LacpItems
        class NxapiItems; //type: System::FmItems::NxapiItems
        class TelnetItems; //type: System::FmItems::TelnetItems
        class NxdbItems; //type: System::FmItems::NxdbItems
        class VnsegmentItems; //type: System::FmItems::VnsegmentItems
        class TacacsplusItems; //type: System::FmItems::TacacsplusItems
        class UdldItems; //type: System::FmItems::UdldItems
        class NatItems; //type: System::FmItems::NatItems
        class Vrrpv3Items; //type: System::FmItems::Vrrpv3Items
        class VrrpItems; //type: System::FmItems::VrrpItems
        class HsrpItems; //type: System::FmItems::HsrpItems
        class NetflowItems; //type: System::FmItems::NetflowItems
        class AnalyticsItems; //type: System::FmItems::AnalyticsItems
        class BfdItems; //type: System::FmItems::BfdItems
        class TunnelifItems; //type: System::FmItems::TunnelifItems
        class NvoItems; //type: System::FmItems::NvoItems
        class PbrItems; //type: System::FmItems::PbrItems
        class PimItems; //type: System::FmItems::PimItems
        class NgmvpnItems; //type: System::FmItems::NgmvpnItems
        class VpcItems; //type: System::FmItems::VpcItems
        class VtpItems; //type: System::FmItems::VtpItems
        class PvlanItems; //type: System::FmItems::PvlanItems
        class NtpdItems; //type: System::FmItems::NtpdItems
        class TelemetryItems; //type: System::FmItems::TelemetryItems
        class OspfItems; //type: System::FmItems::OspfItems
        class VctrlItems; //type: System::FmItems::VctrlItems
        class MacsecItems; //type: System::FmItems::MacsecItems
        class NpivItems; //type: System::FmItems::NpivItems
        class Pim6Items; //type: System::FmItems::Pim6Items
        class IsisItems; //type: System::FmItems::IsisItems
        class HwtelemetryItems; //type: System::FmItems::HwtelemetryItems
        class PortsecItems; //type: System::FmItems::PortsecItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsstaticItems> mplsstatic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsoamItems> mplsoam_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SrteItems> srte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplssgmntrtgItems> mplssgmntrtg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsldpItems> mplsldp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Mplsl3vpnItems> mplsl3vpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsevpnItems> mplsevpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BgpItems> bgp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HmmItems> hmm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::EvpnItems> evpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NgoamItems> ngoam_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PoeItems> poe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MsdpItems> msdp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::DhcpItems> dhcp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::IfvlanItems> ifvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BashshellItems> bashshell_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::ScpserverItems> scpserver_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LldpItems> lldp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LacpItems> lacp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NxapiItems> nxapi_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TelnetItems> telnet_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NxdbItems> nxdb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VnsegmentItems> vnsegment_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TacacsplusItems> tacacsplus_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::UdldItems> udld_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NatItems> nat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Vrrpv3Items> vrrpv3_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VrrpItems> vrrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HsrpItems> hsrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NetflowItems> netflow_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::AnalyticsItems> analytics_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BfdItems> bfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TunnelifItems> tunnelif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NvoItems> nvo_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PbrItems> pbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PimItems> pim_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NgmvpnItems> ngmvpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VpcItems> vpc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VtpItems> vtp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PvlanItems> pvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NtpdItems> ntpd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TelemetryItems> telemetry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::OspfItems> ospf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VctrlItems> vctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MacsecItems> macsec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NpivItems> npiv_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Pim6Items> pim6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::IsisItems> isis_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HwtelemetryItems> hwtelemetry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PortsecItems> portsec_items;
        
}; // System::FmItems


class System::FmItems::MplsstaticItems : public ydk::Entity
{
    public:
        MplsstaticItems();
        ~MplsstaticItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::MplsstaticItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsstaticItems::ServiceItems> service_items;
        
}; // System::FmItems::MplsstaticItems


class System::FmItems::MplsstaticItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MplsstaticItems::ServiceItems


class System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList


class System::FmItems::MplsoamItems : public ydk::Entity
{
    public:
        MplsoamItems();
        ~MplsoamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::MplsoamItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsoamItems::ServiceItems> service_items;
        
}; // System::FmItems::MplsoamItems


class System::FmItems::MplsoamItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MplsoamItems::ServiceItems


class System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList


class System::FmItems::SrteItems : public ydk::Entity
{
    public:
        SrteItems();
        ~SrteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::SrteItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SrteItems::ServiceItems> service_items;
        
}; // System::FmItems::SrteItems


class System::FmItems::SrteItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::SrteItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::SrteItems::ServiceItems


class System::FmItems::SrteItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::SrteItems::ServiceItems::ServiceInstanceList


class System::FmItems::MplssgmntrtgItems : public ydk::Entity
{
    public:
        MplssgmntrtgItems();
        ~MplssgmntrtgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::MplssgmntrtgItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplssgmntrtgItems::ServiceItems> service_items;
        
}; // System::FmItems::MplssgmntrtgItems


class System::FmItems::MplssgmntrtgItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MplssgmntrtgItems::ServiceItems


class System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList


class System::FmItems::MplsldpItems : public ydk::Entity
{
    public:
        MplsldpItems();
        ~MplsldpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::MplsldpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsldpItems::ServiceItems> service_items;
        
}; // System::FmItems::MplsldpItems


class System::FmItems::MplsldpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MplsldpItems::ServiceItems


class System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList


class System::FmItems::Mplsl3vpnItems : public ydk::Entity
{
    public:
        Mplsl3vpnItems();
        ~Mplsl3vpnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::Mplsl3vpnItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Mplsl3vpnItems::ServiceItems> service_items;
        
}; // System::FmItems::Mplsl3vpnItems


class System::FmItems::Mplsl3vpnItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::Mplsl3vpnItems::ServiceItems


class System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList


class System::FmItems::MplsevpnItems : public ydk::Entity
{
    public:
        MplsevpnItems();
        ~MplsevpnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string

}; // System::FmItems::MplsevpnItems


class System::FmItems::BgpItems : public ydk::Entity
{
    public:
        BgpItems();
        ~BgpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::BgpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BgpItems::ServiceItems> service_items;
        
}; // System::FmItems::BgpItems


class System::FmItems::BgpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::BgpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::BgpItems::ServiceItems


class System::FmItems::BgpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::BgpItems::ServiceItems::ServiceInstanceList


class System::FmItems::HmmItems : public ydk::Entity
{
    public:
        HmmItems();
        ~HmmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::HmmItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HmmItems::ServiceItems> service_items;
        
}; // System::FmItems::HmmItems


class System::FmItems::HmmItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::HmmItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::HmmItems::ServiceItems


class System::FmItems::HmmItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::HmmItems::ServiceItems::ServiceInstanceList


class System::FmItems::EvpnItems : public ydk::Entity
{
    public:
        EvpnItems();
        ~EvpnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::EvpnItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::EvpnItems::ServiceItems> service_items;
        
}; // System::FmItems::EvpnItems


class System::FmItems::EvpnItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::EvpnItems::ServiceItems


class System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList


class System::FmItems::NgoamItems : public ydk::Entity
{
    public:
        NgoamItems();
        ~NgoamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NgoamItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NgoamItems::ServiceItems> service_items;
        
}; // System::FmItems::NgoamItems


class System::FmItems::NgoamItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NgoamItems::ServiceItems


class System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList


class System::FmItems::PoeItems : public ydk::Entity
{
    public:
        PoeItems();
        ~PoeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::PoeItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PoeItems::ServiceItems> service_items;
        
}; // System::FmItems::PoeItems


class System::FmItems::PoeItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::PoeItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PoeItems::ServiceItems


class System::FmItems::PoeItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PoeItems::ServiceItems::ServiceInstanceList


class System::FmItems::MsdpItems : public ydk::Entity
{
    public:
        MsdpItems();
        ~MsdpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::MsdpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MsdpItems::ServiceItems> service_items;
        
}; // System::FmItems::MsdpItems


class System::FmItems::MsdpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MsdpItems::ServiceItems


class System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList


class System::FmItems::DhcpItems : public ydk::Entity
{
    public:
        DhcpItems();
        ~DhcpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::DhcpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::DhcpItems::ServiceItems> service_items;
        
}; // System::FmItems::DhcpItems


class System::FmItems::DhcpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::DhcpItems::ServiceItems


class System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList


class System::FmItems::IfvlanItems : public ydk::Entity
{
    public:
        IfvlanItems();
        ~IfvlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::IfvlanItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::IfvlanItems::ServiceItems> service_items;
        
}; // System::FmItems::IfvlanItems


class System::FmItems::IfvlanItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::IfvlanItems::ServiceItems


class System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList


class System::FmItems::BashshellItems : public ydk::Entity
{
    public:
        BashshellItems();
        ~BashshellItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::BashshellItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BashshellItems::ServiceItems> service_items;
        
}; // System::FmItems::BashshellItems


class System::FmItems::BashshellItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::BashshellItems::ServiceItems


class System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList


class System::FmItems::ScpserverItems : public ydk::Entity
{
    public:
        ScpserverItems();
        ~ScpserverItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::ScpserverItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::ScpserverItems::ServiceItems> service_items;
        
}; // System::FmItems::ScpserverItems


class System::FmItems::ScpserverItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::ScpserverItems::ServiceItems


class System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList


class System::FmItems::LldpItems : public ydk::Entity
{
    public:
        LldpItems();
        ~LldpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::LldpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LldpItems::ServiceItems> service_items;
        
}; // System::FmItems::LldpItems


class System::FmItems::LldpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::LldpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::LldpItems::ServiceItems


class System::FmItems::LldpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::LldpItems::ServiceItems::ServiceInstanceList


class System::FmItems::LacpItems : public ydk::Entity
{
    public:
        LacpItems();
        ~LacpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::LacpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LacpItems::ServiceItems> service_items;
        
}; // System::FmItems::LacpItems


class System::FmItems::LacpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::LacpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::LacpItems::ServiceItems


class System::FmItems::LacpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::LacpItems::ServiceItems::ServiceInstanceList


class System::FmItems::NxapiItems : public ydk::Entity
{
    public:
        NxapiItems();
        ~NxapiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NxapiItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NxapiItems::ServiceItems> service_items;
        
}; // System::FmItems::NxapiItems


class System::FmItems::NxapiItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NxapiItems::ServiceItems


class System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList


class System::FmItems::TelnetItems : public ydk::Entity
{
    public:
        TelnetItems();
        ~TelnetItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState

}; // System::FmItems::TelnetItems


class System::FmItems::NxdbItems : public ydk::Entity
{
    public:
        NxdbItems();
        ~NxdbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NxdbItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NxdbItems::ServiceItems> service_items;
        
}; // System::FmItems::NxdbItems


class System::FmItems::NxdbItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NxdbItems::ServiceItems


class System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList


class System::FmItems::VnsegmentItems : public ydk::Entity
{
    public:
        VnsegmentItems();
        ~VnsegmentItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::VnsegmentItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VnsegmentItems::ServiceItems> service_items;
        
}; // System::FmItems::VnsegmentItems


class System::FmItems::VnsegmentItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::VnsegmentItems::ServiceItems


class System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList


class System::FmItems::TacacsplusItems : public ydk::Entity
{
    public:
        TacacsplusItems();
        ~TacacsplusItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::TacacsplusItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TacacsplusItems::ServiceItems> service_items;
        
}; // System::FmItems::TacacsplusItems


class System::FmItems::TacacsplusItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::TacacsplusItems::ServiceItems


class System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList


class System::FmItems::UdldItems : public ydk::Entity
{
    public:
        UdldItems();
        ~UdldItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::UdldItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::UdldItems::ServiceItems> service_items;
        
}; // System::FmItems::UdldItems


class System::FmItems::UdldItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::UdldItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::UdldItems::ServiceItems


class System::FmItems::UdldItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::UdldItems::ServiceItems::ServiceInstanceList


class System::FmItems::NatItems : public ydk::Entity
{
    public:
        NatItems();
        ~NatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NatItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NatItems::ServiceItems> service_items;
        
}; // System::FmItems::NatItems


class System::FmItems::NatItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::NatItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NatItems::ServiceItems


class System::FmItems::NatItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NatItems::ServiceItems::ServiceInstanceList


class System::FmItems::Vrrpv3Items : public ydk::Entity
{
    public:
        Vrrpv3Items();
        ~Vrrpv3Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::Vrrpv3Items::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Vrrpv3Items::ServiceItems> service_items;
        
}; // System::FmItems::Vrrpv3Items


class System::FmItems::Vrrpv3Items::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::Vrrpv3Items::ServiceItems


class System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList


class System::FmItems::VrrpItems : public ydk::Entity
{
    public:
        VrrpItems();
        ~VrrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::VrrpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VrrpItems::ServiceItems> service_items;
        
}; // System::FmItems::VrrpItems


class System::FmItems::VrrpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::VrrpItems::ServiceItems


class System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList


class System::FmItems::HsrpItems : public ydk::Entity
{
    public:
        HsrpItems();
        ~HsrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::HsrpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HsrpItems::ServiceItems> service_items;
        
}; // System::FmItems::HsrpItems


class System::FmItems::HsrpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::HsrpItems::ServiceItems


class System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList


class System::FmItems::NetflowItems : public ydk::Entity
{
    public:
        NetflowItems();
        ~NetflowItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NetflowItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NetflowItems::ServiceItems> service_items;
        
}; // System::FmItems::NetflowItems


class System::FmItems::NetflowItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NetflowItems::ServiceItems


class System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList


class System::FmItems::AnalyticsItems : public ydk::Entity
{
    public:
        AnalyticsItems();
        ~AnalyticsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::AnalyticsItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::AnalyticsItems::ServiceItems> service_items;
        
}; // System::FmItems::AnalyticsItems


class System::FmItems::AnalyticsItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::AnalyticsItems::ServiceItems


class System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList


class System::FmItems::BfdItems : public ydk::Entity
{
    public:
        BfdItems();
        ~BfdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::BfdItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BfdItems::ServiceItems> service_items;
        
}; // System::FmItems::BfdItems


class System::FmItems::BfdItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::BfdItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::BfdItems::ServiceItems


class System::FmItems::BfdItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::BfdItems::ServiceItems::ServiceInstanceList


class System::FmItems::TunnelifItems : public ydk::Entity
{
    public:
        TunnelifItems();
        ~TunnelifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::TunnelifItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TunnelifItems::ServiceItems> service_items;
        
}; // System::FmItems::TunnelifItems


class System::FmItems::TunnelifItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::TunnelifItems::ServiceItems


class System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList


class System::FmItems::NvoItems : public ydk::Entity
{
    public:
        NvoItems();
        ~NvoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NvoItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NvoItems::ServiceItems> service_items;
        
}; // System::FmItems::NvoItems


class System::FmItems::NvoItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::NvoItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NvoItems::ServiceItems


class System::FmItems::NvoItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NvoItems::ServiceItems::ServiceInstanceList


class System::FmItems::PbrItems : public ydk::Entity
{
    public:
        PbrItems();
        ~PbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::PbrItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PbrItems::ServiceItems> service_items;
        
}; // System::FmItems::PbrItems


class System::FmItems::PbrItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::PbrItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PbrItems::ServiceItems


class System::FmItems::PbrItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PbrItems::ServiceItems::ServiceInstanceList


class System::FmItems::PimItems : public ydk::Entity
{
    public:
        PimItems();
        ~PimItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::PimItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PimItems::ServiceItems> service_items;
        
}; // System::FmItems::PimItems


class System::FmItems::PimItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::PimItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PimItems::ServiceItems


class System::FmItems::PimItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PimItems::ServiceItems::ServiceInstanceList


class System::FmItems::NgmvpnItems : public ydk::Entity
{
    public:
        NgmvpnItems();
        ~NgmvpnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NgmvpnItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NgmvpnItems::ServiceItems> service_items;
        
}; // System::FmItems::NgmvpnItems


class System::FmItems::NgmvpnItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NgmvpnItems::ServiceItems


class System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList


class System::FmItems::VpcItems : public ydk::Entity
{
    public:
        VpcItems();
        ~VpcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::VpcItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VpcItems::ServiceItems> service_items;
        
}; // System::FmItems::VpcItems


class System::FmItems::VpcItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::VpcItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::VpcItems::ServiceItems


class System::FmItems::VpcItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::VpcItems::ServiceItems::ServiceInstanceList


class System::FmItems::VtpItems : public ydk::Entity
{
    public:
        VtpItems();
        ~VtpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::VtpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VtpItems::ServiceItems> service_items;
        
}; // System::FmItems::VtpItems


class System::FmItems::VtpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::VtpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::VtpItems::ServiceItems


class System::FmItems::VtpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::VtpItems::ServiceItems::ServiceInstanceList


class System::FmItems::PvlanItems : public ydk::Entity
{
    public:
        PvlanItems();
        ~PvlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::PvlanItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PvlanItems::ServiceItems> service_items;
        
}; // System::FmItems::PvlanItems


class System::FmItems::PvlanItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PvlanItems::ServiceItems


class System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList


class System::FmItems::NtpdItems : public ydk::Entity
{
    public:
        NtpdItems();
        ~NtpdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState

}; // System::FmItems::NtpdItems


class System::FmItems::TelemetryItems : public ydk::Entity
{
    public:
        TelemetryItems();
        ~TelemetryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::TelemetryItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TelemetryItems::ServiceItems> service_items;
        
}; // System::FmItems::TelemetryItems


class System::FmItems::TelemetryItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::TelemetryItems::ServiceItems


class System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList


class System::FmItems::OspfItems : public ydk::Entity
{
    public:
        OspfItems();
        ~OspfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::OspfItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::OspfItems::ServiceItems> service_items;
        
}; // System::FmItems::OspfItems


class System::FmItems::OspfItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceInstanceList; //type: System::FmItems::OspfItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::OspfItems::ServiceItems


class System::FmItems::OspfItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::OspfItems::ServiceItems::ServiceInstanceList


class System::FmItems::VctrlItems : public ydk::Entity
{
    public:
        VctrlItems();
        ~VctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState

}; // System::FmItems::VctrlItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_31_ */

