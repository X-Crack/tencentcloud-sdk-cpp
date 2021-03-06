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

#include <tencentcloud/redis/v20180412/model/CreateInstanceAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

CreateInstanceAccountRequest::CreateInstanceAccountRequest() :
    m_instanceIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_accountPasswordHasBeenSet(false),
    m_readonlyPolicyHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateInstanceAccountRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accountPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_readonlyPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReadonlyPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_readonlyPolicy.begin(); itr != m_readonlyPolicy.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privilegeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_privilege.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceAccountRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateInstanceAccountRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateInstanceAccountRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateInstanceAccountRequest::GetAccountName() const
{
    return m_accountName;
}

void CreateInstanceAccountRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool CreateInstanceAccountRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string CreateInstanceAccountRequest::GetAccountPassword() const
{
    return m_accountPassword;
}

void CreateInstanceAccountRequest::SetAccountPassword(const string& _accountPassword)
{
    m_accountPassword = _accountPassword;
    m_accountPasswordHasBeenSet = true;
}

bool CreateInstanceAccountRequest::AccountPasswordHasBeenSet() const
{
    return m_accountPasswordHasBeenSet;
}

vector<string> CreateInstanceAccountRequest::GetReadonlyPolicy() const
{
    return m_readonlyPolicy;
}

void CreateInstanceAccountRequest::SetReadonlyPolicy(const vector<string>& _readonlyPolicy)
{
    m_readonlyPolicy = _readonlyPolicy;
    m_readonlyPolicyHasBeenSet = true;
}

bool CreateInstanceAccountRequest::ReadonlyPolicyHasBeenSet() const
{
    return m_readonlyPolicyHasBeenSet;
}

string CreateInstanceAccountRequest::GetPrivilege() const
{
    return m_privilege;
}

void CreateInstanceAccountRequest::SetPrivilege(const string& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool CreateInstanceAccountRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

string CreateInstanceAccountRequest::GetRemark() const
{
    return m_remark;
}

void CreateInstanceAccountRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateInstanceAccountRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


