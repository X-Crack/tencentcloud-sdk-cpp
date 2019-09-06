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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/UrlRecord.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * GetDisableRecords返回参数结构体
                */
                class GetDisableRecordsResponse : public AbstractModel
                {
                public:
                    GetDisableRecordsResponse();
                    ~GetDisableRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取封禁历史记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UrlRecordList 封禁历史记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UrlRecord> GetUrlRecordList() const;

                    /**
                     * 判断参数 UrlRecordList 是否已赋值
                     * @return UrlRecordList 是否已赋值
                     */
                    bool UrlRecordListHasBeenSet() const;

                private:

                    /**
                     * 封禁历史记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UrlRecord> m_urlRecordList;
                    bool m_urlRecordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSRESPONSE_H_