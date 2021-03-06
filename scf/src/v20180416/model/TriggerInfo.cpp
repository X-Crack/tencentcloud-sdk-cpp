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

#include <tencentcloud/scf/v20180416/model/TriggerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

TriggerInfo::TriggerInfo() :
    m_enableHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_triggerDescHasBeenSet(false),
    m_availableStatusHasBeenSet(false),
    m_customArgumentHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_modTimeHasBeenSet(false)
{
}

CoreInternalOutcome TriggerInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Qualifier") && !value["Qualifier"].IsNull())
    {
        if (!value["Qualifier"].IsString())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.Qualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifier = string(value["Qualifier"].GetString());
        m_qualifierHasBeenSet = true;
    }

    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TriggerDesc") && !value["TriggerDesc"].IsNull())
    {
        if (!value["TriggerDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.TriggerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerDesc = string(value["TriggerDesc"].GetString());
        m_triggerDescHasBeenSet = true;
    }

    if (value.HasMember("AvailableStatus") && !value["AvailableStatus"].IsNull())
    {
        if (!value["AvailableStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.AvailableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableStatus = string(value["AvailableStatus"].GetString());
        m_availableStatusHasBeenSet = true;
    }

    if (value.HasMember("CustomArgument") && !value["CustomArgument"].IsNull())
    {
        if (!value["CustomArgument"].IsString())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.CustomArgument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customArgument = string(value["CustomArgument"].GetString());
        m_customArgumentHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TriggerInfo.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_triggerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_availableStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AvailableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_availableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_customArgumentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomArgument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_customArgument.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TriggerInfo::GetEnable() const
{
    return m_enable;
}

void TriggerInfo::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool TriggerInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string TriggerInfo::GetQualifier() const
{
    return m_qualifier;
}

void TriggerInfo::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool TriggerInfo::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

string TriggerInfo::GetTriggerName() const
{
    return m_triggerName;
}

void TriggerInfo::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool TriggerInfo::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string TriggerInfo::GetType() const
{
    return m_type;
}

void TriggerInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TriggerInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TriggerInfo::GetTriggerDesc() const
{
    return m_triggerDesc;
}

void TriggerInfo::SetTriggerDesc(const string& _triggerDesc)
{
    m_triggerDesc = _triggerDesc;
    m_triggerDescHasBeenSet = true;
}

bool TriggerInfo::TriggerDescHasBeenSet() const
{
    return m_triggerDescHasBeenSet;
}

string TriggerInfo::GetAvailableStatus() const
{
    return m_availableStatus;
}

void TriggerInfo::SetAvailableStatus(const string& _availableStatus)
{
    m_availableStatus = _availableStatus;
    m_availableStatusHasBeenSet = true;
}

bool TriggerInfo::AvailableStatusHasBeenSet() const
{
    return m_availableStatusHasBeenSet;
}

string TriggerInfo::GetCustomArgument() const
{
    return m_customArgument;
}

void TriggerInfo::SetCustomArgument(const string& _customArgument)
{
    m_customArgument = _customArgument;
    m_customArgumentHasBeenSet = true;
}

bool TriggerInfo::CustomArgumentHasBeenSet() const
{
    return m_customArgumentHasBeenSet;
}

string TriggerInfo::GetAddTime() const
{
    return m_addTime;
}

void TriggerInfo::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool TriggerInfo::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string TriggerInfo::GetModTime() const
{
    return m_modTime;
}

void TriggerInfo::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool TriggerInfo::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

