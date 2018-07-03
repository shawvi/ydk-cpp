#ifndef _CISCO_NX_OS_DEVICE_38_
#define _CISCO_NX_OS_DEVICE_38_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_36.hpp"
#include "Cisco_NX_OS_device_37.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList : public ydk::Entity
{
    public:
        SpSdList();
        ~SpSdList();

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
        ydk::YLeaf majth; //type: int16
        ydk::YLeaf minth; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems : public ydk::Entity
{
    public:
        SpsensorblkItems();
        ~SpsensorblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16
        class SpsdItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems> spsd_items;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems : public ydk::Entity
{
    public:
        SpsdItems();
        ~SpsdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpSdList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList : public ydk::Entity
{
    public:
        SpSdList();
        ~SpSdList();

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
        ydk::YLeaf majth; //type: int16
        ydk::YLeaf minth; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList


class System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems : public ydk::Entity
{
    public:
        AsicItems();
        ~AsicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

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
        ydk::YLeaf type; //type: EqptAsicT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numslices; //type: uint8
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList


class System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems : public ydk::Entity
{
    public:
        CpuItems();
        ~CpuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CPUList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList : public ydk::Entity
{
    public:
        CPUList();
        ~CPUList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sock; //type: EqptSock
        ydk::YLeaf arch; //type: EqptArchCPUArch
        ydk::YLeaf speed; //type: decimal64
        ydk::YLeaf cores; //type: uint16
        ydk::YLeaf coresen; //type: uint16
        ydk::YLeaf thrds; //type: uint16
        class CoreItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList


class System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems : public ydk::Entity
{
    public:
        CoreItems();
        ~CoreItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CoreList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
{
    public:
        CoreList();
        ~CoreList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems : public ydk::Entity
{
    public:
        FpgaItems();
        ~FpgaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FpgaList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems::FpgaList

        ydk::YList fpga_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems::FpgaList : public ydk::Entity
{
    public:
        FpgaList();
        ~FpgaList();

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
        ydk::YLeaf type; //type: EqptFpgaT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        class RunningItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems::FpgaList::RunningItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems::FpgaList::RunningItems> running_items;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems::FpgaList


class System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems::FpgaList::RunningItems : public ydk::Entity
{
    public:
        RunningItems();
        ~RunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expectedver; //type: string
        ydk::YLeaf operst; //type: FirmwareRunningOperSt
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::FpgaItems::FpgaList::RunningItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems : public ydk::Entity
{
    public:
        DimmItems();
        ~DimmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DimmList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList : public ydk::Entity
{
    public:
        DimmList();
        ~DimmList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList


class System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems : public ydk::Entity
{
    public:
        FlashItems();
        ~FlashItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems : public ydk::Entity
{
    public:
        ObflItems();
        ~ObflItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logt; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems


class System::ChItems::FcslotItems::FCSlotList::RstrecItems : public ydk::Entity
{
    public:
        RstrecItems();
        ~RstrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CardRstRecList; //type: System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList

        ydk::YList cardrstrec_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::RstrecItems


class System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList : public ydk::Entity
{
    public:
        CardRstRecList();
        ~CardRstRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ts; //type: string
        ydk::YLeaf reason; //type: SyshistRstRsn
        ydk::YLeaf reasonqual; //type: string
        ydk::YLeaf ver; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList


class System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems


class System::ChItems::ScslotItems : public ydk::Entity
{
    public:
        ScslotItems();
        ~ScslotItems();

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

        class SysCSlotList; //type: System::ChItems::ScslotItems::SysCSlotList

        ydk::YList syscslot_list;
        
}; // System::ChItems::ScslotItems


class System::ChItems::ScslotItems::SysCSlotList : public ydk::Entity
{
    public:
        SysCSlotList();
        ~SysCSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class ScItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems
        class RstrecItems; //type: System::ChItems::ScslotItems::SysCSlotList::RstrecItems
        class RtoosSlotItems; //type: System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems> sc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::RstrecItems> rstrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList


class System::ChItems::ScslotItems::SysCSlotList::ScItems : public ydk::Entity
{
    public:
        ScItems();
        ~ScItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf rdst; //type: EqptRdSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf upts; //type: string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf fwver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        class RunningItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems
        class IndledItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::IndledItems
        class LocledItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems
        class EobcItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems
        class EpcItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems
        class SensorItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems
        class SplcItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems
        class AsicItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems
        class CpuItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems
        class FpgaItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems
        class DimmItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems
        class FlashItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems
        class ObflItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::IndledItems> indled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems> eobc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems> epc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems> splc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems> fpga_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems> obfl_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems : public ydk::Entity
{
    public:
        RunningItems();
        ~RunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf biosver; //type: string
        ydk::YLeaf expectedver; //type: string
        ydk::YLeaf operst; //type: FirmwareRunningOperSt
        ydk::YLeaf interimver; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::IndledItems : public ydk::Entity
{
    public:
        IndledItems();
        ~IndledItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IndLedList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::IndledItems::IndLedList

        ydk::YList indled_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::IndledItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::IndledItems::IndLedList : public ydk::Entity
{
    public:
        IndLedList();
        ~IndLedList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf type; //type: EqptLedType

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::IndledItems::IndLedList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems : public ydk::Entity
{
    public:
        LocledItems();
        ~LocledItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocLedList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList : public ydk::Entity
{
    public:
        LocLedList();
        ~LocLedList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf type; //type: EqptLedType
        ydk::YLeaf adminst; //type: EqptAdSt

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems : public ydk::Entity
{
    public:
        EobcItems();
        ~EobcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EobcPList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList

        ydk::YList eobcp_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList : public ydk::Entity
{
    public:
        EobcPList();
        ~EobcPList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptPortT
        class LportItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::LportItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::LportItems> lport_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::LportItems : public ydk::Entity
{
    public:
        LportItems();
        ~LportItems();

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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::LportItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems : public ydk::Entity
{
    public:
        EpcItems();
        ~EpcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpcPList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList

        ydk::YList epcp_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList : public ydk::Entity
{
    public:
        EpcPList();
        ~EpcPList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptPortT
        class LportItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::LportItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::LportItems> lport_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::LportItems : public ydk::Entity
{
    public:
        LportItems();
        ~LportItems();

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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::LportItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems : public ydk::Entity
{
    public:
        SensorItems();
        ~SensorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList : public ydk::Entity
{
    public:
        SensorList();
        ~SensorList();

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
        ydk::YLeaf type; //type: EqptSensorT
        ydk::YLeaf majorthresh; //type: int16
        ydk::YLeaf minorthresh; //type: int16
        ydk::YLeaf operst; //type: EqptSensorOpSt
        ydk::YLeaf tempvalue; //type: uint16
        ydk::YLeaf unit; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems : public ydk::Entity
{
    public:
        SplcItems();
        ~SplcItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf errrsn; //type: EqptSpErrRsn
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems
        class SplcblkItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems
        class SppdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems
        class SpsdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems
        class SpsensorblkItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems> splcblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems> sppd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems> spsensorblk_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwrevmaj; //type: uint16
        ydk::YLeaf hwrevmin; //type: uint16
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf ramfl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems : public ydk::Entity
{
    public:
        SplcblkItems();
        ~SplcblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf hwcbits; //type: uint64
        ydk::YLeaf crdidx; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf eobcn; //type: uint16
        ydk::YLeaf epldn; //type: uint16
        ydk::YLeaf epldv; //type: uint16
        ydk::YLeaf sramsz; //type: uint16
        ydk::YLeaf maxcpwr; //type: uint16
        ydk::YLeaf coolrq; //type: uint16
        ydk::YLeaf ambt; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16
        class SpsdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems
        class SppdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems> sppd_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems : public ydk::Entity
{
    public:
        SpsdItems();
        ~SpsdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpSdList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList : public ydk::Entity
{
    public:
        SpSdList();
        ~SpSdList();

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
        ydk::YLeaf majth; //type: int16
        ydk::YLeaf minth; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems : public ydk::Entity
{
    public:
        SppdItems();
        ~SppdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prtty; //type: uint16
        ydk::YLeaf numpts; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems : public ydk::Entity
{
    public:
        SppdItems();
        ~SppdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prtty; //type: uint16
        ydk::YLeaf numpts; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems : public ydk::Entity
{
    public:
        SpsdItems();
        ~SpsdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpSdList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList : public ydk::Entity
{
    public:
        SpSdList();
        ~SpSdList();

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
        ydk::YLeaf majth; //type: int16
        ydk::YLeaf minth; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems : public ydk::Entity
{
    public:
        SpsensorblkItems();
        ~SpsensorblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16
        class SpsdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems> spsd_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems : public ydk::Entity
{
    public:
        SpsdItems();
        ~SpsdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpSdList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList : public ydk::Entity
{
    public:
        SpSdList();
        ~SpSdList();

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
        ydk::YLeaf majth; //type: int16
        ydk::YLeaf minth; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems : public ydk::Entity
{
    public:
        AsicItems();
        ~AsicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

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
        ydk::YLeaf type; //type: EqptAsicT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numslices; //type: uint8
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems : public ydk::Entity
{
    public:
        CpuItems();
        ~CpuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CPUList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList : public ydk::Entity
{
    public:
        CPUList();
        ~CPUList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sock; //type: EqptSock
        ydk::YLeaf arch; //type: EqptArchCPUArch
        ydk::YLeaf speed; //type: decimal64
        ydk::YLeaf cores; //type: uint16
        ydk::YLeaf coresen; //type: uint16
        ydk::YLeaf thrds; //type: uint16
        class CoreItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems : public ydk::Entity
{
    public:
        CoreItems();
        ~CoreItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CoreList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
{
    public:
        CoreList();
        ~CoreList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems : public ydk::Entity
{
    public:
        FpgaItems();
        ~FpgaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FpgaList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems::FpgaList

        ydk::YList fpga_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems::FpgaList : public ydk::Entity
{
    public:
        FpgaList();
        ~FpgaList();

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
        ydk::YLeaf type; //type: EqptFpgaT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        class RunningItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems::FpgaList::RunningItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems::FpgaList::RunningItems> running_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems::FpgaList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems::FpgaList::RunningItems : public ydk::Entity
{
    public:
        RunningItems();
        ~RunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expectedver; //type: string
        ydk::YLeaf operst; //type: FirmwareRunningOperSt
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::FpgaItems::FpgaList::RunningItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems : public ydk::Entity
{
    public:
        DimmItems();
        ~DimmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DimmList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList : public ydk::Entity
{
    public:
        DimmList();
        ~DimmList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems : public ydk::Entity
{
    public:
        FlashItems();
        ~FlashItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems : public ydk::Entity
{
    public:
        ObflItems();
        ~ObflItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logt; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems


class System::ChItems::ScslotItems::SysCSlotList::RstrecItems : public ydk::Entity
{
    public:
        RstrecItems();
        ~RstrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CardRstRecList; //type: System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList

        ydk::YList cardrstrec_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::RstrecItems


class System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList : public ydk::Entity
{
    public:
        CardRstRecList();
        ~CardRstRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ts; //type: string
        ydk::YLeaf reason; //type: SyshistRstRsn
        ydk::YLeaf reasonqual; //type: string
        ydk::YLeaf ver; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList


class System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems


class System::ChItems::PsuslotItems : public ydk::Entity
{
    public:
        PsuslotItems();
        ~PsuslotItems();

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

        class PsuSlotList; //type: System::ChItems::PsuslotItems::PsuSlotList

        ydk::YList psuslot_list;
        
}; // System::ChItems::PsuslotItems


class System::ChItems::PsuslotItems::PsuSlotList : public ydk::Entity
{
    public:
        PsuSlotList();
        ~PsuSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class PsuItems; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems
        class RtoosSlotItems; //type: System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::PsuItems> psu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::PsuslotItems::PsuSlotList


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems : public ydk::Entity
{
    public:
        PsuItems();
        ~PsuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf cap; //type: decimal64
        ydk::YLeaf drawncurr; //type: decimal64
        ydk::YLeaf vsrc; //type: EqptVSrc
        ydk::YLeaf volt; //type: decimal64
        ydk::YLeaf almreg; //type: uint16
        ydk::YLeaf fanopst; //type: EqptOpSt
        ydk::YLeaf inputcurr; //type: decimal64
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        class FanItems; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::FanItems
        class IndledItems; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::IndledItems
        class SppsuItems; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::PsuItems::FanItems> fan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::PsuItems::IndledItems> indled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems> sppsu_items;
        
}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::FanItems : public ydk::Entity
{
    public:
        FanItems();
        ~FanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FanList; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::FanItems::FanList

        ydk::YList fan_list;
        
}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::FanItems


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::FanItems::FanList : public ydk::Entity
{
    public:
        FanList();
        ~FanList();

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
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf dir; //type: EqptAirDir
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::FanItems::FanList


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::IndledItems : public ydk::Entity
{
    public:
        IndledItems();
        ~IndledItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IndLedList; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::IndledItems::IndLedList

        ydk::YList indled_list;
        
}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::IndledItems


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::IndledItems::IndLedList : public ydk::Entity
{
    public:
        IndLedList();
        ~IndLedList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf type; //type: EqptLedType

}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::IndledItems::IndLedList


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems : public ydk::Entity
{
    public:
        SppsuItems();
        ~SppsuItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf errrsn; //type: EqptSpErrRsn
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SpcmnItems
        class SppsublkItems; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SppsublkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SppsublkItems> sppsublk_items;
        
}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwrevmaj; //type: uint16
        ydk::YLeaf hwrevmin; //type: uint16
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf ramfl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SpcmnItems


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SppsublkItems : public ydk::Entity
{
    public:
        SppsublkItems();
        ~SppsublkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf c110v; //type: uint16
        ydk::YLeaf c220v; //type: uint16
        ydk::YLeaf smoid; //type: uint16
        ydk::YLeaf pscmd1; //type: uint16
        ydk::YLeaf pscmd2; //type: uint16
        ydk::YLeaf pscmd3; //type: uint16
        ydk::YLeaf pscmd4; //type: uint16
        ydk::YLeaf pscmxmd1; //type: uint16
        ydk::YLeaf pscmxmd2; //type: uint16
        ydk::YLeaf pscmxmd3; //type: uint16
        ydk::YLeaf pscmxmd4; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SppsublkItems


class System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems


class System::ChItems::FtslotItems : public ydk::Entity
{
    public:
        FtslotItems();
        ~FtslotItems();

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

        class FtSlotList; //type: System::ChItems::FtslotItems::FtSlotList

        ydk::YList ftslot_list;
        
}; // System::ChItems::FtslotItems


class System::ChItems::FtslotItems::FtSlotList : public ydk::Entity
{
    public:
        FtSlotList();
        ~FtSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class FtItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems
        class RtoosSlotItems; //type: System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems> ft_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::FtslotItems::FtSlotList


class System::ChItems::FtslotItems::FtSlotList::FtItems : public ydk::Entity
{
    public:
        FtItems();
        ~FtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf fanletfailstring; //type: string
        ydk::YLeaf fanname; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        class EjItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems
        class FanItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems
        class IndledItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::IndledItems
        class LocledItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems
        class SpfanItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems> ej_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems> fan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::IndledItems> indled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems> spfan_items;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems : public ydk::Entity
{
    public:
        EjItems();
        ~EjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EjecList; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList

        ydk::YList ejec_list;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList : public ydk::Entity
{
    public:
        EjecList();
        ~EjecList();

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
        ydk::YLeaf operst; //type: EqptEjSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList


class System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems : public ydk::Entity
{
    public:
        FanItems();
        ~FanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FanList; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList

        ydk::YList fan_list;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList : public ydk::Entity
{
    public:
        FanList();
        ~FanList();

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
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf dir; //type: EqptAirDir
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList


class System::ChItems::FtslotItems::FtSlotList::FtItems::IndledItems : public ydk::Entity
{
    public:
        IndledItems();
        ~IndledItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IndLedList; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::IndledItems::IndLedList

        ydk::YList indled_list;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::IndledItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::IndledItems::IndLedList : public ydk::Entity
{
    public:
        IndLedList();
        ~IndLedList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf type; //type: EqptLedType

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::IndledItems::IndLedList


class System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems : public ydk::Entity
{
    public:
        LocledItems();
        ~LocledItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocLedList; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList : public ydk::Entity
{
    public:
        LocLedList();
        ~LocLedList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf type; //type: EqptLedType
        ydk::YLeaf adminst; //type: EqptAdSt

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList


class System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems : public ydk::Entity
{
    public:
        SpfanItems();
        ~SpfanItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf errrsn; //type: EqptSpErrRsn
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems
        class SpfanblkItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems
        class SpfansnItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems> spfanblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems> spfansn_items;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwrevmaj; //type: uint16
        ydk::YLeaf hwrevmin; //type: uint16
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf ramfl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems : public ydk::Entity
{
    public:
        SpfanblkItems();
        ~SpfanblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf hwcbits; //type: uint64
        ydk::YLeaf stackmib; //type: uint16
        ydk::YLeaf coolcap; //type: uint16
        ydk::YLeaf ambtemp; //type: uint16
        ydk::YLeaf hppwrcon; //type: uint16
        ydk::YLeaf hpcoolcon; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems : public ydk::Entity
{
    public:
        SpfansnItems();
        ~SpfansnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sernum; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems


class System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems


class System::ChItems::SpbpItems : public ydk::Entity
{
    public:
        SpbpItems();
        ~SpbpItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf errrsn; //type: EqptSpErrRsn
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::SpbpItems::SpcmnItems
        class SpbpblkItems; //type: System::ChItems::SpbpItems::SpbpblkItems
        class BpspwwnItems; //type: System::ChItems::SpbpItems::BpspwwnItems
        class BpsplicItems; //type: System::ChItems::SpbpItems::BpsplicItems
        class BpspssnItems; //type: System::ChItems::SpbpItems::BpspssnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems::SpbpblkItems> spbpblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems::BpspwwnItems> bpspwwn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems::BpsplicItems> bpsplic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems::BpspssnItems> bpspssn_items;
        
}; // System::ChItems::SpbpItems


class System::ChItems::SpbpItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

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

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwrevmaj; //type: uint16
        ydk::YLeaf hwrevmin; //type: uint16
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf ramfl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::SpbpItems::SpcmnItems


class System::ChItems::SpbpItems::SpbpblkItems : public ydk::Entity
{
    public:
        SpbpblkItems();
        ~SpbpblkItems();

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

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf hwcbits; //type: uint64
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf stackmib; //type: uint16
        ydk::YLeaf oemeprise; //type: uint16
        ydk::YLeaf oemmib; //type: uint16
        ydk::YLeaf coolcoe; //type: uint16
        ydk::YLeaf maxcpwr; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::SpbpItems::SpbpblkItems


class System::ChItems::SpbpItems::BpspwwnItems : public ydk::Entity
{
    public:
        BpspwwnItems();
        ~BpspwwnItems();

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

        ydk::YLeaf ubits; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::SpbpItems::BpspwwnItems


class System::ChItems::SpbpItems::BpsplicItems : public ydk::Entity
{
    public:
        BpsplicItems();
        ~BpsplicItems();

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

        ydk::YLeaf ubits; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::SpbpItems::BpsplicItems


class System::ChItems::SpbpItems::BpspssnItems : public ydk::Entity
{
    public:
        BpspssnItems();
        ~BpspssnItems();

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

        ydk::YLeaf sernum; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::SpbpItems::BpspssnItems


class System::ChItems::BslotItems : public ydk::Entity
{
    public:
        BslotItems();
        ~BslotItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class BoardItems; //type: System::ChItems::BslotItems::BoardItems
        class RtoosSlotItems; //type: System::ChItems::BslotItems::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems> board_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::BslotItems


class System::ChItems::BslotItems::BoardItems : public ydk::Entity
{
    public:
        BoardItems();
        ~BoardItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf rdst; //type: EqptRdSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf upts; //type: string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf fwver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        class SensorItems; //type: System::ChItems::BslotItems::BoardItems::SensorItems
        class AsicItems; //type: System::ChItems::BslotItems::BoardItems::AsicItems
        class CpuItems; //type: System::ChItems::BslotItems::BoardItems::CpuItems
        class FpgaItems; //type: System::ChItems::BslotItems::BoardItems::FpgaItems
        class DimmItems; //type: System::ChItems::BslotItems::BoardItems::DimmItems
        class FlashItems; //type: System::ChItems::BslotItems::BoardItems::FlashItems
        class ObflItems; //type: System::ChItems::BslotItems::BoardItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::FpgaItems> fpga_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::ObflItems> obfl_items;
        
}; // System::ChItems::BslotItems::BoardItems


class System::ChItems::BslotItems::BoardItems::SensorItems : public ydk::Entity
{
    public:
        SensorItems();
        ~SensorItems();

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

        class SensorList; //type: System::ChItems::BslotItems::BoardItems::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::BslotItems::BoardItems::SensorItems


class System::ChItems::BslotItems::BoardItems::SensorItems::SensorList : public ydk::Entity
{
    public:
        SensorList();
        ~SensorList();

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
        ydk::YLeaf type; //type: EqptSensorT
        ydk::YLeaf majorthresh; //type: int16
        ydk::YLeaf minorthresh; //type: int16
        ydk::YLeaf operst; //type: EqptSensorOpSt
        ydk::YLeaf tempvalue; //type: uint16
        ydk::YLeaf unit; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::SensorItems::SensorList


class System::ChItems::BslotItems::BoardItems::AsicItems : public ydk::Entity
{
    public:
        AsicItems();
        ~AsicItems();

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

        class AsicList; //type: System::ChItems::BslotItems::BoardItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::BslotItems::BoardItems::AsicItems


class System::ChItems::BslotItems::BoardItems::AsicItems::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

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
        ydk::YLeaf type; //type: EqptAsicT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numslices; //type: uint8
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::AsicItems::AsicList


class System::ChItems::BslotItems::BoardItems::CpuItems : public ydk::Entity
{
    public:
        CpuItems();
        ~CpuItems();

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

        class CPUList; //type: System::ChItems::BslotItems::BoardItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::BslotItems::BoardItems::CpuItems


class System::ChItems::BslotItems::BoardItems::CpuItems::CPUList : public ydk::Entity
{
    public:
        CPUList();
        ~CPUList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sock; //type: EqptSock
        ydk::YLeaf arch; //type: EqptArchCPUArch
        ydk::YLeaf speed; //type: decimal64
        ydk::YLeaf cores; //type: uint16
        ydk::YLeaf coresen; //type: uint16
        ydk::YLeaf thrds; //type: uint16
        class CoreItems; //type: System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::BslotItems::BoardItems::CpuItems::CPUList


class System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems : public ydk::Entity
{
    public:
        CoreItems();
        ~CoreItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CoreList; //type: System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems


class System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
{
    public:
        CoreList();
        ~CoreList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::BslotItems::BoardItems::FpgaItems : public ydk::Entity
{
    public:
        FpgaItems();
        ~FpgaItems();

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

        class FpgaList; //type: System::ChItems::BslotItems::BoardItems::FpgaItems::FpgaList

        ydk::YList fpga_list;
        
}; // System::ChItems::BslotItems::BoardItems::FpgaItems


class System::ChItems::BslotItems::BoardItems::FpgaItems::FpgaList : public ydk::Entity
{
    public:
        FpgaList();
        ~FpgaList();

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
        ydk::YLeaf type; //type: EqptFpgaT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        class RunningItems; //type: System::ChItems::BslotItems::BoardItems::FpgaItems::FpgaList::RunningItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::FpgaItems::FpgaList::RunningItems> running_items;
        
}; // System::ChItems::BslotItems::BoardItems::FpgaItems::FpgaList


class System::ChItems::BslotItems::BoardItems::FpgaItems::FpgaList::RunningItems : public ydk::Entity
{
    public:
        RunningItems();
        ~RunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expectedver; //type: string
        ydk::YLeaf operst; //type: FirmwareRunningOperSt
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::FpgaItems::FpgaList::RunningItems


class System::ChItems::BslotItems::BoardItems::DimmItems : public ydk::Entity
{
    public:
        DimmItems();
        ~DimmItems();

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

        class DimmList; //type: System::ChItems::BslotItems::BoardItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::BslotItems::BoardItems::DimmItems


class System::ChItems::BslotItems::BoardItems::DimmItems::DimmList : public ydk::Entity
{
    public:
        DimmList();
        ~DimmList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::BslotItems::BoardItems::DimmItems::DimmList


class System::ChItems::BslotItems::BoardItems::FlashItems : public ydk::Entity
{
    public:
        FlashItems();
        ~FlashItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::BslotItems::BoardItems::FlashItems


class System::ChItems::BslotItems::BoardItems::ObflItems : public ydk::Entity
{
    public:
        ObflItems();
        ~ObflItems();

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

        ydk::YLeaf logt; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::ObflItems


class System::ChItems::BslotItems::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ChItems::BslotItems::RtoosSlotItems


class System::ChItems::NslotItems : public ydk::Entity
{
    public:
        NslotItems();
        ~NslotItems();

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

        class NSlotList; //type: System::ChItems::NslotItems::NSlotList

        ydk::YList nslot_list;
        
}; // System::ChItems::NslotItems


class System::ChItems::NslotItems::NSlotList : public ydk::Entity
{
    public:
        NSlotList();
        ~NSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class NicItems; //type: System::ChItems::NslotItems::NSlotList::NicItems
        class RtoosSlotItems; //type: System::ChItems::NslotItems::NSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems> nic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::NslotItems::NSlotList


class System::ChItems::NslotItems::NSlotList::NicItems : public ydk::Entity
{
    public:
        NicItems();
        ~NicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NicList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList

        ydk::YList nic_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList : public ydk::Entity
{
    public:
        NicList();
        ~NicList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf rdst; //type: EqptRdSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf upts; //type: string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf fwver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        class EaportItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems
        class SensorItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems
        class AsicItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems
        class CpuItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems
        class FpgaItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems
        class DimmItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems
        class FlashItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems
        class ObflItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems> eaport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems> fpga_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems> obfl_items;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems : public ydk::Entity
{
    public:
        EaportItems();
        ~EaportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtAPList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList

        ydk::YList extap_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList : public ydk::Entity
{
    public:
        ExtAPList();
        ~ExtAPList();

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
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptPortT
        class LportItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::LportItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::LportItems> lport_items;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::LportItems : public ydk::Entity
{
    public:
        LportItems();
        ~LportItems();

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

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::LportItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems : public ydk::Entity
{
    public:
        SensorItems();
        ~SensorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList : public ydk::Entity
{
    public:
        SensorList();
        ~SensorList();

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
        ydk::YLeaf type; //type: EqptSensorT
        ydk::YLeaf majorthresh; //type: int16
        ydk::YLeaf minorthresh; //type: int16
        ydk::YLeaf operst; //type: EqptSensorOpSt
        ydk::YLeaf tempvalue; //type: uint16
        ydk::YLeaf unit; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems : public ydk::Entity
{
    public:
        AsicItems();
        ~AsicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

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
        ydk::YLeaf type; //type: EqptAsicT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numslices; //type: uint8
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems : public ydk::Entity
{
    public:
        CpuItems();
        ~CpuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CPUList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList : public ydk::Entity
{
    public:
        CPUList();
        ~CPUList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sock; //type: EqptSock
        ydk::YLeaf arch; //type: EqptArchCPUArch
        ydk::YLeaf speed; //type: decimal64
        ydk::YLeaf cores; //type: uint16
        ydk::YLeaf coresen; //type: uint16
        ydk::YLeaf thrds; //type: uint16
        class CoreItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems : public ydk::Entity
{
    public:
        CoreItems();
        ~CoreItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CoreList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
{
    public:
        CoreList();
        ~CoreList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems : public ydk::Entity
{
    public:
        FpgaItems();
        ~FpgaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FpgaList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems::FpgaList

        ydk::YList fpga_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems::FpgaList : public ydk::Entity
{
    public:
        FpgaList();
        ~FpgaList();

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
        ydk::YLeaf type; //type: EqptFpgaT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        class RunningItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems::FpgaList::RunningItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems::FpgaList::RunningItems> running_items;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems::FpgaList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems::FpgaList::RunningItems : public ydk::Entity
{
    public:
        RunningItems();
        ~RunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expectedver; //type: string
        ydk::YLeaf operst; //type: FirmwareRunningOperSt
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::FpgaItems::FpgaList::RunningItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems : public ydk::Entity
{
    public:
        DimmItems();
        ~DimmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DimmList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList : public ydk::Entity
{
    public:
        DimmList();
        ~DimmList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems : public ydk::Entity
{
    public:
        FlashItems();
        ~FlashItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems : public ydk::Entity
{
    public:
        ObflItems();
        ~ObflItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logt; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems


class System::ChItems::NslotItems::NSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ChItems::NslotItems::NSlotList::RtoosSlotItems


class System::ChItems::PItems : public ydk::Entity
{
    public:
        PItems();
        ~PItems();

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

        class StorageList; //type: System::ChItems::PItems::StorageList

        ydk::YList storage_list;
        
}; // System::ChItems::PItems


class System::ChItems::PItems::StorageList : public ydk::Entity
{
    public:
        StorageList();
        ~StorageList();

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

        ydk::YLeaf mount; //type: string
        ydk::YLeaf filesystem; //type: string
        ydk::YLeaf blocks; //type: uint32
        ydk::YLeaf used; //type: uint32
        ydk::YLeaf available; //type: uint32
        ydk::YLeaf caputilized; //type: uint8
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf name; //type: string

}; // System::ChItems::PItems::StorageList


class System::ExtchItems : public ydk::Entity
{
    public:
        ExtchItems();
        ~ExtchItems();

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

        class ExtChList; //type: System::ExtchItems::ExtChList

        ydk::YList extch_list;
        
}; // System::ExtchItems


class System::ExtchItems::ExtChList : public ydk::Entity
{
    public:
        ExtChList();
        ~ExtChList();

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
        ydk::YLeaf extchst; //type: EqptExtChSt
        ydk::YLeaf partnum; //type: string
        ydk::YLeaf macaddr; //type: string
        ydk::YLeaf nummacs; //type: uint16
        ydk::YLeaf numuplinkp; //type: uint16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        class RunningItems; //type: System::ExtchItems::ExtChList::RunningItems
        class LocledItems; //type: System::ExtchItems::ExtChList::LocledItems
        class ExtchslotItems; //type: System::ExtchItems::ExtChList::ExtchslotItems
        class PsuslotItems; //type: System::ExtchItems::ExtChList::PsuslotItems
        class FtslotItems; //type: System::ExtchItems::ExtChList::FtslotItems
        class SpbpItems; //type: System::ExtchItems::ExtChList::SpbpItems
        class SpsupItems; //type: System::ExtchItems::ExtChList::SpsupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems> extchslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems> psuslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems> ftslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems> spbp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems> spsup_items;
        
}; // System::ExtchItems::ExtChList


class System::ExtchItems::ExtChList::RunningItems : public ydk::Entity
{
    public:
        RunningItems();
        ~RunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loaderver; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::RunningItems


class System::ExtchItems::ExtChList::LocledItems : public ydk::Entity
{
    public:
        LocledItems();
        ~LocledItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtChLocLedList; //type: System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList

        ydk::YList extchlocled_list;
        
}; // System::ExtchItems::ExtChList::LocledItems


class System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList : public ydk::Entity
{
    public:
        ExtChLocLedList();
        ~ExtChLocLedList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf type; //type: EqptLedType
        ydk::YLeaf adminst; //type: EqptAdSt

}; // System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList


class System::ExtchItems::ExtChList::ExtchslotItems : public ydk::Entity
{
    public:
        ExtchslotItems();
        ~ExtchslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtChCardSlotList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList

        ydk::YList extchcardslot_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList : public ydk::Entity
{
    public:
        ExtChCardSlotList();
        ~ExtChCardSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class ExtchcItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems
        class RstrecItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RstrecItems
        class RtoosSlotItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems> extchc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RstrecItems> rstrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems : public ydk::Entity
{
    public:
        ExtchcItems();
        ~ExtchcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modserial; //type: string
        ydk::YLeaf modvendor; //type: string
        ydk::YLeaf modmodel; //type: string
        ydk::YLeaf partnum; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf rdst; //type: EqptRdSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf upts; //type: string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf fwver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        class ExtchcpuItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcpuItems
        class HostextportItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems
        class LeafextportItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems
        class SensorItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems
        class AsicItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems
        class CpuItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems
        class FpgaItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems
        class DimmItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems
        class FlashItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems
        class ObflItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcpuItems> extchcpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems> hostextport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems> leafextport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems> fpga_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems> obfl_items;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcpuItems : public ydk::Entity
{
    public:
        ExtchcpuItems();
        ~ExtchcpuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtChCPUList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcpuItems::ExtChCPUList

        ydk::YList extchcpu_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcpuItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcpuItems::ExtChCPUList : public ydk::Entity
{
    public:
        ExtChCPUList();
        ~ExtChCPUList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sock; //type: EqptSock
        ydk::YLeaf arch; //type: EqptArchExtChCPUArch
        ydk::YLeaf speed; //type: decimal64
        ydk::YLeaf cores; //type: uint16
        ydk::YLeaf coresen; //type: uint16
        ydk::YLeaf thrds; //type: uint16

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcpuItems::ExtChCPUList


}
}

#endif /* _CISCO_NX_OS_DEVICE_38_ */
