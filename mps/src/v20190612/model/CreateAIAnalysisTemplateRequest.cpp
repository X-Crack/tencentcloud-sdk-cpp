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

#include <tencentcloud/mps/v20190612/model/CreateAIAnalysisTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

CreateAIAnalysisTemplateRequest::CreateAIAnalysisTemplateRequest() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_classificationConfigureHasBeenSet(false),
    m_tagConfigureHasBeenSet(false),
    m_coverConfigureHasBeenSet(false),
    m_frameTagConfigureHasBeenSet(false)
{
}

string CreateAIAnalysisTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassificationConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_classificationConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tagConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_coverConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_coverConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_frameTagConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FrameTagConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_frameTagConfigure.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAIAnalysisTemplateRequest::GetName() const
{
    return m_name;
}

void CreateAIAnalysisTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAIAnalysisTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAIAnalysisTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateAIAnalysisTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateAIAnalysisTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

ClassificationConfigureInfo CreateAIAnalysisTemplateRequest::GetClassificationConfigure() const
{
    return m_classificationConfigure;
}

void CreateAIAnalysisTemplateRequest::SetClassificationConfigure(const ClassificationConfigureInfo& _classificationConfigure)
{
    m_classificationConfigure = _classificationConfigure;
    m_classificationConfigureHasBeenSet = true;
}

bool CreateAIAnalysisTemplateRequest::ClassificationConfigureHasBeenSet() const
{
    return m_classificationConfigureHasBeenSet;
}

TagConfigureInfo CreateAIAnalysisTemplateRequest::GetTagConfigure() const
{
    return m_tagConfigure;
}

void CreateAIAnalysisTemplateRequest::SetTagConfigure(const TagConfigureInfo& _tagConfigure)
{
    m_tagConfigure = _tagConfigure;
    m_tagConfigureHasBeenSet = true;
}

bool CreateAIAnalysisTemplateRequest::TagConfigureHasBeenSet() const
{
    return m_tagConfigureHasBeenSet;
}

CoverConfigureInfo CreateAIAnalysisTemplateRequest::GetCoverConfigure() const
{
    return m_coverConfigure;
}

void CreateAIAnalysisTemplateRequest::SetCoverConfigure(const CoverConfigureInfo& _coverConfigure)
{
    m_coverConfigure = _coverConfigure;
    m_coverConfigureHasBeenSet = true;
}

bool CreateAIAnalysisTemplateRequest::CoverConfigureHasBeenSet() const
{
    return m_coverConfigureHasBeenSet;
}

FrameTagConfigureInfo CreateAIAnalysisTemplateRequest::GetFrameTagConfigure() const
{
    return m_frameTagConfigure;
}

void CreateAIAnalysisTemplateRequest::SetFrameTagConfigure(const FrameTagConfigureInfo& _frameTagConfigure)
{
    m_frameTagConfigure = _frameTagConfigure;
    m_frameTagConfigureHasBeenSet = true;
}

bool CreateAIAnalysisTemplateRequest::FrameTagConfigureHasBeenSet() const
{
    return m_frameTagConfigureHasBeenSet;
}


