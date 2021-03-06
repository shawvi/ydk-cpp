#ifndef _CISCO_NX_OS_DEVICE_21_
#define _CISCO_NX_OS_DEVICE_21_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_20.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems : public ydk::Entity
{
    public:
        LdpsessiondownItems();
        ~LdpsessiondownItems();

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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems


class System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems : public ydk::Entity
{
    public:
        LdpsessionupItems();
        ~LdpsessionupItems();

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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems


class System::SnmpItems::InstItems::RmtUserItems : public ydk::Entity
{
    public:
        RmtUserItems();
        ~RmtUserItems();

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

        class RemoteUserList; //type: System::SnmpItems::InstItems::RmtUserItems::RemoteUserList

        ydk::YList remoteuser_list;
        
}; // System::SnmpItems::InstItems::RmtUserItems


class System::SnmpItems::InstItems::RmtUserItems::RemoteUserList : public ydk::Entity
{
    public:
        RemoteUserList();
        ~RemoteUserList();

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

        ydk::YLeaf username; //type: string
        ydk::YLeaf usrengineid; //type: string
        ydk::YLeaf authpwd; //type: string
        ydk::YLeaf authtype; //type: SnmpAuthTypeT
        ydk::YLeaf privpwd; //type: string
        ydk::YLeaf privtype; //type: SnmpPrivTypeT
        ydk::YLeaf islocalizedkey; //type: boolean
        ydk::YLeaf isenforcepriv; //type: boolean
        ydk::YLeaf usrengineidlen; //type: uint8

}; // System::SnmpItems::InstItems::RmtUserItems::RemoteUserList


class System::SnmpItems::InstItems::LclUserItems : public ydk::Entity
{
    public:
        LclUserItems();
        ~LclUserItems();

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

        class LocalUserList; //type: System::SnmpItems::InstItems::LclUserItems::LocalUserList

        ydk::YList localuser_list;
        
}; // System::SnmpItems::InstItems::LclUserItems


class System::SnmpItems::InstItems::LclUserItems::LocalUserList : public ydk::Entity
{
    public:
        LocalUserList();
        ~LocalUserList();

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

        ydk::YLeaf username; //type: string
        ydk::YLeaf authpwd; //type: string
        ydk::YLeaf authtype; //type: SnmpAuthTypeT
        ydk::YLeaf privpwd; //type: string
        ydk::YLeaf privtype; //type: SnmpPrivTypeT
        ydk::YLeaf islocalizedkey; //type: boolean
        ydk::YLeaf isenforcepriv; //type: boolean
        ydk::YLeaf usrengineid; //type: string
        ydk::YLeaf usrengineidlen; //type: uint8
        class GroupItems; //type: System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems> group_items;
        
}; // System::SnmpItems::InstItems::LclUserItems::LocalUserList


class System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserGroupList; //type: System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList

        ydk::YList usergroup_list;
        
}; // System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems


class System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList : public ydk::Entity
{
    public:
        UserGroupList();
        ~UserGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groupname; //type: string

}; // System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList


class System::SyslogacctItems : public ydk::Entity
{
    public:
        SyslogacctItems();
        ~SyslogacctItems();

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

        ydk::YLeaf timertick; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt

}; // System::SyslogacctItems


class System::SyslogItems : public ydk::Entity
{
    public:
        SyslogItems();
        ~SyslogItems();

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

        class TimestampItems; //type: System::SyslogItems::TimestampItems
        class LevelItems; //type: System::SyslogItems::LevelItems
        class MonitorItems; //type: System::SyslogItems::MonitorItems
        class ConsoleItems; //type: System::SyslogItems::ConsoleItems
        class RdstItems; //type: System::SyslogItems::RdstItems
        class SourceItems; //type: System::SyslogItems::SourceItems
        class FileItems; //type: System::SyslogItems::FileItems
        class InstItems; //type: System::SyslogItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::TimestampItems> timestamp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::LevelItems> level_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::ConsoleItems> console_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::RdstItems> rdst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::SourceItems> source_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::FileItems> file_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::InstItems> inst_items;
        
}; // System::SyslogItems


class System::SyslogItems::TimestampItems : public ydk::Entity
{
    public:
        TimestampItems();
        ~TimestampItems();

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

        ydk::YLeaf format; //type: SyslogTimeStampFormat

}; // System::SyslogItems::TimestampItems


class System::SyslogItems::LevelItems : public ydk::Entity
{
    public:
        LevelItems();
        ~LevelItems();

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

        class LevelList; //type: System::SyslogItems::LevelItems::LevelList

        ydk::YList level_list;
        
}; // System::SyslogItems::LevelItems


class System::SyslogItems::LevelItems::LevelList : public ydk::Entity
{
    public:
        LevelList();
        ~LevelList();

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

        ydk::YLeaf facility; //type: SyslogFacility
        ydk::YLeaf severity; //type: SyslogSeverityLevelSeverity

}; // System::SyslogItems::LevelItems::LevelList


class System::SyslogItems::MonitorItems : public ydk::Entity
{
    public:
        MonitorItems();
        ~MonitorItems();

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

        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf severity; //type: SyslogSeverity

}; // System::SyslogItems::MonitorItems


class System::SyslogItems::ConsoleItems : public ydk::Entity
{
    public:
        ConsoleItems();
        ~ConsoleItems();

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

        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf severity; //type: SyslogSeverity

}; // System::SyslogItems::ConsoleItems


class System::SyslogItems::RdstItems : public ydk::Entity
{
    public:
        RdstItems();
        ~RdstItems();

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

        class RemoteDestList; //type: System::SyslogItems::RdstItems::RemoteDestList

        ydk::YList remotedest_list;
        
}; // System::SyslogItems::RdstItems


class System::SyslogItems::RdstItems::RemoteDestList : public ydk::Entity
{
    public:
        RemoteDestList();
        ~RemoteDestList();

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

        ydk::YLeaf host; //type: string
        ydk::YLeaf severity; //type: SyslogSeverity
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf transport; //type: MonTransport
        ydk::YLeaf trustpointclientidentity; //type: string
        ydk::YLeaf forwardingfacility; //type: SyslogFacility
        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf vrfid; //type: uint32
        ydk::YLeaf ip; //type: string
        ydk::YLeaf operstate; //type: SyslogOperState
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf vrfname; //type: string
        class DeststItems; //type: System::SyslogItems::RdstItems::RemoteDestList::DeststItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::RdstItems::RemoteDestList::DeststItems> destst_items;
        
}; // System::SyslogItems::RdstItems::RemoteDestList


class System::SyslogItems::RdstItems::RemoteDestList::DeststItems : public ydk::Entity
{
    public:
        DeststItems();
        ~DeststItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestStateList; //type: System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList

        ydk::YList deststate_list;
        
}; // System::SyslogItems::RdstItems::RemoteDestList::DeststItems


class System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList : public ydk::Entity
{
    public:
        DestStateList();
        ~DestStateList();

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
        ydk::YLeaf operstate; //type: SyslogOperState
        ydk::YLeaf vrfid; //type: uint32
        ydk::YLeaf ip; //type: string
        ydk::YLeaf totalbufferedmsgs; //type: uint32
        ydk::YLeaf totaldroppedmsgs; //type: uint32
        ydk::YLeaf descr; //type: string
        class MsgItems; //type: System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems> msg_items;
        
}; // System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList


class System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems : public ydk::Entity
{
    public:
        MsgItems();
        ~MsgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogMsgList; //type: System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList

        ydk::YList logmsg_list;
        
}; // System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems


class System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList : public ydk::Entity
{
    public:
        LogMsgList();
        ~LogMsgList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf message; //type: string
        ydk::YLeaf facility; //type: string
        ydk::YLeaf severity; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList


class System::SyslogItems::SourceItems : public ydk::Entity
{
    public:
        SourceItems();
        ~SourceItems();

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

        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf operstate; //type: SyslogOperState

}; // System::SyslogItems::SourceItems


class System::SyslogItems::FileItems : public ydk::Entity
{
    public:
        FileItems();
        ~FileItems();

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

        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf severity; //type: SyslogSeverity
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SyslogItems::FileItems


class System::SyslogItems::InstItems : public ydk::Entity
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

        ydk::YLeaf modadminstate; //type: MonAdminState
        ydk::YLeaf modseverity; //type: SyslogSeverity

}; // System::SyslogItems::InstItems


class System::MtsItems : public ydk::Entity
{
    public:
        MtsItems();
        ~MtsItems();

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

        class TopsapsItems; //type: System::MtsItems::TopsapsItems
        class QfullsapsItems; //type: System::MtsItems::QfullsapsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems::TopsapsItems> topsaps_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems::QfullsapsItems> qfullsaps_items;
        
}; // System::MtsItems


class System::MtsItems::TopsapsItems : public ydk::Entity
{
    public:
        TopsapsItems();
        ~TopsapsItems();

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

        ydk::YLeaf memused; //type: uint32
        class TsapItems; //type: System::MtsItems::TopsapsItems::TsapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems::TopsapsItems::TsapItems> tsap_items;
        
}; // System::MtsItems::TopsapsItems


class System::MtsItems::TopsapsItems::TsapItems : public ydk::Entity
{
    public:
        TsapItems();
        ~TsapItems();

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

        class TSapList; //type: System::MtsItems::TopsapsItems::TsapItems::TSapList

        ydk::YList tsap_list;
        
}; // System::MtsItems::TopsapsItems::TsapItems


class System::MtsItems::TopsapsItems::TsapItems::TSapList : public ydk::Entity
{
    public:
        TSapList();
        ~TSapList();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf sapid; //type: uint32
        ydk::YLeaf desc; //type: string
        ydk::YLeaf process; //type: string
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf msgcount; //type: uint32
        ydk::YLeaf bytescount; //type: uint32
        ydk::YLeaf memusedintotalmem; //type: uint32
        ydk::YLeaf memusedinsapshare; //type: uint32
        ydk::YLeaf nodeid; //type: uint32

}; // System::MtsItems::TopsapsItems::TsapItems::TSapList


class System::MtsItems::QfullsapsItems : public ydk::Entity
{
    public:
        QfullsapsItems();
        ~QfullsapsItems();

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

        class QsapItems; //type: System::MtsItems::QfullsapsItems::QsapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems::QfullsapsItems::QsapItems> qsap_items;
        
}; // System::MtsItems::QfullsapsItems


class System::MtsItems::QfullsapsItems::QsapItems : public ydk::Entity
{
    public:
        QsapItems();
        ~QsapItems();

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

        class QSapList; //type: System::MtsItems::QfullsapsItems::QsapItems::QSapList

        ydk::YList qsap_list;
        
}; // System::MtsItems::QfullsapsItems::QsapItems


class System::MtsItems::QfullsapsItems::QsapItems::QSapList : public ydk::Entity
{
    public:
        QSapList();
        ~QSapList();

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

        ydk::YLeaf sapid; //type: uint32
        ydk::YLeaf qstate; //type: string
        ydk::YLeaf desc; //type: string
        ydk::YLeaf process; //type: string
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf msgcount; //type: uint32
        ydk::YLeaf bytescount; //type: uint32
        ydk::YLeaf memusedintotalmem; //type: uint32
        ydk::YLeaf memusedinsapshare; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf nodeid; //type: uint32

}; // System::MtsItems::QfullsapsItems::QsapItems::QSapList


class System::NatItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::NatItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems> inst_items;
        
}; // System::NatItems


class System::NatItems::InstItems : public ydk::Entity
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

        ydk::YLeaf tcptimeout; //type: uint32
        ydk::YLeaf udptimeout; //type: uint32
        ydk::YLeaf icmptimeout; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf finrsttimeout; //type: int32
        ydk::YLeaf syntimeout; //type: int32
        ydk::YLeaf configerror; //type: string
        ydk::YLeaf maxtranslation; //type: uint32
        ydk::YLeaf allhost; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class PoolItems; //type: System::NatItems::InstItems::PoolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::PoolItems> pool_items;
        
}; // System::NatItems::InstItems


