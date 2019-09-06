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

#include <tencentcloud/batch/v20170312/model/VirtualPrivateCloud.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

VirtualPrivateCloud::VirtualPrivateCloud() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_asVpcGatewayHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false)
{
}

CoreInternalOutcome VirtualPrivateCloud::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VirtualPrivateCloud.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VirtualPrivateCloud.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("AsVpcGateway") && !value["AsVpcGateway"].IsNull())
    {
        if (!value["AsVpcGateway"].IsBool())
        {
            return CoreInternalOutcome(Error("response `VirtualPrivateCloud.AsVpcGateway` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asVpcGateway = value["AsVpcGateway"].GetBool();
        m_asVpcGatewayHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `VirtualPrivateCloud.PrivateIpAddresses` is not array type"));

        const Value &tmpValue = value["PrivateIpAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirtualPrivateCloud::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_asVpcGatewayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AsVpcGateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asVpcGateway, allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VirtualPrivateCloud::GetVpcId() const
{
    return m_vpcId;
}

void VirtualPrivateCloud::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VirtualPrivateCloud::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VirtualPrivateCloud::GetSubnetId() const
{
    return m_subnetId;
}

void VirtualPrivateCloud::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool VirtualPrivateCloud::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool VirtualPrivateCloud::GetAsVpcGateway() const
{
    return m_asVpcGateway;
}

void VirtualPrivateCloud::SetAsVpcGateway(const bool& _asVpcGateway)
{
    m_asVpcGateway = _asVpcGateway;
    m_asVpcGatewayHasBeenSet = true;
}

bool VirtualPrivateCloud::AsVpcGatewayHasBeenSet() const
{
    return m_asVpcGatewayHasBeenSet;
}

vector<string> VirtualPrivateCloud::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void VirtualPrivateCloud::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool VirtualPrivateCloud::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}
