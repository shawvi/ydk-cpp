
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_agent_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_agent_oper {

Pcc::Pcc()
    :
    plsps(std::make_shared<Pcc::Plsps>())
	,peers(std::make_shared<Pcc::Peers>())
{
    plsps->parent = this;
    peers->parent = this;

    yang_name = "pcc"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-agent-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Pcc::~Pcc()
{
}

bool Pcc::has_data() const
{
    return (plsps !=  nullptr && plsps->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool Pcc::has_operation() const
{
    return is_set(yfilter)
	|| (plsps !=  nullptr && plsps->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plsps")
    {
        if(plsps == nullptr)
        {
            plsps = std::make_shared<Pcc::Plsps>();
        }
        return plsps;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Pcc::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(plsps != nullptr)
    {
        children["plsps"] = plsps;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Pcc::clone_ptr() const
{
    return std::make_shared<Pcc>();
}

std::string Pcc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pcc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pcc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pcc::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plsps" || name == "peers")
        return true;
    return false;
}

Pcc::Plsps::Plsps()
{

    yang_name = "plsps"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false;
}

Pcc::Plsps::~Plsps()
{
}

bool Pcc::Plsps::has_data() const
{
    for (std::size_t index=0; index<plsp.size(); index++)
    {
        if(plsp[index]->has_data())
            return true;
    }
    return false;
}

bool Pcc::Plsps::has_operation() const
{
    for (std::size_t index=0; index<plsp.size(); index++)
    {
        if(plsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pcc::Plsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Pcc::Plsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plsp")
    {
        auto c = std::make_shared<Pcc::Plsps::Plsp>();
        c->parent = this;
        plsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : plsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pcc::Plsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pcc::Plsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pcc::Plsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plsp")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Plsp()
    :
    plsp_id{YType::int32, "plsp-id"},
    plsp_id_xr{YType::uint32, "plsp-id-xr"},
    sym_path_name{YType::str, "sym-path-name"},
    refcnt{YType::int64, "refcnt"},
    conn_delegated_to{YType::uint32, "conn-delegated-to"}
    	,
    stats(std::make_shared<Pcc::Plsps::Plsp::Stats>())
{
    stats->parent = this;

    yang_name = "plsp"; yang_parent_name = "plsps"; is_top_level_class = false; has_list_ancestor = false;
}

Pcc::Plsps::Plsp::~Plsp()
{
}

bool Pcc::Plsps::Plsp::has_data() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return plsp_id.is_set
	|| plsp_id_xr.is_set
	|| sym_path_name.is_set
	|| refcnt.is_set
	|| conn_delegated_to.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool Pcc::Plsps::Plsp::has_operation() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(plsp_id_xr.yfilter)
	|| ydk::is_set(sym_path_name.yfilter)
	|| ydk::is_set(refcnt.yfilter)
	|| ydk::is_set(conn_delegated_to.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Pcc::Plsps::Plsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:pcc/plsps/" << get_segment_path();
    return path_buffer.str();
}

std::string Pcc::Plsps::Plsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plsp" <<"[plsp-id='" <<plsp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (plsp_id_xr.is_set || is_set(plsp_id_xr.yfilter)) leaf_name_data.push_back(plsp_id_xr.get_name_leafdata());
    if (sym_path_name.is_set || is_set(sym_path_name.yfilter)) leaf_name_data.push_back(sym_path_name.get_name_leafdata());
    if (refcnt.is_set || is_set(refcnt.yfilter)) leaf_name_data.push_back(refcnt.get_name_leafdata());
    if (conn_delegated_to.is_set || is_set(conn_delegated_to.yfilter)) leaf_name_data.push_back(conn_delegated_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Pcc::Plsps::Plsp::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "event-history")
    {
        auto c = std::make_shared<Pcc::Plsps::Plsp::EventHistory>();
        c->parent = this;
        event_history.push_back(c);
        return c;
    }

    if(child_yang_name == "path")
    {
        auto c = std::make_shared<Pcc::Plsps::Plsp::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    count = 0;
    for (auto const & c : event_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pcc::Plsps::Plsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id-xr")
    {
        plsp_id_xr = value;
        plsp_id_xr.value_namespace = name_space;
        plsp_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sym-path-name")
    {
        sym_path_name = value;
        sym_path_name.value_namespace = name_space;
        sym_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refcnt")
    {
        refcnt = value;
        refcnt.value_namespace = name_space;
        refcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-delegated-to")
    {
        conn_delegated_to = value;
        conn_delegated_to.value_namespace = name_space;
        conn_delegated_to.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "plsp-id-xr")
    {
        plsp_id_xr.yfilter = yfilter;
    }
    if(value_path == "sym-path-name")
    {
        sym_path_name.yfilter = yfilter;
    }
    if(value_path == "refcnt")
    {
        refcnt.yfilter = yfilter;
    }
    if(value_path == "conn-delegated-to")
    {
        conn_delegated_to.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "event-history" || name == "path" || name == "plsp-id" || name == "plsp-id-xr" || name == "sym-path-name" || name == "refcnt" || name == "conn-delegated-to")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Stats::Stats()
    :
    paths_created{YType::uint64, "paths-created"},
    paths_destroyed{YType::uint64, "paths-destroyed"},
    path_create_errors{YType::uint64, "path-create-errors"},
    path_destroy_errors{YType::uint64, "path-destroy-errors"},
    requests_created{YType::uint64, "requests-created"},
    requests_destroyed{YType::uint64, "requests-destroyed"},
    requests_failed{YType::uint64, "requests-failed"}
{

    yang_name = "stats"; yang_parent_name = "plsp"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Stats::~Stats()
{
}

bool Pcc::Plsps::Plsp::Stats::has_data() const
{
    return paths_created.is_set
	|| paths_destroyed.is_set
	|| path_create_errors.is_set
	|| path_destroy_errors.is_set
	|| requests_created.is_set
	|| requests_destroyed.is_set
	|| requests_failed.is_set;
}

bool Pcc::Plsps::Plsp::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths_created.yfilter)
	|| ydk::is_set(paths_destroyed.yfilter)
	|| ydk::is_set(path_create_errors.yfilter)
	|| ydk::is_set(path_destroy_errors.yfilter)
	|| ydk::is_set(requests_created.yfilter)
	|| ydk::is_set(requests_destroyed.yfilter)
	|| ydk::is_set(requests_failed.yfilter);
}

std::string Pcc::Plsps::Plsp::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths_created.is_set || is_set(paths_created.yfilter)) leaf_name_data.push_back(paths_created.get_name_leafdata());
    if (paths_destroyed.is_set || is_set(paths_destroyed.yfilter)) leaf_name_data.push_back(paths_destroyed.get_name_leafdata());
    if (path_create_errors.is_set || is_set(path_create_errors.yfilter)) leaf_name_data.push_back(path_create_errors.get_name_leafdata());
    if (path_destroy_errors.is_set || is_set(path_destroy_errors.yfilter)) leaf_name_data.push_back(path_destroy_errors.get_name_leafdata());
    if (requests_created.is_set || is_set(requests_created.yfilter)) leaf_name_data.push_back(requests_created.get_name_leafdata());
    if (requests_destroyed.is_set || is_set(requests_destroyed.yfilter)) leaf_name_data.push_back(requests_destroyed.get_name_leafdata());
    if (requests_failed.is_set || is_set(requests_failed.yfilter)) leaf_name_data.push_back(requests_failed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Plsps::Plsp::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths-created")
    {
        paths_created = value;
        paths_created.value_namespace = name_space;
        paths_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-destroyed")
    {
        paths_destroyed = value;
        paths_destroyed.value_namespace = name_space;
        paths_destroyed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-create-errors")
    {
        path_create_errors = value;
        path_create_errors.value_namespace = name_space;
        path_create_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-destroy-errors")
    {
        path_destroy_errors = value;
        path_destroy_errors.value_namespace = name_space;
        path_destroy_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-created")
    {
        requests_created = value;
        requests_created.value_namespace = name_space;
        requests_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-destroyed")
    {
        requests_destroyed = value;
        requests_destroyed.value_namespace = name_space;
        requests_destroyed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-failed")
    {
        requests_failed = value;
        requests_failed.value_namespace = name_space;
        requests_failed.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths-created")
    {
        paths_created.yfilter = yfilter;
    }
    if(value_path == "paths-destroyed")
    {
        paths_destroyed.yfilter = yfilter;
    }
    if(value_path == "path-create-errors")
    {
        path_create_errors.yfilter = yfilter;
    }
    if(value_path == "path-destroy-errors")
    {
        path_destroy_errors.yfilter = yfilter;
    }
    if(value_path == "requests-created")
    {
        requests_created.yfilter = yfilter;
    }
    if(value_path == "requests-destroyed")
    {
        requests_destroyed.yfilter = yfilter;
    }
    if(value_path == "requests-failed")
    {
        requests_failed.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths-created" || name == "paths-destroyed" || name == "path-create-errors" || name == "path-destroy-errors" || name == "requests-created" || name == "requests-destroyed" || name == "requests-failed")
        return true;
    return false;
}

Pcc::Plsps::Plsp::EventHistory::EventHistory()
    :
    ts{YType::uint64, "ts"},
    desc{YType::str, "desc"}
{

    yang_name = "event-history"; yang_parent_name = "plsp"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::EventHistory::~EventHistory()
{
}

bool Pcc::Plsps::Plsp::EventHistory::has_data() const
{
    return ts.is_set
	|| desc.is_set;
}

bool Pcc::Plsps::Plsp::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(desc.yfilter);
}

std::string Pcc::Plsps::Plsp::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Plsps::Plsp::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ts" || name == "desc")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::Path()
    :
    used_bw{YType::int64, "used-bw"},
    requested_bw{YType::int64, "requested-bw"},
    metric_value{YType::int64, "metric-value"},
    refcnt{YType::int64, "refcnt"},
    lsp_plsp_id{YType::uint32, "lsp-plsp-id"},
    binding_sid_value{YType::uint32, "binding-sid-value"},
    lsp_id_tlv_ext_tunnel_id{YType::uint32, "lsp-id-tlv-ext-tunnel-id"},
    lsp_id_tlv_tunnel_endpoint_address{YType::uint32, "lsp-id-tlv-tunnel-endpoint-address"},
    lsp_id_tlv_tunnel_sender_address{YType::uint32, "lsp-id-tlv-tunnel-sender-address"},
    srp_id{YType::uint32, "srp-id"},
    lsp_id_tlv_lsp_id{YType::uint16, "lsp-id-tlv-lsp-id"},
    lsp_id_tlv_tunnel_id{YType::uint16, "lsp-id-tlv-tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    binding_sid_type{YType::uint16, "binding-sid-type"},
    lsp_oper{YType::uint8, "lsp-oper"},
    path_setup_type{YType::uint8, "path-setup-type"},
    metric_type{YType::uint8, "metric-type"},
    is_reported{YType::boolean, "is-reported"},
    lsp_a_flag{YType::boolean, "lsp-a-flag"},
    lsp_r_flag{YType::boolean, "lsp-r-flag"},
    lsp_s_flag{YType::boolean, "lsp-s-flag"},
    lsp_d_flag{YType::boolean, "lsp-d-flag"},
    lsp_c_flag{YType::boolean, "lsp-c-flag"}
    	,
    stats(std::make_shared<Pcc::Plsps::Plsp::Path::Stats>())
{
    stats->parent = this;

    yang_name = "path"; yang_parent_name = "plsp"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::~Path()
{
}

bool Pcc::Plsps::Plsp::Path::has_data() const
{
    for (std::size_t index=0; index<ero_hop.size(); index++)
    {
        if(ero_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rro_hop.size(); index++)
    {
        if(rro_hop[index]->has_data())
            return true;
    }
    return used_bw.is_set
	|| requested_bw.is_set
	|| metric_value.is_set
	|| refcnt.is_set
	|| lsp_plsp_id.is_set
	|| binding_sid_value.is_set
	|| lsp_id_tlv_ext_tunnel_id.is_set
	|| lsp_id_tlv_tunnel_endpoint_address.is_set
	|| lsp_id_tlv_tunnel_sender_address.is_set
	|| srp_id.is_set
	|| lsp_id_tlv_lsp_id.is_set
	|| lsp_id_tlv_tunnel_id.is_set
	|| lsp_id.is_set
	|| binding_sid_type.is_set
	|| lsp_oper.is_set
	|| path_setup_type.is_set
	|| metric_type.is_set
	|| is_reported.is_set
	|| lsp_a_flag.is_set
	|| lsp_r_flag.is_set
	|| lsp_s_flag.is_set
	|| lsp_d_flag.is_set
	|| lsp_c_flag.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool Pcc::Plsps::Plsp::Path::has_operation() const
{
    for (std::size_t index=0; index<ero_hop.size(); index++)
    {
        if(ero_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rro_hop.size(); index++)
    {
        if(rro_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(used_bw.yfilter)
	|| ydk::is_set(requested_bw.yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(refcnt.yfilter)
	|| ydk::is_set(lsp_plsp_id.yfilter)
	|| ydk::is_set(binding_sid_value.yfilter)
	|| ydk::is_set(lsp_id_tlv_ext_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id_tlv_tunnel_endpoint_address.yfilter)
	|| ydk::is_set(lsp_id_tlv_tunnel_sender_address.yfilter)
	|| ydk::is_set(srp_id.yfilter)
	|| ydk::is_set(lsp_id_tlv_lsp_id.yfilter)
	|| ydk::is_set(lsp_id_tlv_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(binding_sid_type.yfilter)
	|| ydk::is_set(lsp_oper.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(is_reported.yfilter)
	|| ydk::is_set(lsp_a_flag.yfilter)
	|| ydk::is_set(lsp_r_flag.yfilter)
	|| ydk::is_set(lsp_s_flag.yfilter)
	|| ydk::is_set(lsp_d_flag.yfilter)
	|| ydk::is_set(lsp_c_flag.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Pcc::Plsps::Plsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (used_bw.is_set || is_set(used_bw.yfilter)) leaf_name_data.push_back(used_bw.get_name_leafdata());
    if (requested_bw.is_set || is_set(requested_bw.yfilter)) leaf_name_data.push_back(requested_bw.get_name_leafdata());
    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (refcnt.is_set || is_set(refcnt.yfilter)) leaf_name_data.push_back(refcnt.get_name_leafdata());
    if (lsp_plsp_id.is_set || is_set(lsp_plsp_id.yfilter)) leaf_name_data.push_back(lsp_plsp_id.get_name_leafdata());
    if (binding_sid_value.is_set || is_set(binding_sid_value.yfilter)) leaf_name_data.push_back(binding_sid_value.get_name_leafdata());
    if (lsp_id_tlv_ext_tunnel_id.is_set || is_set(lsp_id_tlv_ext_tunnel_id.yfilter)) leaf_name_data.push_back(lsp_id_tlv_ext_tunnel_id.get_name_leafdata());
    if (lsp_id_tlv_tunnel_endpoint_address.is_set || is_set(lsp_id_tlv_tunnel_endpoint_address.yfilter)) leaf_name_data.push_back(lsp_id_tlv_tunnel_endpoint_address.get_name_leafdata());
    if (lsp_id_tlv_tunnel_sender_address.is_set || is_set(lsp_id_tlv_tunnel_sender_address.yfilter)) leaf_name_data.push_back(lsp_id_tlv_tunnel_sender_address.get_name_leafdata());
    if (srp_id.is_set || is_set(srp_id.yfilter)) leaf_name_data.push_back(srp_id.get_name_leafdata());
    if (lsp_id_tlv_lsp_id.is_set || is_set(lsp_id_tlv_lsp_id.yfilter)) leaf_name_data.push_back(lsp_id_tlv_lsp_id.get_name_leafdata());
    if (lsp_id_tlv_tunnel_id.is_set || is_set(lsp_id_tlv_tunnel_id.yfilter)) leaf_name_data.push_back(lsp_id_tlv_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (binding_sid_type.is_set || is_set(binding_sid_type.yfilter)) leaf_name_data.push_back(binding_sid_type.get_name_leafdata());
    if (lsp_oper.is_set || is_set(lsp_oper.yfilter)) leaf_name_data.push_back(lsp_oper.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (is_reported.is_set || is_set(is_reported.yfilter)) leaf_name_data.push_back(is_reported.get_name_leafdata());
    if (lsp_a_flag.is_set || is_set(lsp_a_flag.yfilter)) leaf_name_data.push_back(lsp_a_flag.get_name_leafdata());
    if (lsp_r_flag.is_set || is_set(lsp_r_flag.yfilter)) leaf_name_data.push_back(lsp_r_flag.get_name_leafdata());
    if (lsp_s_flag.is_set || is_set(lsp_s_flag.yfilter)) leaf_name_data.push_back(lsp_s_flag.get_name_leafdata());
    if (lsp_d_flag.is_set || is_set(lsp_d_flag.yfilter)) leaf_name_data.push_back(lsp_d_flag.get_name_leafdata());
    if (lsp_c_flag.is_set || is_set(lsp_c_flag.yfilter)) leaf_name_data.push_back(lsp_c_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Pcc::Plsps::Plsp::Path::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "ero-hop")
    {
        auto c = std::make_shared<Pcc::Plsps::Plsp::Path::EroHop>();
        c->parent = this;
        ero_hop.push_back(c);
        return c;
    }

    if(child_yang_name == "rro-hop")
    {
        auto c = std::make_shared<Pcc::Plsps::Plsp::Path::RroHop>();
        c->parent = this;
        rro_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    count = 0;
    for (auto const & c : ero_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : rro_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pcc::Plsps::Plsp::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "used-bw")
    {
        used_bw = value;
        used_bw.value_namespace = name_space;
        used_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bw")
    {
        requested_bw = value;
        requested_bw.value_namespace = name_space;
        requested_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refcnt")
    {
        refcnt = value;
        refcnt.value_namespace = name_space;
        refcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-plsp-id")
    {
        lsp_plsp_id = value;
        lsp_plsp_id.value_namespace = name_space;
        lsp_plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid-value")
    {
        binding_sid_value = value;
        binding_sid_value.value_namespace = name_space;
        binding_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id-tlv-ext-tunnel-id")
    {
        lsp_id_tlv_ext_tunnel_id = value;
        lsp_id_tlv_ext_tunnel_id.value_namespace = name_space;
        lsp_id_tlv_ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id-tlv-tunnel-endpoint-address")
    {
        lsp_id_tlv_tunnel_endpoint_address = value;
        lsp_id_tlv_tunnel_endpoint_address.value_namespace = name_space;
        lsp_id_tlv_tunnel_endpoint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id-tlv-tunnel-sender-address")
    {
        lsp_id_tlv_tunnel_sender_address = value;
        lsp_id_tlv_tunnel_sender_address.value_namespace = name_space;
        lsp_id_tlv_tunnel_sender_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-id")
    {
        srp_id = value;
        srp_id.value_namespace = name_space;
        srp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id-tlv-lsp-id")
    {
        lsp_id_tlv_lsp_id = value;
        lsp_id_tlv_lsp_id.value_namespace = name_space;
        lsp_id_tlv_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id-tlv-tunnel-id")
    {
        lsp_id_tlv_tunnel_id = value;
        lsp_id_tlv_tunnel_id.value_namespace = name_space;
        lsp_id_tlv_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid-type")
    {
        binding_sid_type = value;
        binding_sid_type.value_namespace = name_space;
        binding_sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-oper")
    {
        lsp_oper = value;
        lsp_oper.value_namespace = name_space;
        lsp_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reported")
    {
        is_reported = value;
        is_reported.value_namespace = name_space;
        is_reported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-a-flag")
    {
        lsp_a_flag = value;
        lsp_a_flag.value_namespace = name_space;
        lsp_a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-r-flag")
    {
        lsp_r_flag = value;
        lsp_r_flag.value_namespace = name_space;
        lsp_r_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-s-flag")
    {
        lsp_s_flag = value;
        lsp_s_flag.value_namespace = name_space;
        lsp_s_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-d-flag")
    {
        lsp_d_flag = value;
        lsp_d_flag.value_namespace = name_space;
        lsp_d_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-c-flag")
    {
        lsp_c_flag = value;
        lsp_c_flag.value_namespace = name_space;
        lsp_c_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "used-bw")
    {
        used_bw.yfilter = yfilter;
    }
    if(value_path == "requested-bw")
    {
        requested_bw.yfilter = yfilter;
    }
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "refcnt")
    {
        refcnt.yfilter = yfilter;
    }
    if(value_path == "lsp-plsp-id")
    {
        lsp_plsp_id.yfilter = yfilter;
    }
    if(value_path == "binding-sid-value")
    {
        binding_sid_value.yfilter = yfilter;
    }
    if(value_path == "lsp-id-tlv-ext-tunnel-id")
    {
        lsp_id_tlv_ext_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id-tlv-tunnel-endpoint-address")
    {
        lsp_id_tlv_tunnel_endpoint_address.yfilter = yfilter;
    }
    if(value_path == "lsp-id-tlv-tunnel-sender-address")
    {
        lsp_id_tlv_tunnel_sender_address.yfilter = yfilter;
    }
    if(value_path == "srp-id")
    {
        srp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id-tlv-lsp-id")
    {
        lsp_id_tlv_lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id-tlv-tunnel-id")
    {
        lsp_id_tlv_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "binding-sid-type")
    {
        binding_sid_type.yfilter = yfilter;
    }
    if(value_path == "lsp-oper")
    {
        lsp_oper.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "is-reported")
    {
        is_reported.yfilter = yfilter;
    }
    if(value_path == "lsp-a-flag")
    {
        lsp_a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-r-flag")
    {
        lsp_r_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-s-flag")
    {
        lsp_s_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-d-flag")
    {
        lsp_d_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-c-flag")
    {
        lsp_c_flag.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "ero-hop" || name == "rro-hop" || name == "used-bw" || name == "requested-bw" || name == "metric-value" || name == "refcnt" || name == "lsp-plsp-id" || name == "binding-sid-value" || name == "lsp-id-tlv-ext-tunnel-id" || name == "lsp-id-tlv-tunnel-endpoint-address" || name == "lsp-id-tlv-tunnel-sender-address" || name == "srp-id" || name == "lsp-id-tlv-lsp-id" || name == "lsp-id-tlv-tunnel-id" || name == "lsp-id" || name == "binding-sid-type" || name == "lsp-oper" || name == "path-setup-type" || name == "metric-type" || name == "is-reported" || name == "lsp-a-flag" || name == "lsp-r-flag" || name == "lsp-s-flag" || name == "lsp-d-flag" || name == "lsp-c-flag")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::Stats::Stats()
    :
    reports_requested{YType::uint64, "reports-requested"},
    reports_sent{YType::uint64, "reports-sent"},
    reports_failed_to_send{YType::uint64, "reports-failed-to-send"}
{

    yang_name = "stats"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::Stats::~Stats()
{
}

bool Pcc::Plsps::Plsp::Path::Stats::has_data() const
{
    return reports_requested.is_set
	|| reports_sent.is_set
	|| reports_failed_to_send.is_set;
}

bool Pcc::Plsps::Plsp::Path::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reports_requested.yfilter)
	|| ydk::is_set(reports_sent.yfilter)
	|| ydk::is_set(reports_failed_to_send.yfilter);
}

std::string Pcc::Plsps::Plsp::Path::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reports_requested.is_set || is_set(reports_requested.yfilter)) leaf_name_data.push_back(reports_requested.get_name_leafdata());
    if (reports_sent.is_set || is_set(reports_sent.yfilter)) leaf_name_data.push_back(reports_sent.get_name_leafdata());
    if (reports_failed_to_send.is_set || is_set(reports_failed_to_send.yfilter)) leaf_name_data.push_back(reports_failed_to_send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Plsps::Plsp::Path::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reports-requested")
    {
        reports_requested = value;
        reports_requested.value_namespace = name_space;
        reports_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-sent")
    {
        reports_sent = value;
        reports_sent.value_namespace = name_space;
        reports_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-failed-to-send")
    {
        reports_failed_to_send = value;
        reports_failed_to_send.value_namespace = name_space;
        reports_failed_to_send.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reports-requested")
    {
        reports_requested.yfilter = yfilter;
    }
    if(value_path == "reports-sent")
    {
        reports_sent.yfilter = yfilter;
    }
    if(value_path == "reports-failed-to-send")
    {
        reports_failed_to_send.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reports-requested" || name == "reports-sent" || name == "reports-failed-to-send")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::EroHop::EroHop()
    :
    loose{YType::boolean, "loose"}
    	,
    data(std::make_shared<Pcc::Plsps::Plsp::Path::EroHop::Data>())
{
    data->parent = this;

    yang_name = "ero-hop"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::EroHop::~EroHop()
{
}

bool Pcc::Plsps::Plsp::Path::EroHop::has_data() const
{
    return loose.is_set
	|| (data !=  nullptr && data->has_data());
}

bool Pcc::Plsps::Plsp::Path::EroHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Pcc::Plsps::Plsp::Path::EroHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::EroHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::EroHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Pcc::Plsps::Plsp::Path::EroHop::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::EroHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Pcc::Plsps::Plsp::Path::EroHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::EroHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::EroHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "loose")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::EroHop::Data::Data()
    :
    hop_type{YType::uint8, "hop-type"}
    	,
    ipv4(std::make_shared<Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4>())
	,sr_v4(std::make_shared<Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4>())
{
    ipv4->parent = this;
    sr_v4->parent = this;

    yang_name = "data"; yang_parent_name = "ero-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::EroHop::Data::~Data()
{
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::has_data() const
{
    return hop_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (sr_v4 !=  nullptr && sr_v4->has_data());
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (sr_v4 !=  nullptr && sr_v4->has_operation());
}

std::string Pcc::Plsps::Plsp::Path::EroHop::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::EroHop::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::EroHop::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "sr-v4")
    {
        if(sr_v4 == nullptr)
        {
            sr_v4 = std::make_shared<Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4>();
        }
        return sr_v4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::EroHop::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(sr_v4 != nullptr)
    {
        children["sr-v4"] = sr_v4;
    }

    return children;
}

void Pcc::Plsps::Plsp::Path::EroHop::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::EroHop::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "sr-v4" || name == "hop-type")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::Ipv4()
    :
    v4_addr{YType::uint32, "v4-addr"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv4"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::~Ipv4()
{
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::has_data() const
{
    return v4_addr.is_set
	|| prefix_len.is_set;
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v4_addr.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v4_addr.is_set || is_set(v4_addr.yfilter)) leaf_name_data.push_back(v4_addr.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v4-addr")
    {
        v4_addr = value;
        v4_addr.value_namespace = name_space;
        v4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v4-addr")
    {
        v4_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v4-addr" || name == "prefix-len")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::SrV4()
    :
    type{YType::uint8, "type"},
    cflag{YType::boolean, "cflag"},
    sid{YType::uint32, "sid"},
    remote_addr{YType::uint32, "remote-addr"},
    local_addr{YType::uint32, "local-addr"}
{

    yang_name = "sr-v4"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::~SrV4()
{
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::has_data() const
{
    return type.is_set
	|| cflag.is_set
	|| sid.is_set
	|| remote_addr.is_set
	|| local_addr.is_set;
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cflag.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(local_addr.yfilter);
}

std::string Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cflag.is_set || is_set(cflag.yfilter)) leaf_name_data.push_back(cflag.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cflag")
    {
        cflag = value;
        cflag.value_namespace = name_space;
        cflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cflag")
    {
        cflag.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "cflag" || name == "sid" || name == "remote-addr" || name == "local-addr")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::RroHop::RroHop()
    :
    loose{YType::boolean, "loose"}
    	,
    data(std::make_shared<Pcc::Plsps::Plsp::Path::RroHop::Data>())
{
    data->parent = this;

    yang_name = "rro-hop"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::RroHop::~RroHop()
{
}

bool Pcc::Plsps::Plsp::Path::RroHop::has_data() const
{
    return loose.is_set
	|| (data !=  nullptr && data->has_data());
}

bool Pcc::Plsps::Plsp::Path::RroHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Pcc::Plsps::Plsp::Path::RroHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::RroHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::RroHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Pcc::Plsps::Plsp::Path::RroHop::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::RroHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Pcc::Plsps::Plsp::Path::RroHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::RroHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::RroHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "loose")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::RroHop::Data::Data()
    :
    hop_type{YType::uint8, "hop-type"}
    	,
    ipv4(std::make_shared<Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4>())
	,sr_v4(std::make_shared<Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4>())
{
    ipv4->parent = this;
    sr_v4->parent = this;

    yang_name = "data"; yang_parent_name = "rro-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::RroHop::Data::~Data()
{
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::has_data() const
{
    return hop_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (sr_v4 !=  nullptr && sr_v4->has_data());
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (sr_v4 !=  nullptr && sr_v4->has_operation());
}

std::string Pcc::Plsps::Plsp::Path::RroHop::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::RroHop::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::RroHop::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "sr-v4")
    {
        if(sr_v4 == nullptr)
        {
            sr_v4 = std::make_shared<Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4>();
        }
        return sr_v4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::RroHop::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(sr_v4 != nullptr)
    {
        children["sr-v4"] = sr_v4;
    }

    return children;
}

void Pcc::Plsps::Plsp::Path::RroHop::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::RroHop::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "sr-v4" || name == "hop-type")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::Ipv4()
    :
    v4_addr{YType::uint32, "v4-addr"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv4"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::~Ipv4()
{
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::has_data() const
{
    return v4_addr.is_set
	|| prefix_len.is_set;
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v4_addr.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v4_addr.is_set || is_set(v4_addr.yfilter)) leaf_name_data.push_back(v4_addr.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v4-addr")
    {
        v4_addr = value;
        v4_addr.value_namespace = name_space;
        v4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v4-addr")
    {
        v4_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v4-addr" || name == "prefix-len")
        return true;
    return false;
}

Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::SrV4()
    :
    type{YType::uint8, "type"},
    cflag{YType::boolean, "cflag"},
    sid{YType::uint32, "sid"},
    remote_addr{YType::uint32, "remote-addr"},
    local_addr{YType::uint32, "local-addr"}
{

    yang_name = "sr-v4"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::~SrV4()
{
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::has_data() const
{
    return type.is_set
	|| cflag.is_set
	|| sid.is_set
	|| remote_addr.is_set
	|| local_addr.is_set;
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cflag.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(local_addr.yfilter);
}

std::string Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cflag.is_set || is_set(cflag.yfilter)) leaf_name_data.push_back(cflag.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cflag")
    {
        cflag = value;
        cflag.value_namespace = name_space;
        cflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cflag")
    {
        cflag.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
}

bool Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "cflag" || name == "sid" || name == "remote-addr" || name == "local-addr")
        return true;
    return false;
}

Pcc::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false;
}

Pcc::Peers::~Peers()
{
}

bool Pcc::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Pcc::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pcc::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Pcc::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto c = std::make_shared<Pcc::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pcc::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pcc::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pcc::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Pcc::Peers::Peer::Peer()
    :
    peer_addr{YType::str, "peer-addr"},
    handle{YType::uint32, "handle"},
    state_str{YType::str, "state-str"},
    local_ok{YType::boolean, "local-ok"},
    remote_ok{YType::boolean, "remote-ok"},
    open_retry{YType::uint32, "open-retry"},
    ref_cnt{YType::uint32, "ref-cnt"},
    rx_state_str{YType::str, "rx-state-str"},
    holddown_counter{YType::uint16, "holddown-counter"},
    pcep_up_ts{YType::uint64, "pcep-up-ts"},
    precedence{YType::uint8, "precedence"},
    ka_interval_local{YType::uint32, "ka-interval-local"},
    ka_interval_remote{YType::uint32, "ka-interval-remote"},
    dead_interval_local{YType::uint32, "dead-interval-local"},
    dead_interval_remote{YType::uint32, "dead-interval-remote"},
    pcep_session_id_local{YType::uint32, "pcep-session-id-local"},
    pcep_session_id_remote{YType::uint32, "pcep-session-id-remote"},
    pcep_server_ipv4_addr{YType::str, "pcep-server-ipv4-addr"},
    pcep_client_ipv4_addr{YType::str, "pcep-client-ipv4-addr"},
    is_stateful_local{YType::boolean, "is-stateful-local"},
    is_stateful_remote{YType::boolean, "is-stateful-remote"},
    is_stateful_u_flag_local{YType::boolean, "is-stateful-u-flag-local"},
    is_stateful_u_flag_remote{YType::boolean, "is-stateful-u-flag-remote"},
    is_segment_routing_local{YType::boolean, "is-segment-routing-local"},
    is_segment_routing_remote{YType::boolean, "is-segment-routing-remote"},
    is_best_pce{YType::boolean, "is-best-pce"},
    sr_msd_local{YType::uint8, "sr-msd-local"},
    sr_msd_remote{YType::uint8, "sr-msd-remote"}
    	,
    socket_info(std::make_shared<Pcc::Peers::Peer::SocketInfo>())
	,stats(std::make_shared<Pcc::Peers::Peer::Stats>())
{
    socket_info->parent = this;
    stats->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

Pcc::Peers::Peer::~Peer()
{
}

bool Pcc::Peers::Peer::has_data() const
{
    return peer_addr.is_set
	|| handle.is_set
	|| state_str.is_set
	|| local_ok.is_set
	|| remote_ok.is_set
	|| open_retry.is_set
	|| ref_cnt.is_set
	|| rx_state_str.is_set
	|| holddown_counter.is_set
	|| pcep_up_ts.is_set
	|| precedence.is_set
	|| ka_interval_local.is_set
	|| ka_interval_remote.is_set
	|| dead_interval_local.is_set
	|| dead_interval_remote.is_set
	|| pcep_session_id_local.is_set
	|| pcep_session_id_remote.is_set
	|| pcep_server_ipv4_addr.is_set
	|| pcep_client_ipv4_addr.is_set
	|| is_stateful_local.is_set
	|| is_stateful_remote.is_set
	|| is_stateful_u_flag_local.is_set
	|| is_stateful_u_flag_remote.is_set
	|| is_segment_routing_local.is_set
	|| is_segment_routing_remote.is_set
	|| is_best_pce.is_set
	|| sr_msd_local.is_set
	|| sr_msd_remote.is_set
	|| (socket_info !=  nullptr && socket_info->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool Pcc::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_addr.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(state_str.yfilter)
	|| ydk::is_set(local_ok.yfilter)
	|| ydk::is_set(remote_ok.yfilter)
	|| ydk::is_set(open_retry.yfilter)
	|| ydk::is_set(ref_cnt.yfilter)
	|| ydk::is_set(rx_state_str.yfilter)
	|| ydk::is_set(holddown_counter.yfilter)
	|| ydk::is_set(pcep_up_ts.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(ka_interval_local.yfilter)
	|| ydk::is_set(ka_interval_remote.yfilter)
	|| ydk::is_set(dead_interval_local.yfilter)
	|| ydk::is_set(dead_interval_remote.yfilter)
	|| ydk::is_set(pcep_session_id_local.yfilter)
	|| ydk::is_set(pcep_session_id_remote.yfilter)
	|| ydk::is_set(pcep_server_ipv4_addr.yfilter)
	|| ydk::is_set(pcep_client_ipv4_addr.yfilter)
	|| ydk::is_set(is_stateful_local.yfilter)
	|| ydk::is_set(is_stateful_remote.yfilter)
	|| ydk::is_set(is_stateful_u_flag_local.yfilter)
	|| ydk::is_set(is_stateful_u_flag_remote.yfilter)
	|| ydk::is_set(is_segment_routing_local.yfilter)
	|| ydk::is_set(is_segment_routing_remote.yfilter)
	|| ydk::is_set(is_best_pce.yfilter)
	|| ydk::is_set(sr_msd_local.yfilter)
	|| ydk::is_set(sr_msd_remote.yfilter)
	|| (socket_info !=  nullptr && socket_info->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Pcc::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:pcc/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string Pcc::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-addr='" <<peer_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_addr.is_set || is_set(peer_addr.yfilter)) leaf_name_data.push_back(peer_addr.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (state_str.is_set || is_set(state_str.yfilter)) leaf_name_data.push_back(state_str.get_name_leafdata());
    if (local_ok.is_set || is_set(local_ok.yfilter)) leaf_name_data.push_back(local_ok.get_name_leafdata());
    if (remote_ok.is_set || is_set(remote_ok.yfilter)) leaf_name_data.push_back(remote_ok.get_name_leafdata());
    if (open_retry.is_set || is_set(open_retry.yfilter)) leaf_name_data.push_back(open_retry.get_name_leafdata());
    if (ref_cnt.is_set || is_set(ref_cnt.yfilter)) leaf_name_data.push_back(ref_cnt.get_name_leafdata());
    if (rx_state_str.is_set || is_set(rx_state_str.yfilter)) leaf_name_data.push_back(rx_state_str.get_name_leafdata());
    if (holddown_counter.is_set || is_set(holddown_counter.yfilter)) leaf_name_data.push_back(holddown_counter.get_name_leafdata());
    if (pcep_up_ts.is_set || is_set(pcep_up_ts.yfilter)) leaf_name_data.push_back(pcep_up_ts.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (ka_interval_local.is_set || is_set(ka_interval_local.yfilter)) leaf_name_data.push_back(ka_interval_local.get_name_leafdata());
    if (ka_interval_remote.is_set || is_set(ka_interval_remote.yfilter)) leaf_name_data.push_back(ka_interval_remote.get_name_leafdata());
    if (dead_interval_local.is_set || is_set(dead_interval_local.yfilter)) leaf_name_data.push_back(dead_interval_local.get_name_leafdata());
    if (dead_interval_remote.is_set || is_set(dead_interval_remote.yfilter)) leaf_name_data.push_back(dead_interval_remote.get_name_leafdata());
    if (pcep_session_id_local.is_set || is_set(pcep_session_id_local.yfilter)) leaf_name_data.push_back(pcep_session_id_local.get_name_leafdata());
    if (pcep_session_id_remote.is_set || is_set(pcep_session_id_remote.yfilter)) leaf_name_data.push_back(pcep_session_id_remote.get_name_leafdata());
    if (pcep_server_ipv4_addr.is_set || is_set(pcep_server_ipv4_addr.yfilter)) leaf_name_data.push_back(pcep_server_ipv4_addr.get_name_leafdata());
    if (pcep_client_ipv4_addr.is_set || is_set(pcep_client_ipv4_addr.yfilter)) leaf_name_data.push_back(pcep_client_ipv4_addr.get_name_leafdata());
    if (is_stateful_local.is_set || is_set(is_stateful_local.yfilter)) leaf_name_data.push_back(is_stateful_local.get_name_leafdata());
    if (is_stateful_remote.is_set || is_set(is_stateful_remote.yfilter)) leaf_name_data.push_back(is_stateful_remote.get_name_leafdata());
    if (is_stateful_u_flag_local.is_set || is_set(is_stateful_u_flag_local.yfilter)) leaf_name_data.push_back(is_stateful_u_flag_local.get_name_leafdata());
    if (is_stateful_u_flag_remote.is_set || is_set(is_stateful_u_flag_remote.yfilter)) leaf_name_data.push_back(is_stateful_u_flag_remote.get_name_leafdata());
    if (is_segment_routing_local.is_set || is_set(is_segment_routing_local.yfilter)) leaf_name_data.push_back(is_segment_routing_local.get_name_leafdata());
    if (is_segment_routing_remote.is_set || is_set(is_segment_routing_remote.yfilter)) leaf_name_data.push_back(is_segment_routing_remote.get_name_leafdata());
    if (is_best_pce.is_set || is_set(is_best_pce.yfilter)) leaf_name_data.push_back(is_best_pce.get_name_leafdata());
    if (sr_msd_local.is_set || is_set(sr_msd_local.yfilter)) leaf_name_data.push_back(sr_msd_local.get_name_leafdata());
    if (sr_msd_remote.is_set || is_set(sr_msd_remote.yfilter)) leaf_name_data.push_back(sr_msd_remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "socket-info")
    {
        if(socket_info == nullptr)
        {
            socket_info = std::make_shared<Pcc::Peers::Peer::SocketInfo>();
        }
        return socket_info;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Pcc::Peers::Peer::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(socket_info != nullptr)
    {
        children["socket-info"] = socket_info;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void Pcc::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-addr")
    {
        peer_addr = value;
        peer_addr.value_namespace = name_space;
        peer_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-str")
    {
        state_str = value;
        state_str.value_namespace = name_space;
        state_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ok")
    {
        local_ok = value;
        local_ok.value_namespace = name_space;
        local_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ok")
    {
        remote_ok = value;
        remote_ok.value_namespace = name_space;
        remote_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-retry")
    {
        open_retry = value;
        open_retry.value_namespace = name_space;
        open_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt")
    {
        ref_cnt = value;
        ref_cnt.value_namespace = name_space;
        ref_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-state-str")
    {
        rx_state_str = value;
        rx_state_str.value_namespace = name_space;
        rx_state_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown-counter")
    {
        holddown_counter = value;
        holddown_counter.value_namespace = name_space;
        holddown_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-ts")
    {
        pcep_up_ts = value;
        pcep_up_ts.value_namespace = name_space;
        pcep_up_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ka-interval-local")
    {
        ka_interval_local = value;
        ka_interval_local.value_namespace = name_space;
        ka_interval_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ka-interval-remote")
    {
        ka_interval_remote = value;
        ka_interval_remote.value_namespace = name_space;
        ka_interval_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval-local")
    {
        dead_interval_local = value;
        dead_interval_local.value_namespace = name_space;
        dead_interval_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval-remote")
    {
        dead_interval_remote = value;
        dead_interval_remote.value_namespace = name_space;
        dead_interval_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-session-id-local")
    {
        pcep_session_id_local = value;
        pcep_session_id_local.value_namespace = name_space;
        pcep_session_id_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-session-id-remote")
    {
        pcep_session_id_remote = value;
        pcep_session_id_remote.value_namespace = name_space;
        pcep_session_id_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-server-ipv4-addr")
    {
        pcep_server_ipv4_addr = value;
        pcep_server_ipv4_addr.value_namespace = name_space;
        pcep_server_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-client-ipv4-addr")
    {
        pcep_client_ipv4_addr = value;
        pcep_client_ipv4_addr.value_namespace = name_space;
        pcep_client_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stateful-local")
    {
        is_stateful_local = value;
        is_stateful_local.value_namespace = name_space;
        is_stateful_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stateful-remote")
    {
        is_stateful_remote = value;
        is_stateful_remote.value_namespace = name_space;
        is_stateful_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stateful-u-flag-local")
    {
        is_stateful_u_flag_local = value;
        is_stateful_u_flag_local.value_namespace = name_space;
        is_stateful_u_flag_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stateful-u-flag-remote")
    {
        is_stateful_u_flag_remote = value;
        is_stateful_u_flag_remote.value_namespace = name_space;
        is_stateful_u_flag_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-local")
    {
        is_segment_routing_local = value;
        is_segment_routing_local.value_namespace = name_space;
        is_segment_routing_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-remote")
    {
        is_segment_routing_remote = value;
        is_segment_routing_remote.value_namespace = name_space;
        is_segment_routing_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-best-pce")
    {
        is_best_pce = value;
        is_best_pce.value_namespace = name_space;
        is_best_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-msd-local")
    {
        sr_msd_local = value;
        sr_msd_local.value_namespace = name_space;
        sr_msd_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-msd-remote")
    {
        sr_msd_remote = value;
        sr_msd_remote.value_namespace = name_space;
        sr_msd_remote.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-addr")
    {
        peer_addr.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "state-str")
    {
        state_str.yfilter = yfilter;
    }
    if(value_path == "local-ok")
    {
        local_ok.yfilter = yfilter;
    }
    if(value_path == "remote-ok")
    {
        remote_ok.yfilter = yfilter;
    }
    if(value_path == "open-retry")
    {
        open_retry.yfilter = yfilter;
    }
    if(value_path == "ref-cnt")
    {
        ref_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-state-str")
    {
        rx_state_str.yfilter = yfilter;
    }
    if(value_path == "holddown-counter")
    {
        holddown_counter.yfilter = yfilter;
    }
    if(value_path == "pcep-up-ts")
    {
        pcep_up_ts.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "ka-interval-local")
    {
        ka_interval_local.yfilter = yfilter;
    }
    if(value_path == "ka-interval-remote")
    {
        ka_interval_remote.yfilter = yfilter;
    }
    if(value_path == "dead-interval-local")
    {
        dead_interval_local.yfilter = yfilter;
    }
    if(value_path == "dead-interval-remote")
    {
        dead_interval_remote.yfilter = yfilter;
    }
    if(value_path == "pcep-session-id-local")
    {
        pcep_session_id_local.yfilter = yfilter;
    }
    if(value_path == "pcep-session-id-remote")
    {
        pcep_session_id_remote.yfilter = yfilter;
    }
    if(value_path == "pcep-server-ipv4-addr")
    {
        pcep_server_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "pcep-client-ipv4-addr")
    {
        pcep_client_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "is-stateful-local")
    {
        is_stateful_local.yfilter = yfilter;
    }
    if(value_path == "is-stateful-remote")
    {
        is_stateful_remote.yfilter = yfilter;
    }
    if(value_path == "is-stateful-u-flag-local")
    {
        is_stateful_u_flag_local.yfilter = yfilter;
    }
    if(value_path == "is-stateful-u-flag-remote")
    {
        is_stateful_u_flag_remote.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-local")
    {
        is_segment_routing_local.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-remote")
    {
        is_segment_routing_remote.yfilter = yfilter;
    }
    if(value_path == "is-best-pce")
    {
        is_best_pce.yfilter = yfilter;
    }
    if(value_path == "sr-msd-local")
    {
        sr_msd_local.yfilter = yfilter;
    }
    if(value_path == "sr-msd-remote")
    {
        sr_msd_remote.yfilter = yfilter;
    }
}

bool Pcc::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-info" || name == "stats" || name == "peer-addr" || name == "handle" || name == "state-str" || name == "local-ok" || name == "remote-ok" || name == "open-retry" || name == "ref-cnt" || name == "rx-state-str" || name == "holddown-counter" || name == "pcep-up-ts" || name == "precedence" || name == "ka-interval-local" || name == "ka-interval-remote" || name == "dead-interval-local" || name == "dead-interval-remote" || name == "pcep-session-id-local" || name == "pcep-session-id-remote" || name == "pcep-server-ipv4-addr" || name == "pcep-client-ipv4-addr" || name == "is-stateful-local" || name == "is-stateful-remote" || name == "is-stateful-u-flag-local" || name == "is-stateful-u-flag-remote" || name == "is-segment-routing-local" || name == "is-segment-routing-remote" || name == "is-best-pce" || name == "sr-msd-local" || name == "sr-msd-remote")
        return true;
    return false;
}

Pcc::Peers::Peer::SocketInfo::SocketInfo()
    :
    fd{YType::int64, "fd"},
    wnotify{YType::boolean, "wnotify"},
    rnotify{YType::boolean, "rnotify"},
    refcnt{YType::uint32, "refcnt"},
    selected{YType::boolean, "selected"},
    owner{YType::uint32, "owner"},
    csockaddr_str{YType::str, "csockaddr-str"},
    ssockaddr_str{YType::str, "ssockaddr-str"}
{

    yang_name = "socket-info"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Peers::Peer::SocketInfo::~SocketInfo()
{
}

bool Pcc::Peers::Peer::SocketInfo::has_data() const
{
    return fd.is_set
	|| wnotify.is_set
	|| rnotify.is_set
	|| refcnt.is_set
	|| selected.is_set
	|| owner.is_set
	|| csockaddr_str.is_set
	|| ssockaddr_str.is_set;
}

bool Pcc::Peers::Peer::SocketInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fd.yfilter)
	|| ydk::is_set(wnotify.yfilter)
	|| ydk::is_set(rnotify.yfilter)
	|| ydk::is_set(refcnt.yfilter)
	|| ydk::is_set(selected.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(csockaddr_str.yfilter)
	|| ydk::is_set(ssockaddr_str.yfilter);
}

std::string Pcc::Peers::Peer::SocketInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "socket-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Peers::Peer::SocketInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fd.is_set || is_set(fd.yfilter)) leaf_name_data.push_back(fd.get_name_leafdata());
    if (wnotify.is_set || is_set(wnotify.yfilter)) leaf_name_data.push_back(wnotify.get_name_leafdata());
    if (rnotify.is_set || is_set(rnotify.yfilter)) leaf_name_data.push_back(rnotify.get_name_leafdata());
    if (refcnt.is_set || is_set(refcnt.yfilter)) leaf_name_data.push_back(refcnt.get_name_leafdata());
    if (selected.is_set || is_set(selected.yfilter)) leaf_name_data.push_back(selected.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (csockaddr_str.is_set || is_set(csockaddr_str.yfilter)) leaf_name_data.push_back(csockaddr_str.get_name_leafdata());
    if (ssockaddr_str.is_set || is_set(ssockaddr_str.yfilter)) leaf_name_data.push_back(ssockaddr_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Peers::Peer::SocketInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Peers::Peer::SocketInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Peers::Peer::SocketInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fd")
    {
        fd = value;
        fd.value_namespace = name_space;
        fd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wnotify")
    {
        wnotify = value;
        wnotify.value_namespace = name_space;
        wnotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnotify")
    {
        rnotify = value;
        rnotify.value_namespace = name_space;
        rnotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refcnt")
    {
        refcnt = value;
        refcnt.value_namespace = name_space;
        refcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected")
    {
        selected = value;
        selected.value_namespace = name_space;
        selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csockaddr-str")
    {
        csockaddr_str = value;
        csockaddr_str.value_namespace = name_space;
        csockaddr_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssockaddr-str")
    {
        ssockaddr_str = value;
        ssockaddr_str.value_namespace = name_space;
        ssockaddr_str.value_namespace_prefix = name_space_prefix;
    }
}

void Pcc::Peers::Peer::SocketInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fd")
    {
        fd.yfilter = yfilter;
    }
    if(value_path == "wnotify")
    {
        wnotify.yfilter = yfilter;
    }
    if(value_path == "rnotify")
    {
        rnotify.yfilter = yfilter;
    }
    if(value_path == "refcnt")
    {
        refcnt.yfilter = yfilter;
    }
    if(value_path == "selected")
    {
        selected.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "csockaddr-str")
    {
        csockaddr_str.yfilter = yfilter;
    }
    if(value_path == "ssockaddr-str")
    {
        ssockaddr_str.yfilter = yfilter;
    }
}

bool Pcc::Peers::Peer::SocketInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fd" || name == "wnotify" || name == "rnotify" || name == "refcnt" || name == "selected" || name == "owner" || name == "csockaddr-str" || name == "ssockaddr-str")
        return true;
    return false;
}

Pcc::Peers::Peer::Stats::Stats()
    :
    ka_msg_rx{YType::uint64, "ka-msg-rx"},
    ka_msg_fail_rx{YType::uint64, "ka-msg-fail-rx"},
    ka_msg_tx{YType::uint64, "ka-msg-tx"},
    ka_msg_fail_tx{YType::uint64, "ka-msg-fail-tx"},
    pcreq_msg_rx{YType::uint64, "pcreq-msg-rx"},
    pcreq_msg_fail_rx{YType::uint64, "pcreq-msg-fail-rx"},
    pcreq_msg_tx{YType::uint64, "pcreq-msg-tx"},
    pcreq_msg_fail_tx{YType::uint64, "pcreq-msg-fail-tx"},
    pcrep_msg_rx{YType::uint64, "pcrep-msg-rx"},
    pcrep_msg_fail_rx{YType::uint64, "pcrep-msg-fail-rx"},
    pcrep_msg_tx{YType::uint64, "pcrep-msg-tx"},
    pcrep_msg_fail_tx{YType::uint64, "pcrep-msg-fail-tx"},
    pcrpt_msg_rx{YType::uint64, "pcrpt-msg-rx"},
    pcrpt_msg_fail_rx{YType::uint64, "pcrpt-msg-fail-rx"},
    pcrpt_msg_tx{YType::uint64, "pcrpt-msg-tx"},
    pcrpt_msg_fail_tx{YType::uint64, "pcrpt-msg-fail-tx"},
    pcupd_msg_rx{YType::uint64, "pcupd-msg-rx"},
    pcupd_msg_fail_rx{YType::uint64, "pcupd-msg-fail-rx"},
    pcupd_msg_tx{YType::uint64, "pcupd-msg-tx"},
    pcupd_msg_fail_tx{YType::uint64, "pcupd-msg-fail-tx"},
    open_msg_rx{YType::uint64, "open-msg-rx"},
    open_msg_fail_rx{YType::uint64, "open-msg-fail-rx"},
    open_msg_tx{YType::uint64, "open-msg-tx"},
    open_msg_fail_tx{YType::uint64, "open-msg-fail-tx"},
    pcerr_msg_rx{YType::uint64, "pcerr-msg-rx"},
    pcerr_msg_fail_rx{YType::uint64, "pcerr-msg-fail-rx"},
    pcerr_msg_tx{YType::uint64, "pcerr-msg-tx"},
    pcerr_msg_fail_tx{YType::uint64, "pcerr-msg-fail-tx"},
    pcntf_msg_rx{YType::uint64, "pcntf-msg-rx"},
    pcntf_msg_fail_rx{YType::uint64, "pcntf-msg-fail-rx"},
    pcntf_msg_tx{YType::uint64, "pcntf-msg-tx"},
    pcntf_msg_fail_tx{YType::uint64, "pcntf-msg-fail-tx"},
    pce_eos_msg_tx{YType::uint64, "pce-eos-msg-tx"},
    pce_eos_msg_fail_tx{YType::uint64, "pce-eos-msg-fail-tx"},
    close_msg_rx{YType::uint64, "close-msg-rx"},
    close_msg_fail_rx{YType::uint64, "close-msg-fail-rx"},
    close_msg_tx{YType::uint64, "close-msg-tx"},
    close_msg_fail_tx{YType::uint64, "close-msg-fail-tx"},
    unexpected_msg_rx{YType::uint64, "unexpected-msg-rx"},
    corrupted_msg_rx{YType::uint64, "corrupted-msg-rx"},
    reply_time_index{YType::uint32, "reply-time-index"},
    minimum_reply_time{YType::uint64, "minimum-reply-time"},
    maximum_reply_time{YType::uint64, "maximum-reply-time"},
    requests_timed_out{YType::uint64, "requests-timed-out"},
    last_pcerr_type_rx{YType::uint8, "last-pcerr-type-rx"},
    last_pcerr_val_rx{YType::uint8, "last-pcerr-val-rx"},
    last_pcerr_rx_ts{YType::uint64, "last-pcerr-rx-ts"},
    last_pcerr_type_tx{YType::uint8, "last-pcerr-type-tx"},
    last_pcerr_val_tx{YType::uint8, "last-pcerr-val-tx"},
    last_pcerr_tx_ts{YType::uint64, "last-pcerr-tx-ts"},
    pcinitiate_msg_rx{YType::uint64, "pcinitiate-msg-rx"},
    pcinitiate_msg_fail_rx{YType::uint64, "pcinitiate-msg-fail-rx"},
    recorded_reply_time{YType::uint64, "recorded-reply-time"}
{

    yang_name = "stats"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Pcc::Peers::Peer::Stats::~Stats()
{
}

bool Pcc::Peers::Peer::Stats::has_data() const
{
    for (auto const & leaf : recorded_reply_time.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return ka_msg_rx.is_set
	|| ka_msg_fail_rx.is_set
	|| ka_msg_tx.is_set
	|| ka_msg_fail_tx.is_set
	|| pcreq_msg_rx.is_set
	|| pcreq_msg_fail_rx.is_set
	|| pcreq_msg_tx.is_set
	|| pcreq_msg_fail_tx.is_set
	|| pcrep_msg_rx.is_set
	|| pcrep_msg_fail_rx.is_set
	|| pcrep_msg_tx.is_set
	|| pcrep_msg_fail_tx.is_set
	|| pcrpt_msg_rx.is_set
	|| pcrpt_msg_fail_rx.is_set
	|| pcrpt_msg_tx.is_set
	|| pcrpt_msg_fail_tx.is_set
	|| pcupd_msg_rx.is_set
	|| pcupd_msg_fail_rx.is_set
	|| pcupd_msg_tx.is_set
	|| pcupd_msg_fail_tx.is_set
	|| open_msg_rx.is_set
	|| open_msg_fail_rx.is_set
	|| open_msg_tx.is_set
	|| open_msg_fail_tx.is_set
	|| pcerr_msg_rx.is_set
	|| pcerr_msg_fail_rx.is_set
	|| pcerr_msg_tx.is_set
	|| pcerr_msg_fail_tx.is_set
	|| pcntf_msg_rx.is_set
	|| pcntf_msg_fail_rx.is_set
	|| pcntf_msg_tx.is_set
	|| pcntf_msg_fail_tx.is_set
	|| pce_eos_msg_tx.is_set
	|| pce_eos_msg_fail_tx.is_set
	|| close_msg_rx.is_set
	|| close_msg_fail_rx.is_set
	|| close_msg_tx.is_set
	|| close_msg_fail_tx.is_set
	|| unexpected_msg_rx.is_set
	|| corrupted_msg_rx.is_set
	|| reply_time_index.is_set
	|| minimum_reply_time.is_set
	|| maximum_reply_time.is_set
	|| requests_timed_out.is_set
	|| last_pcerr_type_rx.is_set
	|| last_pcerr_val_rx.is_set
	|| last_pcerr_rx_ts.is_set
	|| last_pcerr_type_tx.is_set
	|| last_pcerr_val_tx.is_set
	|| last_pcerr_tx_ts.is_set
	|| pcinitiate_msg_rx.is_set
	|| pcinitiate_msg_fail_rx.is_set;
}

bool Pcc::Peers::Peer::Stats::has_operation() const
{
    for (auto const & leaf : recorded_reply_time.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ka_msg_rx.yfilter)
	|| ydk::is_set(ka_msg_fail_rx.yfilter)
	|| ydk::is_set(ka_msg_tx.yfilter)
	|| ydk::is_set(ka_msg_fail_tx.yfilter)
	|| ydk::is_set(pcreq_msg_rx.yfilter)
	|| ydk::is_set(pcreq_msg_fail_rx.yfilter)
	|| ydk::is_set(pcreq_msg_tx.yfilter)
	|| ydk::is_set(pcreq_msg_fail_tx.yfilter)
	|| ydk::is_set(pcrep_msg_rx.yfilter)
	|| ydk::is_set(pcrep_msg_fail_rx.yfilter)
	|| ydk::is_set(pcrep_msg_tx.yfilter)
	|| ydk::is_set(pcrep_msg_fail_tx.yfilter)
	|| ydk::is_set(pcrpt_msg_rx.yfilter)
	|| ydk::is_set(pcrpt_msg_fail_rx.yfilter)
	|| ydk::is_set(pcrpt_msg_tx.yfilter)
	|| ydk::is_set(pcrpt_msg_fail_tx.yfilter)
	|| ydk::is_set(pcupd_msg_rx.yfilter)
	|| ydk::is_set(pcupd_msg_fail_rx.yfilter)
	|| ydk::is_set(pcupd_msg_tx.yfilter)
	|| ydk::is_set(pcupd_msg_fail_tx.yfilter)
	|| ydk::is_set(open_msg_rx.yfilter)
	|| ydk::is_set(open_msg_fail_rx.yfilter)
	|| ydk::is_set(open_msg_tx.yfilter)
	|| ydk::is_set(open_msg_fail_tx.yfilter)
	|| ydk::is_set(pcerr_msg_rx.yfilter)
	|| ydk::is_set(pcerr_msg_fail_rx.yfilter)
	|| ydk::is_set(pcerr_msg_tx.yfilter)
	|| ydk::is_set(pcerr_msg_fail_tx.yfilter)
	|| ydk::is_set(pcntf_msg_rx.yfilter)
	|| ydk::is_set(pcntf_msg_fail_rx.yfilter)
	|| ydk::is_set(pcntf_msg_tx.yfilter)
	|| ydk::is_set(pcntf_msg_fail_tx.yfilter)
	|| ydk::is_set(pce_eos_msg_tx.yfilter)
	|| ydk::is_set(pce_eos_msg_fail_tx.yfilter)
	|| ydk::is_set(close_msg_rx.yfilter)
	|| ydk::is_set(close_msg_fail_rx.yfilter)
	|| ydk::is_set(close_msg_tx.yfilter)
	|| ydk::is_set(close_msg_fail_tx.yfilter)
	|| ydk::is_set(unexpected_msg_rx.yfilter)
	|| ydk::is_set(corrupted_msg_rx.yfilter)
	|| ydk::is_set(reply_time_index.yfilter)
	|| ydk::is_set(minimum_reply_time.yfilter)
	|| ydk::is_set(maximum_reply_time.yfilter)
	|| ydk::is_set(requests_timed_out.yfilter)
	|| ydk::is_set(last_pcerr_type_rx.yfilter)
	|| ydk::is_set(last_pcerr_val_rx.yfilter)
	|| ydk::is_set(last_pcerr_rx_ts.yfilter)
	|| ydk::is_set(last_pcerr_type_tx.yfilter)
	|| ydk::is_set(last_pcerr_val_tx.yfilter)
	|| ydk::is_set(last_pcerr_tx_ts.yfilter)
	|| ydk::is_set(pcinitiate_msg_rx.yfilter)
	|| ydk::is_set(pcinitiate_msg_fail_rx.yfilter)
	|| ydk::is_set(recorded_reply_time.yfilter);
}

std::string Pcc::Peers::Peer::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pcc::Peers::Peer::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ka_msg_rx.is_set || is_set(ka_msg_rx.yfilter)) leaf_name_data.push_back(ka_msg_rx.get_name_leafdata());
    if (ka_msg_fail_rx.is_set || is_set(ka_msg_fail_rx.yfilter)) leaf_name_data.push_back(ka_msg_fail_rx.get_name_leafdata());
    if (ka_msg_tx.is_set || is_set(ka_msg_tx.yfilter)) leaf_name_data.push_back(ka_msg_tx.get_name_leafdata());
    if (ka_msg_fail_tx.is_set || is_set(ka_msg_fail_tx.yfilter)) leaf_name_data.push_back(ka_msg_fail_tx.get_name_leafdata());
    if (pcreq_msg_rx.is_set || is_set(pcreq_msg_rx.yfilter)) leaf_name_data.push_back(pcreq_msg_rx.get_name_leafdata());
    if (pcreq_msg_fail_rx.is_set || is_set(pcreq_msg_fail_rx.yfilter)) leaf_name_data.push_back(pcreq_msg_fail_rx.get_name_leafdata());
    if (pcreq_msg_tx.is_set || is_set(pcreq_msg_tx.yfilter)) leaf_name_data.push_back(pcreq_msg_tx.get_name_leafdata());
    if (pcreq_msg_fail_tx.is_set || is_set(pcreq_msg_fail_tx.yfilter)) leaf_name_data.push_back(pcreq_msg_fail_tx.get_name_leafdata());
    if (pcrep_msg_rx.is_set || is_set(pcrep_msg_rx.yfilter)) leaf_name_data.push_back(pcrep_msg_rx.get_name_leafdata());
    if (pcrep_msg_fail_rx.is_set || is_set(pcrep_msg_fail_rx.yfilter)) leaf_name_data.push_back(pcrep_msg_fail_rx.get_name_leafdata());
    if (pcrep_msg_tx.is_set || is_set(pcrep_msg_tx.yfilter)) leaf_name_data.push_back(pcrep_msg_tx.get_name_leafdata());
    if (pcrep_msg_fail_tx.is_set || is_set(pcrep_msg_fail_tx.yfilter)) leaf_name_data.push_back(pcrep_msg_fail_tx.get_name_leafdata());
    if (pcrpt_msg_rx.is_set || is_set(pcrpt_msg_rx.yfilter)) leaf_name_data.push_back(pcrpt_msg_rx.get_name_leafdata());
    if (pcrpt_msg_fail_rx.is_set || is_set(pcrpt_msg_fail_rx.yfilter)) leaf_name_data.push_back(pcrpt_msg_fail_rx.get_name_leafdata());
    if (pcrpt_msg_tx.is_set || is_set(pcrpt_msg_tx.yfilter)) leaf_name_data.push_back(pcrpt_msg_tx.get_name_leafdata());
    if (pcrpt_msg_fail_tx.is_set || is_set(pcrpt_msg_fail_tx.yfilter)) leaf_name_data.push_back(pcrpt_msg_fail_tx.get_name_leafdata());
    if (pcupd_msg_rx.is_set || is_set(pcupd_msg_rx.yfilter)) leaf_name_data.push_back(pcupd_msg_rx.get_name_leafdata());
    if (pcupd_msg_fail_rx.is_set || is_set(pcupd_msg_fail_rx.yfilter)) leaf_name_data.push_back(pcupd_msg_fail_rx.get_name_leafdata());
    if (pcupd_msg_tx.is_set || is_set(pcupd_msg_tx.yfilter)) leaf_name_data.push_back(pcupd_msg_tx.get_name_leafdata());
    if (pcupd_msg_fail_tx.is_set || is_set(pcupd_msg_fail_tx.yfilter)) leaf_name_data.push_back(pcupd_msg_fail_tx.get_name_leafdata());
    if (open_msg_rx.is_set || is_set(open_msg_rx.yfilter)) leaf_name_data.push_back(open_msg_rx.get_name_leafdata());
    if (open_msg_fail_rx.is_set || is_set(open_msg_fail_rx.yfilter)) leaf_name_data.push_back(open_msg_fail_rx.get_name_leafdata());
    if (open_msg_tx.is_set || is_set(open_msg_tx.yfilter)) leaf_name_data.push_back(open_msg_tx.get_name_leafdata());
    if (open_msg_fail_tx.is_set || is_set(open_msg_fail_tx.yfilter)) leaf_name_data.push_back(open_msg_fail_tx.get_name_leafdata());
    if (pcerr_msg_rx.is_set || is_set(pcerr_msg_rx.yfilter)) leaf_name_data.push_back(pcerr_msg_rx.get_name_leafdata());
    if (pcerr_msg_fail_rx.is_set || is_set(pcerr_msg_fail_rx.yfilter)) leaf_name_data.push_back(pcerr_msg_fail_rx.get_name_leafdata());
    if (pcerr_msg_tx.is_set || is_set(pcerr_msg_tx.yfilter)) leaf_name_data.push_back(pcerr_msg_tx.get_name_leafdata());
    if (pcerr_msg_fail_tx.is_set || is_set(pcerr_msg_fail_tx.yfilter)) leaf_name_data.push_back(pcerr_msg_fail_tx.get_name_leafdata());
    if (pcntf_msg_rx.is_set || is_set(pcntf_msg_rx.yfilter)) leaf_name_data.push_back(pcntf_msg_rx.get_name_leafdata());
    if (pcntf_msg_fail_rx.is_set || is_set(pcntf_msg_fail_rx.yfilter)) leaf_name_data.push_back(pcntf_msg_fail_rx.get_name_leafdata());
    if (pcntf_msg_tx.is_set || is_set(pcntf_msg_tx.yfilter)) leaf_name_data.push_back(pcntf_msg_tx.get_name_leafdata());
    if (pcntf_msg_fail_tx.is_set || is_set(pcntf_msg_fail_tx.yfilter)) leaf_name_data.push_back(pcntf_msg_fail_tx.get_name_leafdata());
    if (pce_eos_msg_tx.is_set || is_set(pce_eos_msg_tx.yfilter)) leaf_name_data.push_back(pce_eos_msg_tx.get_name_leafdata());
    if (pce_eos_msg_fail_tx.is_set || is_set(pce_eos_msg_fail_tx.yfilter)) leaf_name_data.push_back(pce_eos_msg_fail_tx.get_name_leafdata());
    if (close_msg_rx.is_set || is_set(close_msg_rx.yfilter)) leaf_name_data.push_back(close_msg_rx.get_name_leafdata());
    if (close_msg_fail_rx.is_set || is_set(close_msg_fail_rx.yfilter)) leaf_name_data.push_back(close_msg_fail_rx.get_name_leafdata());
    if (close_msg_tx.is_set || is_set(close_msg_tx.yfilter)) leaf_name_data.push_back(close_msg_tx.get_name_leafdata());
    if (close_msg_fail_tx.is_set || is_set(close_msg_fail_tx.yfilter)) leaf_name_data.push_back(close_msg_fail_tx.get_name_leafdata());
    if (unexpected_msg_rx.is_set || is_set(unexpected_msg_rx.yfilter)) leaf_name_data.push_back(unexpected_msg_rx.get_name_leafdata());
    if (corrupted_msg_rx.is_set || is_set(corrupted_msg_rx.yfilter)) leaf_name_data.push_back(corrupted_msg_rx.get_name_leafdata());
    if (reply_time_index.is_set || is_set(reply_time_index.yfilter)) leaf_name_data.push_back(reply_time_index.get_name_leafdata());
    if (minimum_reply_time.is_set || is_set(minimum_reply_time.yfilter)) leaf_name_data.push_back(minimum_reply_time.get_name_leafdata());
    if (maximum_reply_time.is_set || is_set(maximum_reply_time.yfilter)) leaf_name_data.push_back(maximum_reply_time.get_name_leafdata());
    if (requests_timed_out.is_set || is_set(requests_timed_out.yfilter)) leaf_name_data.push_back(requests_timed_out.get_name_leafdata());
    if (last_pcerr_type_rx.is_set || is_set(last_pcerr_type_rx.yfilter)) leaf_name_data.push_back(last_pcerr_type_rx.get_name_leafdata());
    if (last_pcerr_val_rx.is_set || is_set(last_pcerr_val_rx.yfilter)) leaf_name_data.push_back(last_pcerr_val_rx.get_name_leafdata());
    if (last_pcerr_rx_ts.is_set || is_set(last_pcerr_rx_ts.yfilter)) leaf_name_data.push_back(last_pcerr_rx_ts.get_name_leafdata());
    if (last_pcerr_type_tx.is_set || is_set(last_pcerr_type_tx.yfilter)) leaf_name_data.push_back(last_pcerr_type_tx.get_name_leafdata());
    if (last_pcerr_val_tx.is_set || is_set(last_pcerr_val_tx.yfilter)) leaf_name_data.push_back(last_pcerr_val_tx.get_name_leafdata());
    if (last_pcerr_tx_ts.is_set || is_set(last_pcerr_tx_ts.yfilter)) leaf_name_data.push_back(last_pcerr_tx_ts.get_name_leafdata());
    if (pcinitiate_msg_rx.is_set || is_set(pcinitiate_msg_rx.yfilter)) leaf_name_data.push_back(pcinitiate_msg_rx.get_name_leafdata());
    if (pcinitiate_msg_fail_rx.is_set || is_set(pcinitiate_msg_fail_rx.yfilter)) leaf_name_data.push_back(pcinitiate_msg_fail_rx.get_name_leafdata());

    auto recorded_reply_time_name_datas = recorded_reply_time.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), recorded_reply_time_name_datas.begin(), recorded_reply_time_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Pcc::Peers::Peer::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pcc::Peers::Peer::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pcc::Peers::Peer::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ka-msg-rx")
    {
        ka_msg_rx = value;
        ka_msg_rx.value_namespace = name_space;
        ka_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ka-msg-fail-rx")
    {
        ka_msg_fail_rx = value;
        ka_msg_fail_rx.value_namespace = name_space;
        ka_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ka-msg-tx")
    {
        ka_msg_tx = value;
        ka_msg_tx.value_namespace = name_space;
        ka_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ka-msg-fail-tx")
    {
        ka_msg_fail_tx = value;
        ka_msg_fail_tx.value_namespace = name_space;
        ka_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcreq-msg-rx")
    {
        pcreq_msg_rx = value;
        pcreq_msg_rx.value_namespace = name_space;
        pcreq_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcreq-msg-fail-rx")
    {
        pcreq_msg_fail_rx = value;
        pcreq_msg_fail_rx.value_namespace = name_space;
        pcreq_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcreq-msg-tx")
    {
        pcreq_msg_tx = value;
        pcreq_msg_tx.value_namespace = name_space;
        pcreq_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcreq-msg-fail-tx")
    {
        pcreq_msg_fail_tx = value;
        pcreq_msg_fail_tx.value_namespace = name_space;
        pcreq_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcrep-msg-rx")
    {
        pcrep_msg_rx = value;
        pcrep_msg_rx.value_namespace = name_space;
        pcrep_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcrep-msg-fail-rx")
    {
        pcrep_msg_fail_rx = value;
        pcrep_msg_fail_rx.value_namespace = name_space;
        pcrep_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcrep-msg-tx")
    {
        pcrep_msg_tx = value;
        pcrep_msg_tx.value_namespace = name_space;
        pcrep_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcrep-msg-fail-tx")
    {
        pcrep_msg_fail_tx = value;
        pcrep_msg_fail_tx.value_namespace = name_space;
        pcrep_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcrpt-msg-rx")
    {
        pcrpt_msg_rx = value;
        pcrpt_msg_rx.value_namespace = name_space;
        pcrpt_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcrpt-msg-fail-rx")
    {
        pcrpt_msg_fail_rx = value;
        pcrpt_msg_fail_rx.value_namespace = name_space;
        pcrpt_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcrpt-msg-tx")
    {
        pcrpt_msg_tx = value;
        pcrpt_msg_tx.value_namespace = name_space;
        pcrpt_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcrpt-msg-fail-tx")
    {
        pcrpt_msg_fail_tx = value;
        pcrpt_msg_fail_tx.value_namespace = name_space;
        pcrpt_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcupd-msg-rx")
    {
        pcupd_msg_rx = value;
        pcupd_msg_rx.value_namespace = name_space;
        pcupd_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcupd-msg-fail-rx")
    {
        pcupd_msg_fail_rx = value;
        pcupd_msg_fail_rx.value_namespace = name_space;
        pcupd_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcupd-msg-tx")
    {
        pcupd_msg_tx = value;
        pcupd_msg_tx.value_namespace = name_space;
        pcupd_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcupd-msg-fail-tx")
    {
        pcupd_msg_fail_tx = value;
        pcupd_msg_fail_tx.value_namespace = name_space;
        pcupd_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-msg-rx")
    {
        open_msg_rx = value;
        open_msg_rx.value_namespace = name_space;
        open_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-msg-fail-rx")
    {
        open_msg_fail_rx = value;
        open_msg_fail_rx.value_namespace = name_space;
        open_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-msg-tx")
    {
        open_msg_tx = value;
        open_msg_tx.value_namespace = name_space;
        open_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-msg-fail-tx")
    {
        open_msg_fail_tx = value;
        open_msg_fail_tx.value_namespace = name_space;
        open_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcerr-msg-rx")
    {
        pcerr_msg_rx = value;
        pcerr_msg_rx.value_namespace = name_space;
        pcerr_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcerr-msg-fail-rx")
    {
        pcerr_msg_fail_rx = value;
        pcerr_msg_fail_rx.value_namespace = name_space;
        pcerr_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcerr-msg-tx")
    {
        pcerr_msg_tx = value;
        pcerr_msg_tx.value_namespace = name_space;
        pcerr_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcerr-msg-fail-tx")
    {
        pcerr_msg_fail_tx = value;
        pcerr_msg_fail_tx.value_namespace = name_space;
        pcerr_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcntf-msg-rx")
    {
        pcntf_msg_rx = value;
        pcntf_msg_rx.value_namespace = name_space;
        pcntf_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcntf-msg-fail-rx")
    {
        pcntf_msg_fail_rx = value;
        pcntf_msg_fail_rx.value_namespace = name_space;
        pcntf_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcntf-msg-tx")
    {
        pcntf_msg_tx = value;
        pcntf_msg_tx.value_namespace = name_space;
        pcntf_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcntf-msg-fail-tx")
    {
        pcntf_msg_fail_tx = value;
        pcntf_msg_fail_tx.value_namespace = name_space;
        pcntf_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-eos-msg-tx")
    {
        pce_eos_msg_tx = value;
        pce_eos_msg_tx.value_namespace = name_space;
        pce_eos_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-eos-msg-fail-tx")
    {
        pce_eos_msg_fail_tx = value;
        pce_eos_msg_fail_tx.value_namespace = name_space;
        pce_eos_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-msg-rx")
    {
        close_msg_rx = value;
        close_msg_rx.value_namespace = name_space;
        close_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-msg-fail-rx")
    {
        close_msg_fail_rx = value;
        close_msg_fail_rx.value_namespace = name_space;
        close_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-msg-tx")
    {
        close_msg_tx = value;
        close_msg_tx.value_namespace = name_space;
        close_msg_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-msg-fail-tx")
    {
        close_msg_fail_tx = value;
        close_msg_fail_tx.value_namespace = name_space;
        close_msg_fail_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-msg-rx")
    {
        unexpected_msg_rx = value;
        unexpected_msg_rx.value_namespace = name_space;
        unexpected_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corrupted-msg-rx")
    {
        corrupted_msg_rx = value;
        corrupted_msg_rx.value_namespace = name_space;
        corrupted_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-time-index")
    {
        reply_time_index = value;
        reply_time_index.value_namespace = name_space;
        reply_time_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-reply-time")
    {
        minimum_reply_time = value;
        minimum_reply_time.value_namespace = name_space;
        minimum_reply_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reply-time")
    {
        maximum_reply_time = value;
        maximum_reply_time.value_namespace = name_space;
        maximum_reply_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-timed-out")
    {
        requests_timed_out = value;
        requests_timed_out.value_namespace = name_space;
        requests_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-pcerr-type-rx")
    {
        last_pcerr_type_rx = value;
        last_pcerr_type_rx.value_namespace = name_space;
        last_pcerr_type_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-pcerr-val-rx")
    {
        last_pcerr_val_rx = value;
        last_pcerr_val_rx.value_namespace = name_space;
        last_pcerr_val_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-pcerr-rx-ts")
    {
        last_pcerr_rx_ts = value;
        last_pcerr_rx_ts.value_namespace = name_space;
        last_pcerr_rx_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-pcerr-type-tx")
    {
        last_pcerr_type_tx = value;
        last_pcerr_type_tx.value_namespace = name_space;
        last_pcerr_type_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-pcerr-val-tx")
    {
        last_pcerr_val_tx = value;
        last_pcerr_val_tx.value_namespace = name_space;
        last_pcerr_val_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-pcerr-tx-ts")
    {
        last_pcerr_tx_ts = value;
        last_pcerr_tx_ts.value_namespace = name_space;
        last_pcerr_tx_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcinitiate-msg-rx")
    {
        pcinitiate_msg_rx = value;
        pcinitiate_msg_rx.value_namespace = name_space;
        pcinitiate_msg_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcinitiate-msg-fail-rx")
    {
        pcinitiate_msg_fail_rx = value;
        pcinitiate_msg_fail_rx.value_namespace = name_space;
        pcinitiate_msg_fail_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recorded-reply-time")
    {
        recorded_reply_time.append(value);
    }
}

void Pcc::Peers::Peer::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ka-msg-rx")
    {
        ka_msg_rx.yfilter = yfilter;
    }
    if(value_path == "ka-msg-fail-rx")
    {
        ka_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "ka-msg-tx")
    {
        ka_msg_tx.yfilter = yfilter;
    }
    if(value_path == "ka-msg-fail-tx")
    {
        ka_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "pcreq-msg-rx")
    {
        pcreq_msg_rx.yfilter = yfilter;
    }
    if(value_path == "pcreq-msg-fail-rx")
    {
        pcreq_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "pcreq-msg-tx")
    {
        pcreq_msg_tx.yfilter = yfilter;
    }
    if(value_path == "pcreq-msg-fail-tx")
    {
        pcreq_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "pcrep-msg-rx")
    {
        pcrep_msg_rx.yfilter = yfilter;
    }
    if(value_path == "pcrep-msg-fail-rx")
    {
        pcrep_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "pcrep-msg-tx")
    {
        pcrep_msg_tx.yfilter = yfilter;
    }
    if(value_path == "pcrep-msg-fail-tx")
    {
        pcrep_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "pcrpt-msg-rx")
    {
        pcrpt_msg_rx.yfilter = yfilter;
    }
    if(value_path == "pcrpt-msg-fail-rx")
    {
        pcrpt_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "pcrpt-msg-tx")
    {
        pcrpt_msg_tx.yfilter = yfilter;
    }
    if(value_path == "pcrpt-msg-fail-tx")
    {
        pcrpt_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "pcupd-msg-rx")
    {
        pcupd_msg_rx.yfilter = yfilter;
    }
    if(value_path == "pcupd-msg-fail-rx")
    {
        pcupd_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "pcupd-msg-tx")
    {
        pcupd_msg_tx.yfilter = yfilter;
    }
    if(value_path == "pcupd-msg-fail-tx")
    {
        pcupd_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "open-msg-rx")
    {
        open_msg_rx.yfilter = yfilter;
    }
    if(value_path == "open-msg-fail-rx")
    {
        open_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "open-msg-tx")
    {
        open_msg_tx.yfilter = yfilter;
    }
    if(value_path == "open-msg-fail-tx")
    {
        open_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "pcerr-msg-rx")
    {
        pcerr_msg_rx.yfilter = yfilter;
    }
    if(value_path == "pcerr-msg-fail-rx")
    {
        pcerr_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "pcerr-msg-tx")
    {
        pcerr_msg_tx.yfilter = yfilter;
    }
    if(value_path == "pcerr-msg-fail-tx")
    {
        pcerr_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "pcntf-msg-rx")
    {
        pcntf_msg_rx.yfilter = yfilter;
    }
    if(value_path == "pcntf-msg-fail-rx")
    {
        pcntf_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "pcntf-msg-tx")
    {
        pcntf_msg_tx.yfilter = yfilter;
    }
    if(value_path == "pcntf-msg-fail-tx")
    {
        pcntf_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "pce-eos-msg-tx")
    {
        pce_eos_msg_tx.yfilter = yfilter;
    }
    if(value_path == "pce-eos-msg-fail-tx")
    {
        pce_eos_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "close-msg-rx")
    {
        close_msg_rx.yfilter = yfilter;
    }
    if(value_path == "close-msg-fail-rx")
    {
        close_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "close-msg-tx")
    {
        close_msg_tx.yfilter = yfilter;
    }
    if(value_path == "close-msg-fail-tx")
    {
        close_msg_fail_tx.yfilter = yfilter;
    }
    if(value_path == "unexpected-msg-rx")
    {
        unexpected_msg_rx.yfilter = yfilter;
    }
    if(value_path == "corrupted-msg-rx")
    {
        corrupted_msg_rx.yfilter = yfilter;
    }
    if(value_path == "reply-time-index")
    {
        reply_time_index.yfilter = yfilter;
    }
    if(value_path == "minimum-reply-time")
    {
        minimum_reply_time.yfilter = yfilter;
    }
    if(value_path == "maximum-reply-time")
    {
        maximum_reply_time.yfilter = yfilter;
    }
    if(value_path == "requests-timed-out")
    {
        requests_timed_out.yfilter = yfilter;
    }
    if(value_path == "last-pcerr-type-rx")
    {
        last_pcerr_type_rx.yfilter = yfilter;
    }
    if(value_path == "last-pcerr-val-rx")
    {
        last_pcerr_val_rx.yfilter = yfilter;
    }
    if(value_path == "last-pcerr-rx-ts")
    {
        last_pcerr_rx_ts.yfilter = yfilter;
    }
    if(value_path == "last-pcerr-type-tx")
    {
        last_pcerr_type_tx.yfilter = yfilter;
    }
    if(value_path == "last-pcerr-val-tx")
    {
        last_pcerr_val_tx.yfilter = yfilter;
    }
    if(value_path == "last-pcerr-tx-ts")
    {
        last_pcerr_tx_ts.yfilter = yfilter;
    }
    if(value_path == "pcinitiate-msg-rx")
    {
        pcinitiate_msg_rx.yfilter = yfilter;
    }
    if(value_path == "pcinitiate-msg-fail-rx")
    {
        pcinitiate_msg_fail_rx.yfilter = yfilter;
    }
    if(value_path == "recorded-reply-time")
    {
        recorded_reply_time.yfilter = yfilter;
    }
}

bool Pcc::Peers::Peer::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ka-msg-rx" || name == "ka-msg-fail-rx" || name == "ka-msg-tx" || name == "ka-msg-fail-tx" || name == "pcreq-msg-rx" || name == "pcreq-msg-fail-rx" || name == "pcreq-msg-tx" || name == "pcreq-msg-fail-tx" || name == "pcrep-msg-rx" || name == "pcrep-msg-fail-rx" || name == "pcrep-msg-tx" || name == "pcrep-msg-fail-tx" || name == "pcrpt-msg-rx" || name == "pcrpt-msg-fail-rx" || name == "pcrpt-msg-tx" || name == "pcrpt-msg-fail-tx" || name == "pcupd-msg-rx" || name == "pcupd-msg-fail-rx" || name == "pcupd-msg-tx" || name == "pcupd-msg-fail-tx" || name == "open-msg-rx" || name == "open-msg-fail-rx" || name == "open-msg-tx" || name == "open-msg-fail-tx" || name == "pcerr-msg-rx" || name == "pcerr-msg-fail-rx" || name == "pcerr-msg-tx" || name == "pcerr-msg-fail-tx" || name == "pcntf-msg-rx" || name == "pcntf-msg-fail-rx" || name == "pcntf-msg-tx" || name == "pcntf-msg-fail-tx" || name == "pce-eos-msg-tx" || name == "pce-eos-msg-fail-tx" || name == "close-msg-rx" || name == "close-msg-fail-rx" || name == "close-msg-tx" || name == "close-msg-fail-tx" || name == "unexpected-msg-rx" || name == "corrupted-msg-rx" || name == "reply-time-index" || name == "minimum-reply-time" || name == "maximum-reply-time" || name == "requests-timed-out" || name == "last-pcerr-type-rx" || name == "last-pcerr-val-rx" || name == "last-pcerr-rx-ts" || name == "last-pcerr-type-tx" || name == "last-pcerr-val-tx" || name == "last-pcerr-tx-ts" || name == "pcinitiate-msg-rx" || name == "pcinitiate-msg-fail-rx" || name == "recorded-reply-time")
        return true;
    return false;
}

Xtc::Xtc()
    :
    policies(std::make_shared<Xtc::Policies>())
	,on_demand_colors(std::make_shared<Xtc::OnDemandColors>())
	,forwarding(std::make_shared<Xtc::Forwarding>())
	,topology_summary(std::make_shared<Xtc::TopologySummary>())
	,topology_nodes(std::make_shared<Xtc::TopologyNodes>())
	,prefix_infos(std::make_shared<Xtc::PrefixInfos>())
{
    policies->parent = this;
    on_demand_colors->parent = this;
    forwarding->parent = this;
    topology_summary->parent = this;
    topology_nodes->parent = this;
    prefix_infos->parent = this;

    yang_name = "xtc"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-agent-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Xtc::~Xtc()
{
}

bool Xtc::has_data() const
{
    return (policies !=  nullptr && policies->has_data())
	|| (on_demand_colors !=  nullptr && on_demand_colors->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data())
	|| (topology_summary !=  nullptr && topology_summary->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (prefix_infos !=  nullptr && prefix_infos->has_data());
}

bool Xtc::has_operation() const
{
    return is_set(yfilter)
	|| (policies !=  nullptr && policies->has_operation())
	|| (on_demand_colors !=  nullptr && on_demand_colors->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation())
	|| (topology_summary !=  nullptr && topology_summary->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (prefix_infos !=  nullptr && prefix_infos->has_operation());
}

std::string Xtc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policies")
    {
        if(policies == nullptr)
        {
            policies = std::make_shared<Xtc::Policies>();
        }
        return policies;
    }

    if(child_yang_name == "on-demand-colors")
    {
        if(on_demand_colors == nullptr)
        {
            on_demand_colors = std::make_shared<Xtc::OnDemandColors>();
        }
        return on_demand_colors;
    }

    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Xtc::Forwarding>();
        }
        return forwarding;
    }

    if(child_yang_name == "topology-summary")
    {
        if(topology_summary == nullptr)
        {
            topology_summary = std::make_shared<Xtc::TopologySummary>();
        }
        return topology_summary;
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes == nullptr)
        {
            topology_nodes = std::make_shared<Xtc::TopologyNodes>();
        }
        return topology_nodes;
    }

    if(child_yang_name == "prefix-infos")
    {
        if(prefix_infos == nullptr)
        {
            prefix_infos = std::make_shared<Xtc::PrefixInfos>();
        }
        return prefix_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policies != nullptr)
    {
        children["policies"] = policies;
    }

    if(on_demand_colors != nullptr)
    {
        children["on-demand-colors"] = on_demand_colors;
    }

    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    if(topology_summary != nullptr)
    {
        children["topology-summary"] = topology_summary;
    }

    if(topology_nodes != nullptr)
    {
        children["topology-nodes"] = topology_nodes;
    }

    if(prefix_infos != nullptr)
    {
        children["prefix-infos"] = prefix_infos;
    }

    return children;
}

void Xtc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Xtc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Xtc::clone_ptr() const
{
    return std::make_shared<Xtc>();
}

std::string Xtc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Xtc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Xtc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Xtc::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Xtc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policies" || name == "on-demand-colors" || name == "forwarding" || name == "topology-summary" || name == "topology-nodes" || name == "prefix-infos")
        return true;
    return false;
}

Xtc::Policies::Policies()
{

    yang_name = "policies"; yang_parent_name = "xtc"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::Policies::~Policies()
{
}

bool Xtc::Policies::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Xtc::Policies::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Xtc::Policies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto c = std::make_shared<Xtc::Policies::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::Policies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Xtc::Policies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Xtc::Policies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Xtc::Policies::Policy::Policy()
    :
    id{YType::int32, "id"},
    policy_name{YType::str, "policy-name"},
    administrative_up{YType::uint32, "administrative-up"},
    operational_up{YType::uint32, "operational-up"},
    color{YType::uint32, "color"},
    is_auto_policy{YType::boolean, "is-auto-policy"},
    transition_count{YType::uint32, "transition-count"},
    forward_class{YType::uint32, "forward-class"},
    up_time{YType::uint64, "up-time"},
    up_age{YType::uint64, "up-age"},
    down_time{YType::uint64, "down-time"},
    down_age{YType::uint64, "down-age"},
    lsp_id{YType::uint32, "lsp-id"},
    interface_handle{YType::uint32, "interface-handle"},
    policy_group_identifier{YType::uint16, "policy-group-identifier"},
    local_label_identifier{YType::uint16, "local-label-identifier"},
    local_label{YType::uint32, "local-label"}
    	,
    destination_address(std::make_shared<Xtc::Policies::Policy::DestinationAddress>())
	,binding_sid(std::make_shared<Xtc::Policies::Policy::BindingSid>())
	,auto_policy_info(std::make_shared<Xtc::Policies::Policy::AutoPolicyInfo>())
{
    destination_address->parent = this;
    binding_sid->parent = this;
    auto_policy_info->parent = this;

    yang_name = "policy"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::Policies::Policy::~Policy()
{
}

bool Xtc::Policies::Policy::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return id.is_set
	|| policy_name.is_set
	|| administrative_up.is_set
	|| operational_up.is_set
	|| color.is_set
	|| is_auto_policy.is_set
	|| transition_count.is_set
	|| forward_class.is_set
	|| up_time.is_set
	|| up_age.is_set
	|| down_time.is_set
	|| down_age.is_set
	|| lsp_id.is_set
	|| interface_handle.is_set
	|| policy_group_identifier.is_set
	|| local_label_identifier.is_set
	|| local_label.is_set
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (auto_policy_info !=  nullptr && auto_policy_info->has_data());
}

bool Xtc::Policies::Policy::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(administrative_up.yfilter)
	|| ydk::is_set(operational_up.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(is_auto_policy.yfilter)
	|| ydk::is_set(transition_count.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(up_time.yfilter)
	|| ydk::is_set(up_age.yfilter)
	|| ydk::is_set(down_time.yfilter)
	|| ydk::is_set(down_age.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(policy_group_identifier.yfilter)
	|| ydk::is_set(local_label_identifier.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (auto_policy_info !=  nullptr && auto_policy_info->has_operation());
}

std::string Xtc::Policies::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/policies/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::Policies::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (administrative_up.is_set || is_set(administrative_up.yfilter)) leaf_name_data.push_back(administrative_up.get_name_leafdata());
    if (operational_up.is_set || is_set(operational_up.yfilter)) leaf_name_data.push_back(operational_up.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (is_auto_policy.is_set || is_set(is_auto_policy.yfilter)) leaf_name_data.push_back(is_auto_policy.get_name_leafdata());
    if (transition_count.is_set || is_set(transition_count.yfilter)) leaf_name_data.push_back(transition_count.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());
    if (up_age.is_set || is_set(up_age.yfilter)) leaf_name_data.push_back(up_age.get_name_leafdata());
    if (down_time.is_set || is_set(down_time.yfilter)) leaf_name_data.push_back(down_time.get_name_leafdata());
    if (down_age.is_set || is_set(down_age.yfilter)) leaf_name_data.push_back(down_age.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (policy_group_identifier.is_set || is_set(policy_group_identifier.yfilter)) leaf_name_data.push_back(policy_group_identifier.get_name_leafdata());
    if (local_label_identifier.is_set || is_set(local_label_identifier.yfilter)) leaf_name_data.push_back(local_label_identifier.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Xtc::Policies::Policy::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Xtc::Policies::Policy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "auto-policy-info")
    {
        if(auto_policy_info == nullptr)
        {
            auto_policy_info = std::make_shared<Xtc::Policies::Policy::AutoPolicyInfo>();
        }
        return auto_policy_info;
    }

    if(child_yang_name == "paths")
    {
        auto c = std::make_shared<Xtc::Policies::Policy::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    if(auto_policy_info != nullptr)
    {
        children["auto-policy-info"] = auto_policy_info;
    }

    count = 0;
    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::Policies::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-up")
    {
        administrative_up = value;
        administrative_up.value_namespace = name_space;
        administrative_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-up")
    {
        operational_up = value;
        operational_up.value_namespace = name_space;
        operational_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-policy")
    {
        is_auto_policy = value;
        is_auto_policy.value_namespace = name_space;
        is_auto_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition-count")
    {
        transition_count = value;
        transition_count.value_namespace = name_space;
        transition_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-age")
    {
        up_age = value;
        up_age.value_namespace = name_space;
        up_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-time")
    {
        down_time = value;
        down_time.value_namespace = name_space;
        down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-age")
    {
        down_age = value;
        down_age.value_namespace = name_space;
        down_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-group-identifier")
    {
        policy_group_identifier = value;
        policy_group_identifier.value_namespace = name_space;
        policy_group_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label-identifier")
    {
        local_label_identifier = value;
        local_label_identifier.value_namespace = name_space;
        local_label_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "administrative-up")
    {
        administrative_up.yfilter = yfilter;
    }
    if(value_path == "operational-up")
    {
        operational_up.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "is-auto-policy")
    {
        is_auto_policy.yfilter = yfilter;
    }
    if(value_path == "transition-count")
    {
        transition_count.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
    if(value_path == "up-age")
    {
        up_age.yfilter = yfilter;
    }
    if(value_path == "down-time")
    {
        down_time.yfilter = yfilter;
    }
    if(value_path == "down-age")
    {
        down_age.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "policy-group-identifier")
    {
        policy_group_identifier.yfilter = yfilter;
    }
    if(value_path == "local-label-identifier")
    {
        local_label_identifier.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "binding-sid" || name == "auto-policy-info" || name == "paths" || name == "id" || name == "policy-name" || name == "administrative-up" || name == "operational-up" || name == "color" || name == "is-auto-policy" || name == "transition-count" || name == "forward-class" || name == "up-time" || name == "up-age" || name == "down-time" || name == "down-age" || name == "lsp-id" || name == "interface-handle" || name == "policy-group-identifier" || name == "local-label-identifier" || name == "local-label")
        return true;
    return false;
}

Xtc::Policies::Policy::DestinationAddress::DestinationAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::DestinationAddress::~DestinationAddress()
{
}

bool Xtc::Policies::Policy::DestinationAddress::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Xtc::Policies::Policy::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::Policies::Policy::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Policies::Policy::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Xtc::Policies::Policy::BindingSid::BindingSid()
    :
    bsid_mode{YType::enumeration, "bsid-mode"},
    error{YType::enumeration, "error"},
    state{YType::str, "state"},
    explicit_based{YType::boolean, "explicit-based"},
    policy_selected{YType::boolean, "policy-selected"}
    	,
    value_(std::make_shared<Xtc::Policies::Policy::BindingSid::Value>())
{
    value_->parent = this;

    yang_name = "binding-sid"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::BindingSid::~BindingSid()
{
}

bool Xtc::Policies::Policy::BindingSid::has_data() const
{
    return bsid_mode.is_set
	|| error.is_set
	|| state.is_set
	|| explicit_based.is_set
	|| policy_selected.is_set
	|| (value_ !=  nullptr && value_->has_data());
}

bool Xtc::Policies::Policy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsid_mode.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(explicit_based.yfilter)
	|| ydk::is_set(policy_selected.yfilter)
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Xtc::Policies::Policy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsid_mode.is_set || is_set(bsid_mode.yfilter)) leaf_name_data.push_back(bsid_mode.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (explicit_based.is_set || is_set(explicit_based.yfilter)) leaf_name_data.push_back(explicit_based.get_name_leafdata());
    if (policy_selected.is_set || is_set(policy_selected.yfilter)) leaf_name_data.push_back(policy_selected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Xtc::Policies::Policy::BindingSid::Value>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Xtc::Policies::Policy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsid-mode")
    {
        bsid_mode = value;
        bsid_mode.value_namespace = name_space;
        bsid_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-based")
    {
        explicit_based = value;
        explicit_based.value_namespace = name_space;
        explicit_based.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-selected")
    {
        policy_selected = value;
        policy_selected.value_namespace = name_space;
        policy_selected.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsid-mode")
    {
        bsid_mode.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "explicit-based")
    {
        explicit_based.yfilter = yfilter;
    }
    if(value_path == "policy-selected")
    {
        policy_selected.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "bsid-mode" || name == "error" || name == "state" || name == "explicit-based" || name == "policy-selected")
        return true;
    return false;
}

Xtc::Policies::Policy::BindingSid::Value::Value()
    :
    sid_type{YType::enumeration, "sid-type"},
    label{YType::uint32, "label"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "value"; yang_parent_name = "binding-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::BindingSid::Value::~Value()
{
}

bool Xtc::Policies::Policy::BindingSid::Value::has_data() const
{
    return sid_type.is_set
	|| label.is_set
	|| ipv6.is_set;
}

bool Xtc::Policies::Policy::BindingSid::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::Policies::Policy::BindingSid::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::BindingSid::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::BindingSid::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::BindingSid::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Policies::Policy::BindingSid::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::BindingSid::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::BindingSid::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "label" || name == "ipv6")
        return true;
    return false;
}

Xtc::Policies::Policy::AutoPolicyInfo::AutoPolicyInfo()
    :
    creator_name{YType::str, "creator-name"},
    distinguisher{YType::uint32, "distinguisher"},
    preference{YType::uint32, "preference"},
    ipv6_caps_enabled{YType::boolean, "ipv6-caps-enabled"}
{

    yang_name = "auto-policy-info"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::AutoPolicyInfo::~AutoPolicyInfo()
{
}

bool Xtc::Policies::Policy::AutoPolicyInfo::has_data() const
{
    return creator_name.is_set
	|| distinguisher.is_set
	|| preference.is_set
	|| ipv6_caps_enabled.is_set;
}

bool Xtc::Policies::Policy::AutoPolicyInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creator_name.yfilter)
	|| ydk::is_set(distinguisher.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(ipv6_caps_enabled.yfilter);
}

std::string Xtc::Policies::Policy::AutoPolicyInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-policy-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::AutoPolicyInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creator_name.is_set || is_set(creator_name.yfilter)) leaf_name_data.push_back(creator_name.get_name_leafdata());
    if (distinguisher.is_set || is_set(distinguisher.yfilter)) leaf_name_data.push_back(distinguisher.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (ipv6_caps_enabled.is_set || is_set(ipv6_caps_enabled.yfilter)) leaf_name_data.push_back(ipv6_caps_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::AutoPolicyInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::AutoPolicyInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Policies::Policy::AutoPolicyInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creator-name")
    {
        creator_name = value;
        creator_name.value_namespace = name_space;
        creator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distinguisher")
    {
        distinguisher = value;
        distinguisher.value_namespace = name_space;
        distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-caps-enabled")
    {
        ipv6_caps_enabled = value;
        ipv6_caps_enabled.value_namespace = name_space;
        ipv6_caps_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::AutoPolicyInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creator-name")
    {
        creator_name.yfilter = yfilter;
    }
    if(value_path == "distinguisher")
    {
        distinguisher.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "ipv6-caps-enabled")
    {
        ipv6_caps_enabled.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::AutoPolicyInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creator-name" || name == "distinguisher" || name == "preference" || name == "ipv6-caps-enabled")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::Paths()
    :
    index_{YType::uint32, "index"},
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    active{YType::boolean, "active"},
    weight{YType::uint32, "weight"},
    metric_type{YType::uint8, "metric-type"},
    metric_value{YType::uint32, "metric-value"},
    is_valid{YType::boolean, "is-valid"},
    pce_based_path{YType::boolean, "pce-based-path"},
    pce_address{YType::str, "pce-address"},
    error{YType::str, "error"}
    	,
    sr_path_constraints(std::make_shared<Xtc::Policies::Policy::Paths::SrPathConstraints>())
{
    sr_path_constraints->parent = this;

    yang_name = "paths"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::~Paths()
{
}

bool Xtc::Policies::Policy::Paths::has_data() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return index_.is_set
	|| type.is_set
	|| name.is_set
	|| active.is_set
	|| weight.is_set
	|| metric_type.is_set
	|| metric_value.is_set
	|| is_valid.is_set
	|| pce_based_path.is_set
	|| pce_address.is_set
	|| error.is_set
	|| (sr_path_constraints !=  nullptr && sr_path_constraints->has_data());
}

bool Xtc::Policies::Policy::Paths::has_operation() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(pce_based_path.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (sr_path_constraints !=  nullptr && sr_path_constraints->has_operation());
}

std::string Xtc::Policies::Policy::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (pce_based_path.is_set || is_set(pce_based_path.yfilter)) leaf_name_data.push_back(pce_based_path.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-path-constraints")
    {
        if(sr_path_constraints == nullptr)
        {
            sr_path_constraints = std::make_shared<Xtc::Policies::Policy::Paths::SrPathConstraints>();
        }
        return sr_path_constraints;
    }

    if(child_yang_name == "hops")
    {
        auto c = std::make_shared<Xtc::Policies::Policy::Paths::Hops>();
        c->parent = this;
        hops.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_path_constraints != nullptr)
    {
        children["sr-path-constraints"] = sr_path_constraints;
    }

    count = 0;
    for (auto const & c : hops)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::Policies::Policy::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-based-path")
    {
        pce_based_path = value;
        pce_based_path.value_namespace = name_space;
        pce_based_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "pce-based-path")
    {
        pce_based_path.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-path-constraints" || name == "hops" || name == "index" || name == "type" || name == "name" || name == "active" || name == "weight" || name == "metric-type" || name == "metric-value" || name == "is-valid" || name == "pce-based-path" || name == "pce-address" || name == "error")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::SrPathConstraints::SrPathConstraints()
    :
    path_metrics(std::make_shared<Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics>())
{
    path_metrics->parent = this;

    yang_name = "sr-path-constraints"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::SrPathConstraints::~SrPathConstraints()
{
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::has_data() const
{
    for (std::size_t index=0; index<affinity_constraint.size(); index++)
    {
        if(affinity_constraint[index]->has_data())
            return true;
    }
    return (path_metrics !=  nullptr && path_metrics->has_data());
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::has_operation() const
{
    for (std::size_t index=0; index<affinity_constraint.size(); index++)
    {
        if(affinity_constraint[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (path_metrics !=  nullptr && path_metrics->has_operation());
}

std::string Xtc::Policies::Policy::Paths::SrPathConstraints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-path-constraints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::SrPathConstraints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::SrPathConstraints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-metrics")
    {
        if(path_metrics == nullptr)
        {
            path_metrics = std::make_shared<Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics>();
        }
        return path_metrics;
    }

    if(child_yang_name == "affinity-constraint")
    {
        auto c = std::make_shared<Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint>();
        c->parent = this;
        affinity_constraint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::SrPathConstraints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_metrics != nullptr)
    {
        children["path-metrics"] = path_metrics;
    }

    count = 0;
    for (auto const & c : affinity_constraint)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::Policies::Policy::Paths::SrPathConstraints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Xtc::Policies::Policy::Paths::SrPathConstraints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-metrics" || name == "affinity-constraint")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::PathMetrics()
    :
    margin_relative{YType::uint8, "margin-relative"},
    margin_absolute{YType::uint8, "margin-absolute"},
    maximum_segments{YType::uint16, "maximum-segments"},
    accumulative_te_metric{YType::uint32, "accumulative-te-metric"},
    accumulative_igp_metric{YType::uint32, "accumulative-igp-metric"},
    accumulative_delay{YType::uint32, "accumulative-delay"}
{

    yang_name = "path-metrics"; yang_parent_name = "sr-path-constraints"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::~PathMetrics()
{
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::has_data() const
{
    return margin_relative.is_set
	|| margin_absolute.is_set
	|| maximum_segments.is_set
	|| accumulative_te_metric.is_set
	|| accumulative_igp_metric.is_set
	|| accumulative_delay.is_set;
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(margin_relative.yfilter)
	|| ydk::is_set(margin_absolute.yfilter)
	|| ydk::is_set(maximum_segments.yfilter)
	|| ydk::is_set(accumulative_te_metric.yfilter)
	|| ydk::is_set(accumulative_igp_metric.yfilter)
	|| ydk::is_set(accumulative_delay.yfilter);
}

std::string Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (margin_relative.is_set || is_set(margin_relative.yfilter)) leaf_name_data.push_back(margin_relative.get_name_leafdata());
    if (margin_absolute.is_set || is_set(margin_absolute.yfilter)) leaf_name_data.push_back(margin_absolute.get_name_leafdata());
    if (maximum_segments.is_set || is_set(maximum_segments.yfilter)) leaf_name_data.push_back(maximum_segments.get_name_leafdata());
    if (accumulative_te_metric.is_set || is_set(accumulative_te_metric.yfilter)) leaf_name_data.push_back(accumulative_te_metric.get_name_leafdata());
    if (accumulative_igp_metric.is_set || is_set(accumulative_igp_metric.yfilter)) leaf_name_data.push_back(accumulative_igp_metric.get_name_leafdata());
    if (accumulative_delay.is_set || is_set(accumulative_delay.yfilter)) leaf_name_data.push_back(accumulative_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "margin-relative")
    {
        margin_relative = value;
        margin_relative.value_namespace = name_space;
        margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "margin-absolute")
    {
        margin_absolute = value;
        margin_absolute.value_namespace = name_space;
        margin_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-segments")
    {
        maximum_segments = value;
        maximum_segments.value_namespace = name_space;
        maximum_segments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accumulative-te-metric")
    {
        accumulative_te_metric = value;
        accumulative_te_metric.value_namespace = name_space;
        accumulative_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accumulative-igp-metric")
    {
        accumulative_igp_metric = value;
        accumulative_igp_metric.value_namespace = name_space;
        accumulative_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accumulative-delay")
    {
        accumulative_delay = value;
        accumulative_delay.value_namespace = name_space;
        accumulative_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "margin-relative")
    {
        margin_relative.yfilter = yfilter;
    }
    if(value_path == "margin-absolute")
    {
        margin_absolute.yfilter = yfilter;
    }
    if(value_path == "maximum-segments")
    {
        maximum_segments.yfilter = yfilter;
    }
    if(value_path == "accumulative-te-metric")
    {
        accumulative_te_metric.yfilter = yfilter;
    }
    if(value_path == "accumulative-igp-metric")
    {
        accumulative_igp_metric.yfilter = yfilter;
    }
    if(value_path == "accumulative-delay")
    {
        accumulative_delay.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::PathMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "margin-relative" || name == "margin-absolute" || name == "maximum-segments" || name == "accumulative-te-metric" || name == "accumulative-igp-metric" || name == "accumulative-delay")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::AffinityConstraint()
    :
    type{YType::uint8, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "affinity-constraint"; yang_parent_name = "sr-path-constraints"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::~AffinityConstraint()
{
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::has_data() const
{
    for (std::size_t index=0; index<color.size(); index++)
    {
        if(color[index]->has_data())
            return true;
    }
    return type.is_set
	|| value_.is_set;
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::has_operation() const
{
    for (std::size_t index=0; index<color.size(); index++)
    {
        if(color[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-constraint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color")
    {
        auto c = std::make_shared<Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color>();
        c->parent = this;
        color.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : color)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color" || name == "type" || name == "value")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::Color()
    :
    color{YType::str, "color"}
{

    yang_name = "color"; yang_parent_name = "affinity-constraint"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::~Color()
{
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::has_data() const
{
    return color.is_set;
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color.yfilter);
}

std::string Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::Paths::SrPathConstraints::AffinityConstraint::Color::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::Hops::Hops()
    :
    sid_type{YType::enumeration, "sid-type"}
    	,
    sid(std::make_shared<Xtc::Policies::Policy::Paths::Hops::Sid>())
	,local_address(std::make_shared<Xtc::Policies::Policy::Paths::Hops::LocalAddress>())
	,remote_address(std::make_shared<Xtc::Policies::Policy::Paths::Hops::RemoteAddress>())
{
    sid->parent = this;
    local_address->parent = this;
    remote_address->parent = this;

    yang_name = "hops"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::Hops::~Hops()
{
}

bool Xtc::Policies::Policy::Paths::Hops::has_data() const
{
    return sid_type.is_set
	|| (sid !=  nullptr && sid->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (remote_address !=  nullptr && remote_address->has_data());
}

bool Xtc::Policies::Policy::Paths::Hops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| (sid !=  nullptr && sid->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (remote_address !=  nullptr && remote_address->has_operation());
}

std::string Xtc::Policies::Policy::Paths::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid")
    {
        if(sid == nullptr)
        {
            sid = std::make_shared<Xtc::Policies::Policy::Paths::Hops::Sid>();
        }
        return sid;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Xtc::Policies::Policy::Paths::Hops::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "remote-address")
    {
        if(remote_address == nullptr)
        {
            remote_address = std::make_shared<Xtc::Policies::Policy::Paths::Hops::RemoteAddress>();
        }
        return remote_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sid != nullptr)
    {
        children["sid"] = sid;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(remote_address != nullptr)
    {
        children["remote-address"] = remote_address;
    }

    return children;
}

void Xtc::Policies::Policy::Paths::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::Paths::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::Paths::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid" || name == "local-address" || name == "remote-address" || name == "sid-type")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::Hops::Sid::Sid()
    :
    sid_type{YType::enumeration, "sid-type"},
    label{YType::uint32, "label"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::Hops::Sid::~Sid()
{
}

bool Xtc::Policies::Policy::Paths::Hops::Sid::has_data() const
{
    return sid_type.is_set
	|| label.is_set
	|| ipv6.is_set;
}

bool Xtc::Policies::Policy::Paths::Hops::Sid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::Policies::Policy::Paths::Hops::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::Hops::Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::Hops::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::Hops::Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Policies::Policy::Paths::Hops::Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::Paths::Hops::Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::Paths::Hops::Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "label" || name == "ipv6")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::Hops::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-address"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::Hops::LocalAddress::~LocalAddress()
{
}

bool Xtc::Policies::Policy::Paths::Hops::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Xtc::Policies::Policy::Paths::Hops::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::Policies::Policy::Paths::Hops::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::Hops::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::Hops::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::Hops::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Policies::Policy::Paths::Hops::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::Paths::Hops::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::Paths::Hops::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Xtc::Policies::Policy::Paths::Hops::RemoteAddress::RemoteAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-address"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Policies::Policy::Paths::Hops::RemoteAddress::~RemoteAddress()
{
}

bool Xtc::Policies::Policy::Paths::Hops::RemoteAddress::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Xtc::Policies::Policy::Paths::Hops::RemoteAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::Policies::Policy::Paths::Hops::RemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Policies::Policy::Paths::Hops::RemoteAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Policies::Policy::Paths::Hops::RemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Policies::Policy::Paths::Hops::RemoteAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Policies::Policy::Paths::Hops::RemoteAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Policies::Policy::Paths::Hops::RemoteAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::Policies::Policy::Paths::Hops::RemoteAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Xtc::OnDemandColors::OnDemandColors()
{

    yang_name = "on-demand-colors"; yang_parent_name = "xtc"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::OnDemandColors::~OnDemandColors()
{
}

bool Xtc::OnDemandColors::has_data() const
{
    for (std::size_t index=0; index<on_demand_color.size(); index++)
    {
        if(on_demand_color[index]->has_data())
            return true;
    }
    return false;
}

bool Xtc::OnDemandColors::has_operation() const
{
    for (std::size_t index=0; index<on_demand_color.size(); index++)
    {
        if(on_demand_color[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Xtc::OnDemandColors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::OnDemandColors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-colors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::OnDemandColors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::OnDemandColors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-demand-color")
    {
        auto c = std::make_shared<Xtc::OnDemandColors::OnDemandColor>();
        c->parent = this;
        on_demand_color.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::OnDemandColors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : on_demand_color)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::OnDemandColors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Xtc::OnDemandColors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Xtc::OnDemandColors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-demand-color")
        return true;
    return false;
}

Xtc::OnDemandColors::OnDemandColor::OnDemandColor()
    :
    color{YType::int32, "color"},
    color_xr{YType::uint32, "color-xr"}
    	,
    disjoint_path_info(std::make_shared<Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo>())
{
    disjoint_path_info->parent = this;

    yang_name = "on-demand-color"; yang_parent_name = "on-demand-colors"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::OnDemandColors::OnDemandColor::~OnDemandColor()
{
}

bool Xtc::OnDemandColors::OnDemandColor::has_data() const
{
    return color.is_set
	|| color_xr.is_set
	|| (disjoint_path_info !=  nullptr && disjoint_path_info->has_data());
}

bool Xtc::OnDemandColors::OnDemandColor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(color_xr.yfilter)
	|| (disjoint_path_info !=  nullptr && disjoint_path_info->has_operation());
}

std::string Xtc::OnDemandColors::OnDemandColor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/on-demand-colors/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::OnDemandColors::OnDemandColor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-color" <<"[color='" <<color <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::OnDemandColors::OnDemandColor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (color_xr.is_set || is_set(color_xr.yfilter)) leaf_name_data.push_back(color_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::OnDemandColors::OnDemandColor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disjoint-path-info")
    {
        if(disjoint_path_info == nullptr)
        {
            disjoint_path_info = std::make_shared<Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo>();
        }
        return disjoint_path_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::OnDemandColors::OnDemandColor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disjoint_path_info != nullptr)
    {
        children["disjoint-path-info"] = disjoint_path_info;
    }

    return children;
}

void Xtc::OnDemandColors::OnDemandColor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color-xr")
    {
        color_xr = value;
        color_xr.value_namespace = name_space;
        color_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::OnDemandColors::OnDemandColor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "color-xr")
    {
        color_xr.yfilter = yfilter;
    }
}

bool Xtc::OnDemandColors::OnDemandColor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disjoint-path-info" || name == "color" || name == "color-xr")
        return true;
    return false;
}

Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::DisjointPathInfo()
    :
    disjointness_type{YType::enumeration, "disjointness-type"},
    group_id{YType::uint32, "group-id"},
    sub_id{YType::uint32, "sub-id"}
{

    yang_name = "disjoint-path-info"; yang_parent_name = "on-demand-color"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::~DisjointPathInfo()
{
}

bool Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::has_data() const
{
    return disjointness_type.is_set
	|| group_id.is_set
	|| sub_id.is_set;
}

bool Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disjointness_type.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(sub_id.yfilter);
}

std::string Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disjointness_type.is_set || is_set(disjointness_type.yfilter)) leaf_name_data.push_back(disjointness_type.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disjointness-type")
    {
        disjointness_type = value;
        disjointness_type.value_namespace = name_space;
        disjointness_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disjointness-type")
    {
        disjointness_type.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
}

bool Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disjointness-type" || name == "group-id" || name == "sub-id")
        return true;
    return false;
}

Xtc::Forwarding::Forwarding()
    :
    policy_forwardings(std::make_shared<Xtc::Forwarding::PolicyForwardings>())
{
    policy_forwardings->parent = this;

    yang_name = "forwarding"; yang_parent_name = "xtc"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::Forwarding::~Forwarding()
{
}

bool Xtc::Forwarding::has_data() const
{
    return (policy_forwardings !=  nullptr && policy_forwardings->has_data());
}

bool Xtc::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| (policy_forwardings !=  nullptr && policy_forwardings->has_operation());
}

std::string Xtc::Forwarding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-forwardings")
    {
        if(policy_forwardings == nullptr)
        {
            policy_forwardings = std::make_shared<Xtc::Forwarding::PolicyForwardings>();
        }
        return policy_forwardings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_forwardings != nullptr)
    {
        children["policy-forwardings"] = policy_forwardings;
    }

    return children;
}

void Xtc::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Xtc::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Xtc::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-forwardings")
        return true;
    return false;
}

Xtc::Forwarding::PolicyForwardings::PolicyForwardings()
{

    yang_name = "policy-forwardings"; yang_parent_name = "forwarding"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::Forwarding::PolicyForwardings::~PolicyForwardings()
{
}

bool Xtc::Forwarding::PolicyForwardings::has_data() const
{
    for (std::size_t index=0; index<policy_forwarding.size(); index++)
    {
        if(policy_forwarding[index]->has_data())
            return true;
    }
    return false;
}

bool Xtc::Forwarding::PolicyForwardings::has_operation() const
{
    for (std::size_t index=0; index<policy_forwarding.size(); index++)
    {
        if(policy_forwarding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Xtc::Forwarding::PolicyForwardings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::Forwarding::PolicyForwardings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-forwardings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Forwarding::PolicyForwardings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Forwarding::PolicyForwardings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-forwarding")
    {
        auto c = std::make_shared<Xtc::Forwarding::PolicyForwardings::PolicyForwarding>();
        c->parent = this;
        policy_forwarding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Forwarding::PolicyForwardings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy_forwarding)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::Forwarding::PolicyForwardings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Xtc::Forwarding::PolicyForwardings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Xtc::Forwarding::PolicyForwardings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-forwarding")
        return true;
    return false;
}

Xtc::Forwarding::PolicyForwardings::PolicyForwarding::PolicyForwarding()
    :
    name{YType::str, "name"},
    policy_name{YType::str, "policy-name"},
    is_local_label_valid{YType::boolean, "is-local-label-valid"},
    local_label{YType::uint32, "local-label"},
    are_stats_valid{YType::boolean, "are-stats-valid"},
    forwarding_stats_pkts{YType::uint64, "forwarding-stats-pkts"},
    forwarding_stats_bytes{YType::uint64, "forwarding-stats-bytes"}
{

    yang_name = "policy-forwarding"; yang_parent_name = "policy-forwardings"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::Forwarding::PolicyForwardings::PolicyForwarding::~PolicyForwarding()
{
}

bool Xtc::Forwarding::PolicyForwardings::PolicyForwarding::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return name.is_set
	|| policy_name.is_set
	|| is_local_label_valid.is_set
	|| local_label.is_set
	|| are_stats_valid.is_set
	|| forwarding_stats_pkts.is_set
	|| forwarding_stats_bytes.is_set;
}

bool Xtc::Forwarding::PolicyForwardings::PolicyForwarding::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(is_local_label_valid.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(are_stats_valid.yfilter)
	|| ydk::is_set(forwarding_stats_pkts.yfilter)
	|| ydk::is_set(forwarding_stats_bytes.yfilter);
}

std::string Xtc::Forwarding::PolicyForwardings::PolicyForwarding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/forwarding/policy-forwardings/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::Forwarding::PolicyForwardings::PolicyForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-forwarding" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Forwarding::PolicyForwardings::PolicyForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (is_local_label_valid.is_set || is_set(is_local_label_valid.yfilter)) leaf_name_data.push_back(is_local_label_valid.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (are_stats_valid.is_set || is_set(are_stats_valid.yfilter)) leaf_name_data.push_back(are_stats_valid.get_name_leafdata());
    if (forwarding_stats_pkts.is_set || is_set(forwarding_stats_pkts.yfilter)) leaf_name_data.push_back(forwarding_stats_pkts.get_name_leafdata());
    if (forwarding_stats_bytes.is_set || is_set(forwarding_stats_bytes.yfilter)) leaf_name_data.push_back(forwarding_stats_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Forwarding::PolicyForwardings::PolicyForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto c = std::make_shared<Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Forwarding::PolicyForwardings::PolicyForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::Forwarding::PolicyForwardings::PolicyForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-label-valid")
    {
        is_local_label_valid = value;
        is_local_label_valid.value_namespace = name_space;
        is_local_label_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-stats-valid")
    {
        are_stats_valid = value;
        are_stats_valid.value_namespace = name_space;
        are_stats_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-stats-pkts")
    {
        forwarding_stats_pkts = value;
        forwarding_stats_pkts.value_namespace = name_space;
        forwarding_stats_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-stats-bytes")
    {
        forwarding_stats_bytes = value;
        forwarding_stats_bytes.value_namespace = name_space;
        forwarding_stats_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::Forwarding::PolicyForwardings::PolicyForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "is-local-label-valid")
    {
        is_local_label_valid.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "are-stats-valid")
    {
        are_stats_valid.yfilter = yfilter;
    }
    if(value_path == "forwarding-stats-pkts")
    {
        forwarding_stats_pkts.yfilter = yfilter;
    }
    if(value_path == "forwarding-stats-bytes")
    {
        forwarding_stats_bytes.yfilter = yfilter;
    }
}

bool Xtc::Forwarding::PolicyForwardings::PolicyForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "name" || name == "policy-name" || name == "is-local-label-valid" || name == "local-label" || name == "are-stats-valid" || name == "forwarding-stats-pkts" || name == "forwarding-stats-bytes")
        return true;
    return false;
}

Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::Paths()
    :
    outgoing_interface{YType::str, "outgoing-interface"},
    next_hop_ipv4{YType::str, "next-hop-ipv4"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    is_protected{YType::boolean, "is-protected"},
    is_pure_bkup{YType::boolean, "is-pure-bkup"},
    load_metric{YType::uint32, "load-metric"},
    path_id{YType::uint8, "path-id"},
    bkup_path_id{YType::uint8, "bkup-path-id"},
    segment_list_name{YType::str, "segment-list-name"},
    are_stats_valid{YType::boolean, "are-stats-valid"},
    forwarding_stats_pkts{YType::uint64, "forwarding-stats-pkts"},
    forwarding_stats_bytes{YType::uint64, "forwarding-stats-bytes"},
    label_stack{YType::uint32, "label-stack"}
{

    yang_name = "paths"; yang_parent_name = "policy-forwarding"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::~Paths()
{
}

bool Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return outgoing_interface.is_set
	|| next_hop_ipv4.is_set
	|| next_hop_table_id.is_set
	|| is_protected.is_set
	|| is_pure_bkup.is_set
	|| load_metric.is_set
	|| path_id.is_set
	|| bkup_path_id.is_set
	|| segment_list_name.is_set
	|| are_stats_valid.is_set
	|| forwarding_stats_pkts.is_set
	|| forwarding_stats_bytes.is_set;
}

bool Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(next_hop_ipv4.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(is_protected.yfilter)
	|| ydk::is_set(is_pure_bkup.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(bkup_path_id.yfilter)
	|| ydk::is_set(segment_list_name.yfilter)
	|| ydk::is_set(are_stats_valid.yfilter)
	|| ydk::is_set(forwarding_stats_pkts.yfilter)
	|| ydk::is_set(forwarding_stats_bytes.yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (next_hop_ipv4.is_set || is_set(next_hop_ipv4.yfilter)) leaf_name_data.push_back(next_hop_ipv4.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (is_protected.is_set || is_set(is_protected.yfilter)) leaf_name_data.push_back(is_protected.get_name_leafdata());
    if (is_pure_bkup.is_set || is_set(is_pure_bkup.yfilter)) leaf_name_data.push_back(is_pure_bkup.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (bkup_path_id.is_set || is_set(bkup_path_id.yfilter)) leaf_name_data.push_back(bkup_path_id.get_name_leafdata());
    if (segment_list_name.is_set || is_set(segment_list_name.yfilter)) leaf_name_data.push_back(segment_list_name.get_name_leafdata());
    if (are_stats_valid.is_set || is_set(are_stats_valid.yfilter)) leaf_name_data.push_back(are_stats_valid.get_name_leafdata());
    if (forwarding_stats_pkts.is_set || is_set(forwarding_stats_pkts.yfilter)) leaf_name_data.push_back(forwarding_stats_pkts.get_name_leafdata());
    if (forwarding_stats_bytes.is_set || is_set(forwarding_stats_bytes.yfilter)) leaf_name_data.push_back(forwarding_stats_bytes.get_name_leafdata());

    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv4")
    {
        next_hop_ipv4 = value;
        next_hop_ipv4.value_namespace = name_space;
        next_hop_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protected")
    {
        is_protected = value;
        is_protected.value_namespace = name_space;
        is_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pure-bkup")
    {
        is_pure_bkup = value;
        is_pure_bkup.value_namespace = name_space;
        is_pure_bkup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkup-path-id")
    {
        bkup_path_id = value;
        bkup_path_id.value_namespace = name_space;
        bkup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-list-name")
    {
        segment_list_name = value;
        segment_list_name.value_namespace = name_space;
        segment_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-stats-valid")
    {
        are_stats_valid = value;
        are_stats_valid.value_namespace = name_space;
        are_stats_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-stats-pkts")
    {
        forwarding_stats_pkts = value;
        forwarding_stats_pkts.value_namespace = name_space;
        forwarding_stats_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-stats-bytes")
    {
        forwarding_stats_bytes = value;
        forwarding_stats_bytes.value_namespace = name_space;
        forwarding_stats_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv4")
    {
        next_hop_ipv4.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "is-protected")
    {
        is_protected.yfilter = yfilter;
    }
    if(value_path == "is-pure-bkup")
    {
        is_pure_bkup.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "bkup-path-id")
    {
        bkup_path_id.yfilter = yfilter;
    }
    if(value_path == "segment-list-name")
    {
        segment_list_name.yfilter = yfilter;
    }
    if(value_path == "are-stats-valid")
    {
        are_stats_valid.yfilter = yfilter;
    }
    if(value_path == "forwarding-stats-pkts")
    {
        forwarding_stats_pkts.yfilter = yfilter;
    }
    if(value_path == "forwarding-stats-bytes")
    {
        forwarding_stats_bytes.yfilter = yfilter;
    }
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool Xtc::Forwarding::PolicyForwardings::PolicyForwarding::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-interface" || name == "next-hop-ipv4" || name == "next-hop-table-id" || name == "is-protected" || name == "is-pure-bkup" || name == "load-metric" || name == "path-id" || name == "bkup-path-id" || name == "segment-list-name" || name == "are-stats-valid" || name == "forwarding-stats-pkts" || name == "forwarding-stats-bytes" || name == "label-stack")
        return true;
    return false;
}

Xtc::TopologySummary::TopologySummary()
    :
    nodes{YType::uint32, "nodes"},
    prefixes{YType::uint32, "prefixes"},
    prefix_sids{YType::uint32, "prefix-sids"},
    links{YType::uint32, "links"},
    adjacency_sids{YType::uint32, "adjacency-sids"}
{

    yang_name = "topology-summary"; yang_parent_name = "xtc"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::TopologySummary::~TopologySummary()
{
}

bool Xtc::TopologySummary::has_data() const
{
    return nodes.is_set
	|| prefixes.is_set
	|| prefix_sids.is_set
	|| links.is_set
	|| adjacency_sids.is_set;
}

bool Xtc::TopologySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nodes.yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(prefix_sids.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(adjacency_sids.yfilter);
}

std::string Xtc::TopologySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (prefix_sids.is_set || is_set(prefix_sids.yfilter)) leaf_name_data.push_back(prefix_sids.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (adjacency_sids.is_set || is_set(adjacency_sids.yfilter)) leaf_name_data.push_back(adjacency_sids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids = value;
        prefix_sids.value_namespace = name_space;
        prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids = value;
        adjacency_sids.value_namespace = name_space;
        adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids.yfilter = yfilter;
    }
}

bool Xtc::TopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "prefixes" || name == "prefix-sids" || name == "links" || name == "adjacency-sids")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNodes()
{

    yang_name = "topology-nodes"; yang_parent_name = "xtc"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::TopologyNodes::~TopologyNodes()
{
}

bool Xtc::TopologyNodes::has_data() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool Xtc::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Xtc::TopologyNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode>();
        c->parent = this;
        topology_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::TopologyNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Xtc::TopologyNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Xtc::TopologyNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::TopologyNode()
    :
    node_identifier{YType::int32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"},
    overload{YType::boolean, "overload"}
    	,
    node_protocol_identifier(std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier>())
{
    node_protocol_identifier->parent = this;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool Xtc::TopologyNodes::TopologyNode::has_data() const
{
    for (std::size_t index=0; index<prefix_sid.size(); index++)
    {
        if(prefix_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.size(); index++)
    {
        if(ipv4_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.size(); index++)
    {
        if(ipv6_link[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| overload.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid.size(); index++)
    {
        if(prefix_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.size(); index++)
    {
        if(ipv4_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.size(); index++)
    {
        if(ipv6_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/topology-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node" <<"[node-identifier='" <<node_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "prefix-sid")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode::PrefixSid>();
        c->parent = this;
        prefix_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-link")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link>();
        c->parent = this;
        ipv4_link.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-link")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link>();
        c->parent = this;
        ipv6_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_protocol_identifier != nullptr)
    {
        children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : prefix_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv4_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "prefix-sid" || name == "ipv4-link" || name == "ipv6-link" || name == "node-identifier" || name == "node-identifier-xr" || name == "overload")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::PrefixSid::PrefixSid()
    :
    sid_type{YType::enumeration, "sid-type"},
    algorithm{YType::uint32, "algorithm"},
    mpls_label{YType::uint32, "mpls-label"}
    	,
    sid_prefix(std::make_shared<Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::PrefixSid::~PrefixSid()
{
}

bool Xtc::TopologyNodes::TopologyNode::PrefixSid::has_data() const
{
    return sid_type.is_set
	|| algorithm.is_set
	|| mpls_label.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "algorithm" || name == "mpls-label")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::~SidPrefix()
{
}

bool Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::Ipv4Link()
    :
    local_ipv4_address{YType::str, "local-ipv4-address"},
    remote_ipv4_address{YType::str, "remote-ipv4-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"},
    administrative_groups{YType::uint32, "administrative-groups"},
    srlgs{YType::uint32, "srlgs"}
    	,
    local_igp_information(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>())
	,remote_node_protocol_identifier(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>())
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv4-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::~Ipv4Link()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_ipv4_address.is_set
	|| remote_ipv4_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| administrative_groups.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv4_address.yfilter)
	|| ydk::is_set(remote_ipv4_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(administrative_groups.yfilter)
	|| ydk::is_set(srlgs.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv4_address.is_set || is_set(local_ipv4_address.yfilter)) leaf_name_data.push_back(local_ipv4_address.get_name_leafdata());
    if (remote_ipv4_address.is_set || is_set(remote_ipv4_address.yfilter)) leaf_name_data.push_back(remote_ipv4_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (administrative_groups.is_set || is_set(administrative_groups.yfilter)) leaf_name_data.push_back(administrative_groups.get_name_leafdata());

    auto srlgs_name_datas = srlgs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlgs_name_datas.begin(), srlgs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_igp_information != nullptr)
    {
        children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address = value;
        local_ipv4_address.value_namespace = name_space;
        local_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address = value;
        remote_ipv4_address.value_namespace = name_space;
        remote_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-groups")
    {
        administrative_groups = value;
        administrative_groups.value_namespace = name_space;
        administrative_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlgs")
    {
        srlgs.append(value);
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "administrative-groups")
    {
        administrative_groups.yfilter = yfilter;
    }
    if(value_path == "srlgs")
    {
        srlgs.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "adjacency-sid" || name == "local-ipv4-address" || name == "remote-ipv4-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth" || name == "administrative-groups" || name == "srlgs")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::~Igp()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::~Isis()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::~Ospf()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::~Bgp()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    algorithm{YType::uint32, "algorithm"},
    mpls_label{YType::uint32, "mpls-label"}
    	,
    sid_prefix(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::~AdjacencySid()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_data() const
{
    return sid_type.is_set
	|| algorithm.is_set
	|| mpls_label.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "algorithm" || name == "mpls-label")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::Ipv6Link()
    :
    local_ipv6_address{YType::str, "local-ipv6-address"},
    remote_ipv6_address{YType::str, "remote-ipv6-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"}
    	,
    local_igp_information(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>())
	,remote_node_protocol_identifier(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>())
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv6-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::~Ipv6Link()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return local_ipv6_address.is_set
	|| remote_ipv6_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv6_address.yfilter)
	|| ydk::is_set(remote_ipv6_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv6_address.is_set || is_set(local_ipv6_address.yfilter)) leaf_name_data.push_back(local_ipv6_address.get_name_leafdata());
    if (remote_ipv6_address.is_set || is_set(remote_ipv6_address.yfilter)) leaf_name_data.push_back(remote_ipv6_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_igp_information != nullptr)
    {
        children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address = value;
        local_ipv6_address.value_namespace = name_space;
        local_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address = value;
        remote_ipv6_address.value_namespace = name_space;
        remote_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "adjacency-sid" || name == "local-ipv6-address" || name == "remote-ipv6-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::~Igp()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::~Isis()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::~Ospf()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::~Bgp()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    algorithm{YType::uint32, "algorithm"},
    mpls_label{YType::uint32, "mpls-label"}
    	,
    sid_prefix(std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::~AdjacencySid()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_data() const
{
    return sid_type.is_set
	|| algorithm.is_set
	|| mpls_label.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "algorithm" || name == "mpls-label")
        return true;
    return false;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfos()
{

    yang_name = "prefix-infos"; yang_parent_name = "xtc"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::PrefixInfos::~PrefixInfos()
{
}

bool Xtc::PrefixInfos::has_data() const
{
    for (std::size_t index=0; index<prefix_info.size(); index++)
    {
        if(prefix_info[index]->has_data())
            return true;
    }
    return false;
}

bool Xtc::PrefixInfos::has_operation() const
{
    for (std::size_t index=0; index<prefix_info.size(); index++)
    {
        if(prefix_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Xtc::PrefixInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::PrefixInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-info")
    {
        auto c = std::make_shared<Xtc::PrefixInfos::PrefixInfo>();
        c->parent = this;
        prefix_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefix_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::PrefixInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Xtc::PrefixInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Xtc::PrefixInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-info")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfo::PrefixInfo()
    :
    node_identifier{YType::int32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"}
    	,
    node_protocol_identifier(std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>())
{
    node_protocol_identifier->parent = this;

    yang_name = "prefix-info"; yang_parent_name = "prefix-infos"; is_top_level_class = false; has_list_ancestor = false;
}

Xtc::PrefixInfos::PrefixInfo::~PrefixInfo()
{
}

bool Xtc::PrefixInfos::PrefixInfo::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool Xtc::PrefixInfos::PrefixInfo::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string Xtc::PrefixInfos::PrefixInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-oper:xtc/prefix-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Xtc::PrefixInfos::PrefixInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-info" <<"[node-identifier='" <<node_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::PrefixInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::PrefixInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Xtc::PrefixInfos::PrefixInfo::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::PrefixInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_protocol_identifier != nullptr)
    {
        children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::PrefixInfos::PrefixInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::PrefixInfos::PrefixInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
}

bool Xtc::PrefixInfos::PrefixInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "address" || name == "node-identifier" || name == "node-identifier-xr")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

Xtc::PrefixInfos::PrefixInfo::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

Xtc::PrefixInfos::PrefixInfo::Address::~Address()
{
}

bool Xtc::PrefixInfos::PrefixInfo::Address::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Xtc::PrefixInfos::PrefixInfo::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Xtc::PrefixInfos::PrefixInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Xtc::PrefixInfos::PrefixInfo::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Xtc::PrefixInfos::PrefixInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Xtc::PrefixInfos::PrefixInfo::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Xtc::PrefixInfos::PrefixInfo::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Xtc::PrefixInfos::PrefixInfo::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Xtc::PrefixInfos::PrefixInfo::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

const Enum::YLeaf XtcSid1::sr_protected_adj_sid {1, "sr-protected-adj-sid"};
const Enum::YLeaf XtcSid1::sr_unprotected_adj_sid {2, "sr-unprotected-adj-sid"};
const Enum::YLeaf XtcSid1::sr_bgp_egress_peer_engineering_sid {3, "sr-bgp-egress-peer-engineering-sid"};
const Enum::YLeaf XtcSid1::sr_reqular_prefix_sid {4, "sr-reqular-prefix-sid"};
const Enum::YLeaf XtcSid1::sr_strict_prefix_sid {5, "sr-strict-prefix-sid"};

const Enum::YLeaf XtcIgpInfoId::isis {1, "isis"};
const Enum::YLeaf XtcIgpInfoId::ospf {2, "ospf"};
const Enum::YLeaf XtcIgpInfoId::bgp {3, "bgp"};

const Enum::YLeaf XtcDisjointness::no_disjointness {0, "no-disjointness"};
const Enum::YLeaf XtcDisjointness::link_disjointness {1, "link-disjointness"};
const Enum::YLeaf XtcDisjointness::node_disjointness {2, "node-disjointness"};
const Enum::YLeaf XtcDisjointness::srlg_disjointness {3, "srlg-disjointness"};
const Enum::YLeaf XtcDisjointness::srlg_node_disjointness {4, "srlg-node-disjointness"};

const Enum::YLeaf XtcSrSid::ipv4_node_sid {0, "ipv4-node-sid"};
const Enum::YLeaf XtcSrSid::ipv4_adjacency_sid {1, "ipv4-adjacency-sid"};
const Enum::YLeaf XtcSrSid::unknown_sid {2, "unknown-sid"};

const Enum::YLeaf XtcPolicyPath::explicit_ {0, "explicit"};
const Enum::YLeaf XtcPolicyPath::dynamic {1, "dynamic"};
const Enum::YLeaf XtcPolicyPath::dynamic_pce {2, "dynamic-pce"};

const Enum::YLeaf XtcBsidError::none {0, "none"};
const Enum::YLeaf XtcBsidError::allocating {1, "allocating"};
const Enum::YLeaf XtcBsidError::exists {2, "exists"};
const Enum::YLeaf XtcBsidError::internal {3, "internal"};
const Enum::YLeaf XtcBsidError::color_endpoint_exists {4, "color-endpoint-exists"};
const Enum::YLeaf XtcBsidError::forwarding_rewrite_error {5, "forwarding-rewrite-error"};
const Enum::YLeaf XtcBsidError::srlb_invalid_label {6, "srlb-invalid-label"};

const Enum::YLeaf XtcBsidMode::explicit_ {0, "explicit"};
const Enum::YLeaf XtcBsidMode::dynamic {1, "dynamic"};

const Enum::YLeaf XtcSid::none {0, "none"};
const Enum::YLeaf XtcSid::mpls {1, "mpls"};
const Enum::YLeaf XtcSid::ipv6 {2, "ipv6"};

const Enum::YLeaf XtcAfId::none {0, "none"};
const Enum::YLeaf XtcAfId::ipv4 {1, "ipv4"};
const Enum::YLeaf XtcAfId::ipv6 {2, "ipv6"};


}
}