class System::NatItems::InstItems::PoolItems : public ydk::Entity
{
    public:
        PoolItems();
        ~PoolItems();

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

        class PoolList; //type: System::NatItems::InstItems::PoolItems::PoolList

        ydk::YList pool_list;
        
}; // System::NatItems::InstItems::PoolItems


class System::NatItems::InstItems::PoolItems::PoolList : public ydk::Entity
{
    public:
        PoolList();
        ~PoolList();

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

        ydk::YLeaf poolname; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf prefixlen; //type: uint32
        ydk::YLeaf noalias; //type: boolean
        class StartipItems; //type: System::NatItems::InstItems::PoolItems::PoolList::StartipItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::PoolItems::PoolList::StartipItems> startip_items;
        
}; // System::NatItems::InstItems::PoolItems::PoolList


class System::NatItems::InstItems::PoolItems::PoolList::StartipItems : public ydk::Entity
{
    public:
        StartipItems();
        ~StartipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoolAddressList; //type: System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList

        ydk::YList pooladdress_list;
        
}; // System::NatItems::InstItems::PoolItems::PoolList::StartipItems


class System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList : public ydk::Entity
{
    public:
        PoolAddressList();
        ~PoolAddressList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf startip; //type: string
        ydk::YLeaf endip; //type: string
        ydk::YLeaf configerr; //type: string
        ydk::YLeaf pooladdrdeleted; //type: boolean

}; // System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList


