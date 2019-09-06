/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tsf/v20180326/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_instanceDescHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceAvailableStatusHasBeenSet(false),
    m_serviceInstanceStatusHasBeenSet(false),
    m_countInTsfHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_instanceCreatedTimeHasBeenSet(false),
    m_instanceExpiredTimeHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceTotalCpuHasBeenSet(false),
    m_instanceTotalMemHasBeenSet(false),
    m_instanceUsedCpuHasBeenSet(false),
    m_instanceUsedMemHasBeenSet(false),
    m_instanceLimitCpuHasBeenSet(false),
    m_instanceLimitMemHasBeenSet(false),
    m_instancePkgVersionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_restrictStateHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operationStateHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("InstanceDesc") && !value["InstanceDesc"].IsNull())
    {
        if (!value["InstanceDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDesc = string(value["InstanceDesc"].GetString());
        m_instanceDescHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceAvailableStatus") && !value["InstanceAvailableStatus"].IsNull())
    {
        if (!value["InstanceAvailableStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceAvailableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceAvailableStatus = string(value["InstanceAvailableStatus"].GetString());
        m_instanceAvailableStatusHasBeenSet = true;
    }

    if (value.HasMember("ServiceInstanceStatus") && !value["ServiceInstanceStatus"].IsNull())
    {
        if (!value["ServiceInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ServiceInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceInstanceStatus = string(value["ServiceInstanceStatus"].GetString());
        m_serviceInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("CountInTsf") && !value["CountInTsf"].IsNull())
    {
        if (!value["CountInTsf"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Instance.CountInTsf` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_countInTsf = value["CountInTsf"].GetInt64();
        m_countInTsfHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceCreatedTime") && !value["InstanceCreatedTime"].IsNull())
    {
        if (!value["InstanceCreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceCreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCreatedTime = string(value["InstanceCreatedTime"].GetString());
        m_instanceCreatedTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceExpiredTime") && !value["InstanceExpiredTime"].IsNull())
    {
        if (!value["InstanceExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceExpiredTime = string(value["InstanceExpiredTime"].GetString());
        m_instanceExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTotalCpu") && !value["InstanceTotalCpu"].IsNull())
    {
        if (!value["InstanceTotalCpu"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceTotalCpu` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTotalCpu = value["InstanceTotalCpu"].GetDouble();
        m_instanceTotalCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceTotalMem") && !value["InstanceTotalMem"].IsNull())
    {
        if (!value["InstanceTotalMem"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceTotalMem` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTotalMem = value["InstanceTotalMem"].GetDouble();
        m_instanceTotalMemHasBeenSet = true;
    }

    if (value.HasMember("InstanceUsedCpu") && !value["InstanceUsedCpu"].IsNull())
    {
        if (!value["InstanceUsedCpu"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceUsedCpu` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUsedCpu = value["InstanceUsedCpu"].GetDouble();
        m_instanceUsedCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceUsedMem") && !value["InstanceUsedMem"].IsNull())
    {
        if (!value["InstanceUsedMem"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceUsedMem` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUsedMem = value["InstanceUsedMem"].GetDouble();
        m_instanceUsedMemHasBeenSet = true;
    }

    if (value.HasMember("InstanceLimitCpu") && !value["InstanceLimitCpu"].IsNull())
    {
        if (!value["InstanceLimitCpu"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceLimitCpu` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceLimitCpu = value["InstanceLimitCpu"].GetDouble();
        m_instanceLimitCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceLimitMem") && !value["InstanceLimitMem"].IsNull())
    {
        if (!value["InstanceLimitMem"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceLimitMem` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceLimitMem = value["InstanceLimitMem"].GetDouble();
        m_instanceLimitMemHasBeenSet = true;
    }

    if (value.HasMember("InstancePkgVersion") && !value["InstancePkgVersion"].IsNull())
    {
        if (!value["InstancePkgVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstancePkgVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instancePkgVersion = string(value["InstancePkgVersion"].GetString());
        m_instancePkgVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("RestrictState") && !value["RestrictState"].IsNull())
    {
        if (!value["RestrictState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.RestrictState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictState = string(value["RestrictState"].GetString());
        m_restrictStateHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OperationState") && !value["OperationState"].IsNull())
    {
        if (!value["OperationState"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Instance.OperationState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operationState = value["OperationState"].GetInt64();
        m_operationStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAvailableStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceAvailableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceAvailableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceInstanceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_countInTsfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CountInTsf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countInTsf, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCreatedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceCreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceCreatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceExpiredTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceExpiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTotalCpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceTotalCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceTotalCpu, allocator);
    }

    if (m_instanceTotalMemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceTotalMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceTotalMem, allocator);
    }

    if (m_instanceUsedCpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceUsedCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceUsedCpu, allocator);
    }

    if (m_instanceUsedMemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceUsedMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceUsedMem, allocator);
    }

    if (m_instanceLimitCpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceLimitCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceLimitCpu, allocator);
    }

    if (m_instanceLimitMemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceLimitMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceLimitMem, allocator);
    }

    if (m_instancePkgVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstancePkgVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instancePkgVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_restrictStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RestrictState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_restrictState.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operationStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operationState, allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetInstanceName() const
{
    return m_instanceName;
}

void Instance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string Instance::GetLanIp() const
{
    return m_lanIp;
}

void Instance::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool Instance::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string Instance::GetWanIp() const
{
    return m_wanIp;
}

void Instance::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool Instance::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string Instance::GetInstanceDesc() const
{
    return m_instanceDesc;
}

void Instance::SetInstanceDesc(const string& _instanceDesc)
{
    m_instanceDesc = _instanceDesc;
    m_instanceDescHasBeenSet = true;
}

bool Instance::InstanceDescHasBeenSet() const
{
    return m_instanceDescHasBeenSet;
}

string Instance::GetClusterId() const
{
    return m_clusterId;
}

void Instance::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Instance::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Instance::GetClusterName() const
{
    return m_clusterName;
}

void Instance::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Instance::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Instance::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void Instance::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool Instance::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string Instance::GetInstanceAvailableStatus() const
{
    return m_instanceAvailableStatus;
}

void Instance::SetInstanceAvailableStatus(const string& _instanceAvailableStatus)
{
    m_instanceAvailableStatus = _instanceAvailableStatus;
    m_instanceAvailableStatusHasBeenSet = true;
}

bool Instance::InstanceAvailableStatusHasBeenSet() const
{
    return m_instanceAvailableStatusHasBeenSet;
}

string Instance::GetServiceInstanceStatus() const
{
    return m_serviceInstanceStatus;
}

void Instance::SetServiceInstanceStatus(const string& _serviceInstanceStatus)
{
    m_serviceInstanceStatus = _serviceInstanceStatus;
    m_serviceInstanceStatusHasBeenSet = true;
}

bool Instance::ServiceInstanceStatusHasBeenSet() const
{
    return m_serviceInstanceStatusHasBeenSet;
}

int64_t Instance::GetCountInTsf() const
{
    return m_countInTsf;
}

void Instance::SetCountInTsf(const int64_t& _countInTsf)
{
    m_countInTsf = _countInTsf;
    m_countInTsfHasBeenSet = true;
}

bool Instance::CountInTsfHasBeenSet() const
{
    return m_countInTsfHasBeenSet;
}

string Instance::GetGroupId() const
{
    return m_groupId;
}

void Instance::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Instance::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Instance::GetApplicationId() const
{
    return m_applicationId;
}

void Instance::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool Instance::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string Instance::GetApplicationName() const
{
    return m_applicationName;
}

void Instance::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool Instance::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string Instance::GetInstanceCreatedTime() const
{
    return m_instanceCreatedTime;
}

void Instance::SetInstanceCreatedTime(const string& _instanceCreatedTime)
{
    m_instanceCreatedTime = _instanceCreatedTime;
    m_instanceCreatedTimeHasBeenSet = true;
}

bool Instance::InstanceCreatedTimeHasBeenSet() const
{
    return m_instanceCreatedTimeHasBeenSet;
}

string Instance::GetInstanceExpiredTime() const
{
    return m_instanceExpiredTime;
}

void Instance::SetInstanceExpiredTime(const string& _instanceExpiredTime)
{
    m_instanceExpiredTime = _instanceExpiredTime;
    m_instanceExpiredTimeHasBeenSet = true;
}

bool Instance::InstanceExpiredTimeHasBeenSet() const
{
    return m_instanceExpiredTimeHasBeenSet;
}

string Instance::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void Instance::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool Instance::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

double Instance::GetInstanceTotalCpu() const
{
    return m_instanceTotalCpu;
}

void Instance::SetInstanceTotalCpu(const double& _instanceTotalCpu)
{
    m_instanceTotalCpu = _instanceTotalCpu;
    m_instanceTotalCpuHasBeenSet = true;
}

bool Instance::InstanceTotalCpuHasBeenSet() const
{
    return m_instanceTotalCpuHasBeenSet;
}

double Instance::GetInstanceTotalMem() const
{
    return m_instanceTotalMem;
}

void Instance::SetInstanceTotalMem(const double& _instanceTotalMem)
{
    m_instanceTotalMem = _instanceTotalMem;
    m_instanceTotalMemHasBeenSet = true;
}

bool Instance::InstanceTotalMemHasBeenSet() const
{
    return m_instanceTotalMemHasBeenSet;
}

double Instance::GetInstanceUsedCpu() const
{
    return m_instanceUsedCpu;
}

void Instance::SetInstanceUsedCpu(const double& _instanceUsedCpu)
{
    m_instanceUsedCpu = _instanceUsedCpu;
    m_instanceUsedCpuHasBeenSet = true;
}

bool Instance::InstanceUsedCpuHasBeenSet() const
{
    return m_instanceUsedCpuHasBeenSet;
}

double Instance::GetInstanceUsedMem() const
{
    return m_instanceUsedMem;
}

void Instance::SetInstanceUsedMem(const double& _instanceUsedMem)
{
    m_instanceUsedMem = _instanceUsedMem;
    m_instanceUsedMemHasBeenSet = true;
}

bool Instance::InstanceUsedMemHasBeenSet() const
{
    return m_instanceUsedMemHasBeenSet;
}

double Instance::GetInstanceLimitCpu() const
{
    return m_instanceLimitCpu;
}

void Instance::SetInstanceLimitCpu(const double& _instanceLimitCpu)
{
    m_instanceLimitCpu = _instanceLimitCpu;
    m_instanceLimitCpuHasBeenSet = true;
}

bool Instance::InstanceLimitCpuHasBeenSet() const
{
    return m_instanceLimitCpuHasBeenSet;
}

double Instance::GetInstanceLimitMem() const
{
    return m_instanceLimitMem;
}

void Instance::SetInstanceLimitMem(const double& _instanceLimitMem)
{
    m_instanceLimitMem = _instanceLimitMem;
    m_instanceLimitMemHasBeenSet = true;
}

bool Instance::InstanceLimitMemHasBeenSet() const
{
    return m_instanceLimitMemHasBeenSet;
}

string Instance::GetInstancePkgVersion() const
{
    return m_instancePkgVersion;
}

void Instance::SetInstancePkgVersion(const string& _instancePkgVersion)
{
    m_instancePkgVersion = _instancePkgVersion;
    m_instancePkgVersionHasBeenSet = true;
}

bool Instance::InstancePkgVersionHasBeenSet() const
{
    return m_instancePkgVersionHasBeenSet;
}

string Instance::GetClusterType() const
{
    return m_clusterType;
}

void Instance::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool Instance::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string Instance::GetRestrictState() const
{
    return m_restrictState;
}

void Instance::SetRestrictState(const string& _restrictState)
{
    m_restrictState = _restrictState;
    m_restrictStateHasBeenSet = true;
}

bool Instance::RestrictStateHasBeenSet() const
{
    return m_restrictStateHasBeenSet;
}

string Instance::GetUpdateTime() const
{
    return m_updateTime;
}

void Instance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Instance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t Instance::GetOperationState() const
{
    return m_operationState;
}

void Instance::SetOperationState(const int64_t& _operationState)
{
    m_operationState = _operationState;
    m_operationStateHasBeenSet = true;
}

bool Instance::OperationStateHasBeenSet() const
{
    return m_operationStateHasBeenSet;
}
