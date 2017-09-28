#ifndef _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_OPER_
#define _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_coherent_portmode_oper {

class ControllerPortMode : public ydk::Entity
{
    public:
        ControllerPortMode();
        ~ControllerPortMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class OpticsName; //type: ControllerPortMode::OpticsName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_portmode_oper::ControllerPortMode::OpticsName> > optics_name;
        
}; // ControllerPortMode


class ControllerPortMode::OpticsName : public ydk::Entity
{
    public:
        OpticsName();
        ~OpticsName();

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

        ydk::YLeaf interface_name; //type: string
        class PortModeInfo; //type: ControllerPortMode::OpticsName::PortModeInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_portmode_oper::ControllerPortMode::OpticsName::PortModeInfo> port_mode_info;
        
}; // ControllerPortMode::OpticsName


class ControllerPortMode::OpticsName::PortModeInfo : public ydk::Entity
{
    public:
        PortModeInfo();
        ~PortModeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf_name; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf fec; //type: string
        ydk::YLeaf diff; //type: string
        ydk::YLeaf modulation; //type: string

}; // ControllerPortMode::OpticsName::PortModeInfo


}
}

#endif /* _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_OPER_ */