class System::OdcreqItems : public ydk::Entity
{
    public:
        OdcreqItems();
        ~OdcreqItems();

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

        class ODevCmdReqList; //type: System::OdcreqItems::ODevCmdReqList

        ydk::YList odevcmdreq_list;
        
}; // System::OdcreqItems


class System::OdcreqItems::ODevCmdReqList : public ydk::Entity
{
    public:
        ODevCmdReqList();
        ~ODevCmdReqList();

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

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf sessid; //type: uint32
        ydk::YLeaf cmdid; //type: uint32
        ydk::YLeaf req; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::OdcreqItems::ODevCmdReqList


class System::OdcrespItems : public ydk::Entity
{
    public:
        OdcrespItems();
        ~OdcrespItems();

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

        class ODevCmdRespList; //type: System::OdcrespItems::ODevCmdRespList

        ydk::YList odevcmdresp_list;
        
}; // System::OdcrespItems


class System::OdcrespItems::ODevCmdRespList : public ydk::Entity
{
    public:
        ODevCmdRespList();
        ~ODevCmdRespList();

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

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf sessid; //type: uint32
        ydk::YLeaf cmdid; //type: uint32
        ydk::YLeaf resp; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::OdcrespItems::ODevCmdRespList


class System::OspfItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::OspfItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems> inst_items;
        
}; // System::OspfItems


class System::OspfItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::OspfItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::OspfItems::InstItems


class System::OspfItems::InstItems::InstList : public ydk::Entity
{
    public:
        InstList();
        ~InstList();

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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf memalert; //type: NwMemAlertLevel
        class DomItems; //type: System::OspfItems::InstItems::InstList::DomItems
        class EvtlogsItems; //type: System::OspfItems::InstItems::InstList::EvtlogsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::EvtlogsItems> evtlogs_items;
        
}; // System::OspfItems::InstItems::InstList


class System::OspfItems::InstItems::InstList::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems


class System::OspfItems::InstItems::InstList::DomItems::DomList : public ydk::Entity
{
    public:
        DomList();
        ~DomList();

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
        ydk::YLeaf rtrid; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf dist; //type: uint8
        ydk::YLeaf maxecmp; //type: uint8
        ydk::YLeaf bwref; //type: uint32
        ydk::YLeaf bwrefunit; //type: OspfBwRefUnit
        ydk::YLeaf defmetric; //type: uint32
        ydk::YLeaf rfc1583compat; //type: boolean
        ydk::YLeaf adjchangeloglevel; //type: OspfAdjChangeLogLevel
        ydk::YLeaf operst; //type: OspfOperSt
        ydk::YLeaf operrtrid; //type: string
        ydk::YLeaf opersrgbstart; //type: uint32
        ydk::YLeaf opersrgbend; //type: uint32
        ydk::YLeaf operstsgmntrtgmpls; //type: OspfSgmntRtgMplsOperSt
        ydk::YLeaf discardroute; //type: string
        ydk::YLeaf downbitignore; //type: boolean
        ydk::YLeaf capvrflite; //type: OspfVrfLiteControl
        class AreaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems
        class SpfcompItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems
        class LsactrlItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems
        class DomstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems
        class IfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems
        class MaxlsapItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems
        class MaxmetriclsapItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems
        class DefrtleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems
        class InterleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems
        class LeakctrlItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems
        class RibleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems
        class ExtrtsumItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems
        class TrstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems> area_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems> spfcomp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems> lsactrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems> domstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems> gr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems> maxlsap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems> maxmetriclsap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems> interleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems> leakctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems> ribleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems> extrtsum_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems> trstats_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems : public ydk::Entity
{
    public:
        AreaItems();
        ~AreaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList

        ydk::YList area_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList : public ydk::Entity
{
    public:
        AreaList();
        ~AreaList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: OspfAreaT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf sgmntrtgmpls; //type: OspfSegRtControl
        ydk::YLeaf nssatransrole; //type: OspfNssaTransRole
        ydk::YLeaf brcnt; //type: uint32
        ydk::YLeaf asbrcnt; //type: uint32
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf nssatransst; //type: OspfNssaTransSt
        ydk::YLeaf nssatransstabintvl; //type: uint32
        ydk::YLeaf operstsgmntrtgmpls; //type: OspfSgmntRtgMplsOperSt
        ydk::YLeaf authtype; //type: OspfAuthT
        class AreastatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems
        class VlinkItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems
        class SlinkItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems
        class LsaleakpItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems
        class LsaleakctrlpItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems
        class DefrtleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems
        class IartsumItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems> areastats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems> vlink_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems> slink_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems> lsaleakp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems> lsaleakctrlp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems> iartsum_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems : public ydk::Entity
{
    public:
        AreastatsItems();
        ~AreastatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf areacreatedts; //type: string
        ydk::YLeaf spfruns; //type: uint32
        ydk::YLeaf lsacnt; //type: uint32
        ydk::YLeaf lastspfduration; //type: uint32
        ydk::YLeaf ifcnt; //type: uint32
        ydk::YLeaf activeifcnt; //type: uint32
        ydk::YLeaf passiveifcnt; //type: uint32
        ydk::YLeaf lpbkifcnt; //type: uint32
        ydk::YLeaf adjcnt; //type: uint32
        ydk::YLeaf grhelperpeercnt; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfDbT
        ydk::YLeaf name; //type: string
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems : public ydk::Entity
{
    public:
        LsaItems();
        ~LsaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
{
    public:
        LsaRecList();
        ~LsaRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfLsaT
        ydk::YLeaf id; //type: string
        ydk::YLeaf advrtr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf patht; //type: OspfPathT
        ydk::YLeaf area; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf ucastcost; //type: uint16
        ydk::YLeaf mcastcost; //type: uint16
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf dist; //type: uint8
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
{
    public:
        UcnhItems();
        ~UcnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
{
    public:
        UcNexthopList();
        ~UcNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
{
    public:
        McnhItems();
        ~McnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
{
    public:
        McNexthopList();
        ~McNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems : public ydk::Entity
{
    public:
        VlinkItems();
        ~VlinkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VLinkList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList

        ydk::YList vlink_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList : public ydk::Entity
{
    public:
        VLinkList();
        ~VLinkList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbrrtrid; //type: string
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint32
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        class AdjItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems> authnew_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems : public ydk::Entity
{
    public:
        AdjItems();
        ~AdjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList : public ydk::Entity
{
    public:
        AdjEpList();
        ~AdjEpList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf ifid; //type: uint32
        ydk::YLeaf operst; //type: OspfAdjOperSt
        ydk::YLeaf bfdst; //type: OspfBfdOperSt
        ydk::YLeaf area; //type: string
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf hellooptions; //type: uint32
        ydk::YLeaf dbdoptions; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf peername; //type: string
        class AdjstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems> gr_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stchgcnt; //type: uint32
        ydk::YLeaf laststchgts; //type: string
        ydk::YLeaf lastnonhellopktts; //type: string
        ydk::YLeaf dbdseqnum; //type: uint32
        ydk::YLeaf reqlsacnt; //type: uint32
        ydk::YLeaf outstandinglsacnt; //type: uint32
        ydk::YLeaf lsareqrexmitcnt; //type: uint32
        ydk::YLeaf deadtimerexpts; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems : public ydk::Entity
{
    public:
        GrItems();
        ~GrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf helperst; //type: OspfHelperSt
        ydk::YLeaf helperage; //type: uint32
        ydk::YLeaf helperexitqual; //type: OspfHelperExitQual

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems : public ydk::Entity
{
    public:
        SlinkItems();
        ~SlinkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SLinkList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList

        ydk::YList slink_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList : public ydk::Entity
{
    public:
        SLinkList();
        ~SLinkList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf demandckt; //type: boolean
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint32
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf cost; //type: uint16
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems> authnew_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems : public ydk::Entity
{
    public:
        LsaleakpItems();
        ~LsaleakpItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf operst; //type: OspfLsaLeakOperSt

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems : public ydk::Entity
{
    public:
        LsaleakctrlpItems();
        ~LsaleakctrlpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaLeakCtrlPList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList

        ydk::YList lsaleakctrlp_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList : public ydk::Entity
{
    public:
        LsaLeakCtrlPList();
        ~LsaLeakCtrlPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dir; //type: RtleakRtCtrlDir
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf operst; //type: OspfLsaLeakOperSt

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems : public ydk::Entity
{
    public:
        DefrtleakItems();
        ~DefrtleakItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: OspfAlways

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems : public ydk::Entity
{
    public:
        IartsumItems();
        ~IartsumItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterAreaRtSumList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList

        ydk::YList interareartsum_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList : public ydk::Entity
{
    public:
        InterAreaRtSumList();
        ~InterAreaRtSumList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf comprtcnt; //type: uint32
        ydk::YLeaf opercost; //type: uint32
        ydk::YLeaf cost; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfDbT
        ydk::YLeaf name; //type: string
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems : public ydk::Entity
{
    public:
        LsaItems();
        ~LsaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
{
    public:
        LsaRecList();
        ~LsaRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfLsaT
        ydk::YLeaf id; //type: string
        ydk::YLeaf advrtr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf patht; //type: OspfPathT
        ydk::YLeaf area; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf ucastcost; //type: uint16
        ydk::YLeaf mcastcost; //type: uint16
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf dist; //type: uint8
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
{
    public:
        UcnhItems();
        ~UcnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
{
    public:
        UcNexthopList();
        ~UcNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
{
    public:
        McnhItems();
        ~McnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
{
    public:
        McNexthopList();
        ~McNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems : public ydk::Entity
{
    public:
        SpfcompItems();
        ~SpfcompItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf initintvl; //type: uint32
        ydk::YLeaf holdintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems : public ydk::Entity
{
    public:
        LsactrlItems();
        ~LsactrlItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf gppacingintvl; //type: uint16
        ydk::YLeaf arrivalintvl; //type: uint32
        ydk::YLeaf startintvl; //type: uint32
        ydk::YLeaf holdintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems : public ydk::Entity
{
    public:
        DomstatsItems();
        ~DomstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifcnt; //type: uint32
        ydk::YLeaf areacnt; //type: uint32
        ydk::YLeaf stubareacnt; //type: uint32
        ydk::YLeaf nssaareacnt; //type: uint32
        ydk::YLeaf extareacnt; //type: uint32
        ydk::YLeaf activestubareacnt; //type: uint32
        ydk::YLeaf activenssaareacnt; //type: uint32
        ydk::YLeaf activeextareacnt; //type: uint32
        ydk::YLeaf activeareacnt; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string
        ydk::YLeaf peercnt; //type: uint32
        ydk::YLeaf extlsacnt; //type: uint32
        ydk::YLeaf opaqueaslsacnt; //type: uint32
        ydk::YLeaf totalaslsacnt; //type: uint32
        ydk::YLeaf newlsarxcnt; //type: uint32
        ydk::YLeaf newlsatxcnt; //type: uint32
        ydk::YLeaf areabdrrtr; //type: uint8
        ydk::YLeaf asbdrrtr; //type: uint8

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems : public ydk::Entity
{
    public:
        GrItems();
        ~GrItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: OspfGrCtrl
        ydk::YLeaf helper; //type: boolean
        ydk::YLeaf graceperiod; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf passivectrl; //type: OspfPassiveControl
        ydk::YLeaf bfdctrl; //type: OspfBfdControl
        ydk::YLeaf nwt; //type: OspfNwT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf area; //type: string
        ydk::YLeaf advertisesecondaries; //type: boolean
        ydk::YLeaf operst; //type: OspfIfOperSt
        ydk::YLeaf failstqual; //type: string
        ydk::YLeaf type; //type: OspfIfType
        ydk::YLeaf flags; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf drid; //type: string
        ydk::YLeaf bdrid; //type: string
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf opercost; //type: uint16
        ydk::YLeaf operdeadintvl; //type: uint32
        ydk::YLeaf opersidindex; //type: int32
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint32
        ydk::YLeaf rexmitintvl; //type: uint16
        class AdjItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems
        class AuthItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems
        class IfstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems
        class MultiareaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems
        class TrstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems
        class RtospfIfDefToOspfIfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems
        class RtvrfMbrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems> authnew_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems> multiarea_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems> rtospfifdeftoospfif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
{
    public:
        AdjItems();
        ~AdjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
{
    public:
        AdjEpList();
        ~AdjEpList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf ifid; //type: uint32
        ydk::YLeaf operst; //type: OspfAdjOperSt
        ydk::YLeaf bfdst; //type: OspfBfdOperSt
        ydk::YLeaf area; //type: string
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf hellooptions; //type: uint32
        ydk::YLeaf dbdoptions; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf peername; //type: string
        class AdjstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems> gr_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stchgcnt; //type: uint32
        ydk::YLeaf laststchgts; //type: string
        ydk::YLeaf lastnonhellopktts; //type: string
        ydk::YLeaf dbdseqnum; //type: uint32
        ydk::YLeaf reqlsacnt; //type: uint32
        ydk::YLeaf outstandinglsacnt; //type: uint32
        ydk::YLeaf lsareqrexmitcnt; //type: uint32
        ydk::YLeaf deadtimerexpts; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems : public ydk::Entity
{
    public:
        GrItems();
        ~GrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf helperst; //type: OspfHelperSt
        ydk::YLeaf helperage; //type: uint32
        ydk::YLeaf helperexitqual; //type: OspfHelperExitQual

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems : public ydk::Entity
{
    public:
        AuthItems();
        ~AuthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfDbT
        ydk::YLeaf name; //type: string
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems : public ydk::Entity
{
    public:
        LsaItems();
        ~LsaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
{
    public:
        LsaRecList();
        ~LsaRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfLsaT
        ydk::YLeaf id; //type: string
        ydk::YLeaf advrtr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf patht; //type: OspfPathT
        ydk::YLeaf area; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf ucastcost; //type: uint16
        ydk::YLeaf mcastcost; //type: uint16
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf dist; //type: uint8
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
{
    public:
        UcnhItems();
        ~UcnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
{
    public:
        UcNexthopList();
        ~UcNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
{
    public:
        McnhItems();
        ~McnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
{
    public:
        McNexthopList();
        ~McNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems : public ydk::Entity
{
    public:
        IfstatsItems();
        ~IfstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evcnt; //type: uint32
        ydk::YLeaf lsacnt; //type: uint32
        ydk::YLeaf peercnt; //type: uint32
        ydk::YLeaf floodtopeercnt; //type: uint32
        ydk::YLeaf adjcnt; //type: uint32
        ydk::YLeaf grhelperpeercnt; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems : public ydk::Entity
{
    public:
        MultiareaItems();
        ~MultiareaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList

        ydk::YList multiarea_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList : public ydk::Entity
{
    public:
        MultiAreaList();
        ~MultiAreaList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multiareaid; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf totalpktsrcvd; //type: uint32
        ydk::YLeaf hellopktsrcvd; //type: uint32
        ydk::YLeaf dbdpktsrcvd; //type: uint32
        ydk::YLeaf lsreqpktsrcvd; //type: uint32
        ydk::YLeaf lsupdpktsrcvd; //type: uint32
        ydk::YLeaf lsackpktsrcvd; //type: uint32
        ydk::YLeaf rcvdpktsdropped; //type: uint32
        ydk::YLeaf errpktsrcvd; //type: uint32
        ydk::YLeaf errhellopktsrcvd; //type: uint32
        ydk::YLeaf errdbdpktsrcvd; //type: uint32
        ydk::YLeaf errlsreqpktsrcvd; //type: uint32
        ydk::YLeaf errlsupdpktsrcvd; //type: uint32
        ydk::YLeaf errlsackpktsrcvd; //type: uint32
        ydk::YLeaf unknownpktsrcvd; //type: uint32
        ydk::YLeaf duprtridpktsrcvd; //type: uint32
        ydk::YLeaf dupsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf wrongareapktsrcvd; //type: uint32
        ydk::YLeaf invalidsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf invaliddestaddrpktsrcvd; //type: uint32
        ydk::YLeaf badcrcpktsrcvd; //type: uint32
        ydk::YLeaf badversionpktsrcvd; //type: uint32
        ydk::YLeaf badresvfieldpktsrcvd; //type: uint32
        ydk::YLeaf peerrtridchgdpktsrcvd; //type: uint32
        ydk::YLeaf peernotfoundpktsrcvd; //type: uint32
        ydk::YLeaf badauthpktsrcvd; //type: uint32
        ydk::YLeaf badlenpktsrcvd; //type: uint32
        ydk::YLeaf passiveintfpktsrcvd; //type: uint32
        ydk::YLeaf noospfintfpktsrcvd; //type: uint32
        ydk::YLeaf rcvdlsapktsignored; //type: uint32
        ydk::YLeaf droppedlsapktswhilespf; //type: uint32
        ydk::YLeaf droppedlsapktswhilegr; //type: uint32
        ydk::YLeaf totalpktssent; //type: uint32
        ydk::YLeaf hellopktssent; //type: uint32
        ydk::YLeaf dbdpktssent; //type: uint32
        ydk::YLeaf lsreqpktssent; //type: uint32
        ydk::YLeaf lsupdpktssent; //type: uint32
        ydk::YLeaf lsackpktssent; //type: uint32
        ydk::YLeaf droppedsendpkts; //type: uint32
        ydk::YLeaf errsendpkts; //type: uint32
        ydk::YLeaf lsufirsttxpkts; //type: uint32
        ydk::YLeaf lsurexmitpkts; //type: uint32
        ydk::YLeaf lsuforlsreqpkts; //type: uint32
        ydk::YLeaf lsupeertxpkts; //type: uint32
        ydk::YLeaf floodpktsendipthrottle; //type: uint32
        ydk::YLeaf floodpktsendtokenthrottle; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems : public ydk::Entity
{
    public:
        RtospfIfDefToOspfIfItems();
        ~RtospfIfDefToOspfIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtOspfIfDefToOspfIfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList

        ydk::YList rtospfifdeftoospfif_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList : public ydk::Entity
{
    public:
        RtOspfIfDefToOspfIfList();
        ~RtOspfIfDefToOspfIfList();

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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems : public ydk::Entity
{
    public:
        MaxlsapItems();
        ~MaxlsapItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf maxlsa; //type: uint32
        ydk::YLeaf thresh; //type: uint16
        ydk::YLeaf sleepcnt; //type: uint32
        ydk::YLeaf sleepintvl; //type: uint16
        ydk::YLeaf resetintvl; //type: uint32
        ydk::YLeaf action; //type: OspfMaxLsaAct
        ydk::YLeaf operst; //type: OspfMaxLsaOperSt
        ydk::YLeaf operstqual; //type: OspfMaxLsaOperStQual
        ydk::YLeaf nonselflsacnt; //type: uint32
        ydk::YLeaf currsleepcnt; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems : public ydk::Entity
{
    public:
        MaxmetriclsapItems();
        ~MaxmetriclsapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf maxmetricextlsa; //type: uint32
        ydk::YLeaf maxmetricsummlsa; //type: uint32
        ydk::YLeaf startupintvl; //type: uint32
        ydk::YLeaf awaitconvbgpasn; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems : public ydk::Entity
{
    public:
        DefrtleakItems();
        ~DefrtleakItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: OspfAlways

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems : public ydk::Entity
{
    public:
        InterleakItems();
        ~InterleakItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterLeakPList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList : public ydk::Entity
{
    public:
        InterLeakPList();
        ~InterLeakPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: RtleakProto
        ydk::YLeaf inst; //type: string
        ydk::YLeaf asn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: OspfAlways

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList


class System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems : public ydk::Entity
{
    public:
        LeakctrlItems();
        ~LeakctrlItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: RtleakCtrl
        ydk::YLeaf max; //type: uint16
        ydk::YLeaf thresh; //type: uint8
        ydk::YLeaf retries; //type: uint16
        ydk::YLeaf duration; //type: uint16

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems : public ydk::Entity
{
    public:
        RibleakItems();
        ~RibleakItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: boolean

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems : public ydk::Entity
{
    public:
        ExtrtsumItems();
        ~ExtrtsumItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtRtSumList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList

        ydk::YList extrtsum_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList : public ydk::Entity
{
    public:
        ExtRtSumList();
        ~ExtRtSumList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf comprtcnt; //type: uint32
        ydk::YLeaf opercost; //type: uint32
        ydk::YLeaf tag; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList


class System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf totalpktsrcvd; //type: uint32
        ydk::YLeaf hellopktsrcvd; //type: uint32
        ydk::YLeaf dbdpktsrcvd; //type: uint32
        ydk::YLeaf lsreqpktsrcvd; //type: uint32
        ydk::YLeaf lsupdpktsrcvd; //type: uint32
        ydk::YLeaf lsackpktsrcvd; //type: uint32
        ydk::YLeaf rcvdpktsdropped; //type: uint32
        ydk::YLeaf errpktsrcvd; //type: uint32
        ydk::YLeaf errhellopktsrcvd; //type: uint32
        ydk::YLeaf errdbdpktsrcvd; //type: uint32
        ydk::YLeaf errlsreqpktsrcvd; //type: uint32
        ydk::YLeaf errlsupdpktsrcvd; //type: uint32
        ydk::YLeaf errlsackpktsrcvd; //type: uint32
        ydk::YLeaf unknownpktsrcvd; //type: uint32
        ydk::YLeaf duprtridpktsrcvd; //type: uint32
        ydk::YLeaf dupsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf wrongareapktsrcvd; //type: uint32
        ydk::YLeaf invalidsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf invaliddestaddrpktsrcvd; //type: uint32
        ydk::YLeaf badcrcpktsrcvd; //type: uint32
        ydk::YLeaf badversionpktsrcvd; //type: uint32
        ydk::YLeaf badresvfieldpktsrcvd; //type: uint32
        ydk::YLeaf peerrtridchgdpktsrcvd; //type: uint32
        ydk::YLeaf peernotfoundpktsrcvd; //type: uint32
        ydk::YLeaf badauthpktsrcvd; //type: uint32
        ydk::YLeaf badlenpktsrcvd; //type: uint32
        ydk::YLeaf passiveintfpktsrcvd; //type: uint32
        ydk::YLeaf noospfintfpktsrcvd; //type: uint32
        ydk::YLeaf rcvdlsapktsignored; //type: uint32
        ydk::YLeaf droppedlsapktswhilespf; //type: uint32
        ydk::YLeaf droppedlsapktswhilegr; //type: uint32
        ydk::YLeaf totalpktssent; //type: uint32
        ydk::YLeaf hellopktssent; //type: uint32
        ydk::YLeaf dbdpktssent; //type: uint32
        ydk::YLeaf lsreqpktssent; //type: uint32
        ydk::YLeaf lsupdpktssent; //type: uint32
        ydk::YLeaf lsackpktssent; //type: uint32
        ydk::YLeaf droppedsendpkts; //type: uint32
        ydk::YLeaf errsendpkts; //type: uint32
        ydk::YLeaf lsufirsttxpkts; //type: uint32
        ydk::YLeaf lsurexmitpkts; //type: uint32
        ydk::YLeaf lsuforlsreqpkts; //type: uint32
        ydk::YLeaf lsupeertxpkts; //type: uint32
        ydk::YLeaf floodpktsendipthrottle; //type: uint32
        ydk::YLeaf floodpktsendtokenthrottle; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems


class System::OspfItems::InstItems::InstList::EvtlogsItems : public ydk::Entity
{
    public:
        EvtlogsItems();
        ~EvtlogsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventLogsList; //type: System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList

        ydk::YList eventlogs_list;
        
}; // System::OspfItems::InstItems::InstList::EvtlogsItems


class System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList : public ydk::Entity
{
    public:
        EventLogsList();
        ~EventLogsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eventtype; //type: OspfEventType
        ydk::YLeaf logsize; //type: OspfEventLogSize
        ydk::YLeaf logsizekbytes; //type: uint16

}; // System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList


class System::EvpnItems : public ydk::Entity
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

        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class BdeviItems; //type: System::EvpnItems::BdeviItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems> bdevi_items;
        
}; // System::EvpnItems


class System::EvpnItems::BdeviItems : public ydk::Entity
{
    public:
        BdeviItems();
        ~BdeviItems();

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

        class BDEviList; //type: System::EvpnItems::BdeviItems::BDEviList

        ydk::YList bdevi_list;
        
}; // System::EvpnItems::BdeviItems


class System::EvpnItems::BdeviItems::BDEviList : public ydk::Entity
{
    public:
        BDEviList();
        ~BDEviList();

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
        ydk::YLeaf operrd; //type: string
        ydk::YLeaf rd; //type: string
        class RttpItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems> rttp_items;
        
}; // System::EvpnItems::BdeviItems::BDEviList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems : public ydk::Entity
{
    public:
        RttpItems();
        ~RttpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttPList; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList : public ydk::Entity
{
    public:
        RttPList();
        ~RttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RtctrlRttPType
        ydk::YLeaf operrttauto; //type: string
        class EntItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems
        class RtctrlmapItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems
        class RtctrldefmapItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems> rtctrlmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems> rtctrldefmap_items;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttEntryList; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
{
    public:
        RttEntryList();
        ~RttEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtt; //type: string

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems : public ydk::Entity
{
    public:
        RtctrlmapItems();
        ~RtctrlmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems : public ydk::Entity
{
    public:
        RtctrldefmapItems();
        ~RtctrldefmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxlimit; //type: uint32
        ydk::YLeaf allowvpn; //type: boolean
        ydk::YLeaf rtmap; //type: string

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems


class System::UserextItems : public ydk::Entity
{
    public:
        UserextItems();
        ~UserextItems();

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

        ydk::YLeaf pwdstrengthcheck; //type: AaaBoolean
        ydk::YLeaf pwdsecuremode; //type: AaaBoolean
        ydk::YLeaf pwdminlength; //type: uint16
        ydk::YLeaf pwdmaxlength; //type: uint16
        ydk::YLeaf svcpwdrecovery; //type: AaaBoolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RadiusextItems; //type: System::UserextItems::RadiusextItems
        class LdapextItems; //type: System::UserextItems::LdapextItems
        class TacacsextItems; //type: System::UserextItems::TacacsextItems
        class AuthrealmItems; //type: System::UserextItems::AuthrealmItems
        class LogindomainItems; //type: System::UserextItems::LogindomainItems
        class PreloginbannerItems; //type: System::UserextItems::PreloginbannerItems
        class RemoteuserItems; //type: System::UserextItems::RemoteuserItems
        class UserItems; //type: System::UserextItems::UserItems
        class RoleItems; //type: System::UserextItems::RoleItems
        class FactoryroleItems; //type: System::UserextItems::FactoryroleItems
        class DomainItems; //type: System::UserextItems::DomainItems
        class PwdprofileItems; //type: System::UserextItems::PwdprofileItems
        class PkiextItems; //type: System::UserextItems::PkiextItems
        class RtfabricResUserEpItems; //type: System::UserextItems::RtfabricResUserEpItems
        class RtaaaUserEpItems; //type: System::UserextItems::RtaaaUserEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems> radiusext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems> ldapext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems> tacacsext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems> authrealm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems> logindomain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PreloginbannerItems> preloginbanner_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RemoteuserItems> remoteuser_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems> user_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RoleItems> role_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::FactoryroleItems> factoryrole_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::DomainItems> domain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PwdprofileItems> pwdprofile_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems> pkiext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RtfabricResUserEpItems> rtfabricresuserep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RtaaaUserEpItems> rtaaauserep_items;
        
}; // System::UserextItems


class System::UserextItems::RadiusextItems : public ydk::Entity
{
    public:
        RadiusextItems();
        ~RadiusextItems();

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

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyenc; //type: AaaKeyEnc
        ydk::YLeaf logginglevel; //type: AaaLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf srcif; //type: string
        class RadiusproviderItems; //type: System::UserextItems::RadiusextItems::RadiusproviderItems
        class RadiusprovidergroupItems; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems
        class RadiusservermonitorItems; //type: System::UserextItems::RadiusextItems::RadiusservermonitorItems
        class RtfabricResRadiusEpItems; //type: System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusproviderItems> radiusprovider_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusprovidergroupItems> radiusprovidergroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusservermonitorItems> radiusservermonitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems> rtfabricresradiusep_items;
        
}; // System::UserextItems::RadiusextItems


class System::UserextItems::RadiusextItems::RadiusproviderItems : public ydk::Entity
{
    public:
        RadiusproviderItems();
        ~RadiusproviderItems();

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

        class RadiusProviderList; //type: System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList

        ydk::YList radiusprovider_list;
        
}; // System::UserextItems::RadiusextItems::RadiusproviderItems


class System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList : public ydk::Entity
{
    public:
        RadiusProviderList();
        ~RadiusProviderList();

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
        ydk::YLeaf usetype; //type: AaaRadSrvUseType
        ydk::YLeaf authport; //type: uint32
        ydk::YLeaf acctport; //type: uint32
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyenc; //type: AaaKeyEncRadiusProviderKeyEnc
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf monitorserver; //type: AaaMonitorServerType
        ydk::YLeaf monitoringuser; //type: string
        ydk::YLeaf monitoringpassword; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf snmpindex; //type: uint32

}; // System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems : public ydk::Entity
{
    public:
        RadiusprovidergroupItems();
        ~RadiusprovidergroupItems();

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

        class RadiusProviderGroupList; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList

        ydk::YList radiusprovidergroup_list;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList : public ydk::Entity
{
    public:
        RadiusProviderGroupList();
        ~RadiusProviderGroupList();

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
        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf vrf; //type: string
        class ProviderrefItems; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems> providerref_items;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems : public ydk::Entity
{
    public:
        ProviderrefItems();
        ~ProviderrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderRefList; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList

        ydk::YList providerref_list;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList : public ydk::Entity
{
    public:
        ProviderRefList();
        ~ProviderRefList();

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
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList


class System::UserextItems::RadiusextItems::RadiusservermonitorItems : public ydk::Entity
{
    public:
        RadiusservermonitorItems();
        ~RadiusservermonitorItems();

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

        ydk::YLeaf pwd; //type: string
        ydk::YLeaf idletime; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::RadiusextItems::RadiusservermonitorItems


class System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems : public ydk::Entity
{
    public:
        RtfabricResRadiusEpItems();
        ~RtfabricResRadiusEpItems();

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

        class RtFabricResRadiusEpList; //type: System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList

        ydk::YList rtfabricresradiusep_list;
        
}; // System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems


class System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList : public ydk::Entity
{
    public:
        RtFabricResRadiusEpList();
        ~RtFabricResRadiusEpList();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList


class System::UserextItems::LdapextItems : public ydk::Entity
{
    public:
        LdapextItems();
        ~LdapextItems();

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

        ydk::YLeaf attribute; //type: string
        ydk::YLeaf basedn; //type: string
        ydk::YLeaf filter; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf srcif; //type: string
        class LdapprovidergroupItems; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems
        class LdapproviderItems; //type: System::UserextItems::LdapextItems::LdapproviderItems
        class RtfabricResLdapEpItems; //type: System::UserextItems::LdapextItems::RtfabricResLdapEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::LdapprovidergroupItems> ldapprovidergroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::LdapproviderItems> ldapprovider_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::RtfabricResLdapEpItems> rtfabricresldapep_items;
        
}; // System::UserextItems::LdapextItems


class System::UserextItems::LdapextItems::LdapprovidergroupItems : public ydk::Entity
{
    public:
        LdapprovidergroupItems();
        ~LdapprovidergroupItems();

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

        class LdapProviderGroupList; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList

        ydk::YList ldapprovidergroup_list;
        
}; // System::UserextItems::LdapextItems::LdapprovidergroupItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_21_ */

